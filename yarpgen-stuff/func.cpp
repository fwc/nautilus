/*
yarpgen version 2.0 (build 887b8f1 on 1980:01:01)
Seed: 6
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --seed=6
*/
#include "init.h"
#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>

using namespace nautilus;

void test(val<unsigned char> var_1, val<unsigned int> var_3, val<unsigned int> var_4, val<long long int> var_7, val<int> _, val<unsigned short*> var_10, val<int*> var_11) {
    val<int> a = (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_7)))));
    val<int> b = ((~(((/* implicit */val<int>) var_1))));
    val<int> max = a > b ? a : b;
    *var_10 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) max)) ? (var_7) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_1))) == ((var_7) > (((/* implicit */val<long long int>) var_3)) ? (var_7) : (((/* implicit */val<long long int>) var_3)))))))));
    *var_11 = ((/* implicit */val<int>) var_4);
}

int main(int, char* []) {
    engine::Options options;
    // options.setOption("engine.backend", "cpp");
    options.setOption("engine.Compilation", true);
    options.setOption("dump.all", true);
    auto engine = engine::NautilusEngine(options);
    auto function = engine.registerFunction(test);

    unsigned short var_10 = (unsigned short)42617;
    int var_11 = 1929698655;

    function((unsigned char)170, 847848521U, 4131743101U, 5651007851781001195LL, 0, &var_10, &var_11);

    unsigned long long int seed = 0;
    seed ^= var_10 + 0x9e3779b9 + ((seed)<< 6 ) + ((seed)>> 2);
    seed ^= var_11 + 0x9e3779b9 + ((seed)<< 6 ) + ((seed)>> 2);
    std::cout << "Result: " << seed << std::endl;
    return 0;
}
