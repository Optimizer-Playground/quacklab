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

quacklab can be installed like vanilla DuckDB with one caveat: we use [ANTLR](https://antlr.org) to generate the parser for
the hint syntax. In turn, ANTLR requires a Java runtime to execute. To summarize, you need the following to build quacklab:

- a C++ compiler with support for C++ 17
- CMake
- although not strictly required, it is recommended to use Ninja as the build system. This automatically parallelizes the
  compilation process (see [DuckDB docs](https://github.com/duckdb/duckdb/blob/main/CONTRIBUTING.md#building))
- a Java runtime for Java 11 or later

Start the build by generating the hint parser:

```bash
cd third_party/antlr4
java -jar antlr-4.13.2-complete.jar -Dlanguage=Cpp -Xexact-output-dir -o ../../src/hinting/grammar ../../src/hinting/grammar/HintBlock.g4
```

Afterwards, you can build quacklab like normal DuckDB:

```bash
GEN=ninja make
```

The DuckDB binary will be located in `build/release/duckdb` by default.

## Usage

quacklab can be used as a drop-in replacement for DuckDB. The optimizer hints are embedded in a comment that is shipped with
the actual query like so:

```sql
explain /*=quack_lab= card(t #42) card(mi #24) */ select count(*) from title t join movie_info mi on t.id = mi.movie_id;
```

The following hints are supported:

**`JoinOrder`** controls the join order of the query. The syntax is: `JoinOrder(((t1 t2) t3))`. Tables can be referenced by
their name or alias. You can also force bushy plans like so: `((t1 t2) (t3 t4))`. Notice that the first pair of paranthesis
is always required, i.e. for two tables you must use `JoinOrder((t1 t2))` and not ~~`JoinOrder(t1 t2)`~~.

**`Card`** sets the cardinality estimate for a particular intermediate. The syntax is: `Card(t #10000)` where the first part
describes the intermediate and the second part after the `#` sets the cardinality. Tables can be referenced by their name or
alias. You can set the cardinality of base tables (`Card(t1 #42)`) as well as joins (`Card(t1 t2 t3 #42000)`). All
cardinalities refer to the _output cardinality_, i.e. after all applicable predicates.

**`NestLoop`**, **`HashJoin`**, **`MergeJoin`** control the physical operator that is used to compute a particular join[^1].
The syntax is `NestLoop(t1 t2 t3)`. Tables can be referenced by their name or alias.


[^1]: support for this is currently very limited due to restrictions of the DuckDB execution engine. For example, join
      operators are not implemented as general-purpose operators. Instead, they are tied to specific types of join predicates.
      Quacklab implements the logic to produce query plans with the desired operators, however these plans usually cannot be
      executed (as of DuckDB v1.4-andium).
