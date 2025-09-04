/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7974
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7974
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION true
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
void test(val<unsigned short> var_0, val<short> var_2, val<long long int> var_3, val<unsigned short> var_4, val<short> var_8, val<int> zero, val<short*> var_12, val<short*> var_13) {
    *var_12 = ((/* implicit */val<short>) max((((val<unsigned long long int>) var_0)), (((/* implicit */val<unsigned long long int>) (((((-(((/* implicit */val<int>) var_2)))) + (2147483647))) << (0U))))));
    *var_13 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<signed char>)0)) ? (((/* implicit */val<long long int>) 4294967294U)) : (-8586211655760050948LL)))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_8)) & ((+(906016292)))))) : (((((/* implicit */val<bool>) var_4)) ? (((val<unsigned long long int>) var_2)) : (((/* implicit */val<unsigned long long int>) max((var_3), (((/* implicit */val<long long int>) (val<signed char>)29)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28664;
short var_2 = (short)12927;
long long int var_3 = 1393781923019016341LL;
unsigned short var_4 = (unsigned short)33604;
short var_8 = (short)-30759;
int zero = 0;
short var_12 = (short)12797;
short var_13 = (short)32582;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (short)-12928;
    value_mismatch |= var_13 != (short)-31232;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_8, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
