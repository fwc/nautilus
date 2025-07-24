/*
yarpgen version 2.0 (build 887b8f1 on 1980:01:01)
Seed: 6
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --seed=6
*/
#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>

using namespace nautilus;

void test(val<int> var_1, val<int> var_2, val<int*> var_3) {
	// Load and Store works
	var_1 = *var_3;
	*var_3 = var_1;

	// Addition of val<int> works
	var_1 + var_2;
	var_2 + var_1;

	// Addition of val<int> and deref'ed val<int*> WITH cast works
	var_1 + (val<int>)(*var_3);
	(val<int>)(*var_3) + var_1;


	// This didn't compile before adding operator+ / operator+= for val_ptr
	*var_3 += 2;
	*var_3 += var_1;
	(*var_3) + var_1;
	(*var_3) + (*var_3);

	// This still doesn't compile as RHS is val<int &> which is not matched by
	// any templates
	var_1 + (*var_3);
}

int main(int, char* []) {
	engine::Options options;
	// options.setOption("engine.backend", "cpp");
	options.setOption("engine.Compilation", true);
	options.setOption("dump.all", true);
	auto engine = engine::NautilusEngine(options);
	auto function = engine.registerFunction(test);

	int x = 0;
	function(2, 3, &x);

	return 0;
}
