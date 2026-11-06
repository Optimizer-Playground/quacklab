# quacklab

quacklab is a research-focused fork of [DuckDB](https://duckdb.org) that provides _query hints_ to modify the optimizer
behavior.
Query hints can be used to change the join order of a query plan, to overwrite cardinality estimates for base tables and joins,
or to change the physical operators used to calculate intermediates[^1].

## Repo Layout

The `quacklab-patches` branch is used to track our changes to upstream DuckDB. It should not be used directly.
For the DuckDB versions that we support, dedicated `quacklab-[DuckDB release]` branches exist, such as `quacklab-v1.4-andium`.
These branches are used to apply our quacklab patches to the specific DuckDB release. Use these branches to build quacklab.

## Installation

quacklab can be installed like vanilla DuckDB. In short, you need the following to build quacklab:

- a C++ compiler with support for C++ 17
- CMake
- although not strictly required, it is recommended to use Ninja as the build system. This automatically parallelizes the
  compilation process (see [DuckDB docs](https://github.com/duckdb/duckdb/blob/main/CONTRIBUTING.md#building))

Once all requirements are satisfied, you can build quacklab like normal DuckDB:

```bash
GEN=ninja make
```

The DuckDB binary will be located in `build/release/duckdb` by default.

If the underlying hint grammar was changed, you need to regenerate the parser before building quacklab.
See the section below on _Updating the grammar_ for details. The most recent version of the grammar is checked
into the repository, so you normally do not need to do anything.

## Usage

quacklab can be used as a drop-in replacement for DuckDB. The optimizer hints are embedded in a comment that is shipped with
the actual query like so:

```sql
explain /*=quack_lab= card(t #42) card(mi #24) */ select count(*) from title t join movie_info mi on t.id = mi.movie_id;
```

The following hints are supported:

**`JoinOrder`** controls the join order of the query. The syntax is: `JoinOrder(((t1 t2) t3))`. Tables can be referenced by
their name or alias. You can also force bushy plans like so: `((t1 t2) (t3 t4))`. Notice that the first pair of parentheses
is always required, i.e. for two tables you must use `JoinOrder((t1 t2))` and not ~~`JoinOrder(t1 t2)`~~. The hint must
reference every table of the join exactly once, otherwise the query fails with an error.

**`Card`** sets the cardinality estimate for a particular intermediate. The syntax is: `Card(t #10000)` where the first part
describes the intermediate and the second part after the `#` sets the cardinality. Tables can be referenced by their name or
alias. You can set the cardinality of base tables (`Card(t1 #42)`) as well as joins (`Card(t1 t2 t3 #42000)`). All
cardinalities refer to the _output cardinality_, i.e. after all applicable predicates.

A hinted cardinality is used as-is for its intermediate. Intermediates without a hint of their own still take the hints on
smaller intermediates into account[^2]. Base table hints replace the table's cardinality in DuckDB's estimation formula. Join
hints scale DuckDB's estimate by how much they deviate from DuckDB's estimate for the hinted join. For example, given
`Card(t1 t2 #10)` and a DuckDB estimate of 5,000 rows for `t1 ⋈ t2`, the estimate for `t1 ⋈ t2 ⋈ t3` is multiplied by
10 / 5,000. This applies to every intermediate that contains `t1` and `t2`, regardless of the join order. If multiple
join hints apply to the same intermediate:

- hints on disjoint sets of tables are all applied, e.g. `Card(t1 t2 #10)` and `Card(t3 t4 #30)` for `t1 ⋈ t2 ⋈ t3 ⋈ t4`
- if hints overlap, the hint covering more tables wins. Among hints of the same size, the one that leads to the larger
  estimate wins. Hints that overlap an already applied hint are ignored.

An estimate obtained this way does not drop below 1 row, unless DuckDB's own estimate was already 0.

**`NestLoop`**, **`HashJoin`**, **`MergeJoin`** control the physical operator that is used to compute a particular join[^1].
The syntax is `NestLoop(t1 t2 t3)`. Tables can be referenced by their name or alias.

## Updating the grammar

We use [ANTLR](https://antlr.org) to generate the parser for the hint syntax. In turn, ANTLR requires a Java runtime to execute.
Make sure to have a JDK (version 11 or later) installed and available in your `PATH` before proceeding.

Generate the hint parser like so:

```bash
cd third_party/antlr4
java -jar antlr-4.13.2-complete.jar -Dlanguage=Cpp -Xexact-output-dir -o ../../src/hinting/grammar ../../src/hinting/grammar/HintBlock.g4
```

[^1]: support for this is currently very limited due to restrictions of the DuckDB execution engine. For example, join
      operators are not implemented as general-purpose operators. Instead, they are tied to specific types of join predicates.
      Quacklab implements the logic to produce query plans with the desired operators, however these plans usually cannot be
      executed (as of DuckDB v2.0-cyanoptera).
[^2]: vanilla DuckDB computes the cardinality of a larger intermediate always based on the base tables, not based on the
      cardinalities of smaller intermediates. However, this would essentially break all our cardinality estimation if we
      would hint a small intermediate to have a larger cardinality than vanilla DuckDB estimates. This estimate would be gone
      again.
