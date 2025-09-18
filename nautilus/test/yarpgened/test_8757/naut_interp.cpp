/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8757
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8757
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION false
#endif

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<long long int> var_0, val<unsigned int> var_1, val<unsigned int> var_2, val<unsigned int> var_3, val<unsigned int> var_4, val<unsigned short> var_5, val<long long int> var_6, val<unsigned int> var_7, val<long long int> var_8, val<unsigned int> var_10, val<int> zero, val<unsigned int*> var_11, val<short*> var_12) {
    *var_11 += ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) min((((((/* implicit */val<bool>) var_8)) ? (var_4) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5))))), (var_1)))) ? (((/* implicit */val<long long int>) min((max((var_2), (var_3))), (((((/* implicit */val<bool>) var_2)) ? (var_3) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5)))))))) : (max((max((var_6), (((/* implicit */val<long long int>) var_1)))), (((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<long long int>) var_1)) : (var_8)))))));
    *var_12 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) max((((((/* implicit */val<bool>) var_4)) ? (var_8) : (var_0))), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_3)) ? (var_2) : (var_7))))))) ? (((((/* implicit */val<bool>) min((var_8), (var_8)))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_2)) ? (var_1) : (var_2)))) : (((((/* implicit */val<bool>) var_2)) ? (var_6) : (((/* implicit */val<long long int>) var_1)))))) : (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_1)) ? (var_6) : (((/* implicit */val<long long int>) var_10))))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_6)) ? (var_10) : (var_10)))) : (max((((/* implicit */val<long long int>) var_2)), (var_0)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2528966391356451534LL;
unsigned int var_1 = 2970681115U;
unsigned int var_2 = 1893825295U;
unsigned int var_3 = 2301579766U;
unsigned int var_4 = 725128343U;
unsigned short var_5 = (unsigned short)11913;
long long int var_6 = 3017849583031096196LL;
unsigned int var_7 = 3219477872U;
long long int var_8 = 121247862394121540LL;
unsigned int var_10 = 122236029U;
int zero = 0;
unsigned int var_11 = 2667866128U;
short var_12 = (short)8661;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 674478598U;
    value_mismatch |= var_12 != (short)-229;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_10, zero, &var_11, &var_12);
  checksum();
}
