#include "duckdb/parser/statement/select_statement.hpp"
#include "duckdb/planner/binder.hpp"
#include "duckdb/planner/bound_query_node.hpp"
#include "duckdb/planner/operator/logical_get.hpp"

#include "duckdb/hinting/planner_hints.hpp" // !!! quacklab addition

namespace duckdb {

BoundStatement Binder::Bind(SelectStatement &stmt) {
	auto &properties = GetStatementProperties();
	properties.return_type = StatementReturnType::QUERY_RESULT;
	// !!! quacklab modification
	// We have to first bind the select statement before we can parse our hints.
	// This is because the binder will recurse to the base tables and determine their relation IDs
	// We need this information as part of the hint parsing process.
	auto result = Bind(*stmt.node);
	auto planner_hints = tud::HintingContext::CurrentPlannerHints();
	planner_hints->ParseHints();
	// !!! end quacklab modification

	// A bare table-function passthrough honors the function's call_return_type (e.g. a CONNECT-routed
	// DDL/SET reports as NOTHING), but only when the function opts in via a non-default modifier.
	if (result.plan) {
		auto get = GetPassthroughTableFunctionGet(*result.plan);
		if (get && get->function.call_return_type != StatementReturnType::QUERY_RESULT) {
			properties.return_type = get->function.call_return_type;
		}
	}
	return result;
}

} // namespace duckdb
