/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2595
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2595
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
void test(val<short> var_0, val<signed char> var_1, val<int> var_2, val<signed char> var_3, val<unsigned int> var_4, val<int> var_6, val<short> var_8, val<unsigned int> var_10, val<signed char> var_12, val<int> zero, val<short*> var_14, val<signed char*> var_15, val<int*> var_16, val<short*> var_17) {
    *var_14 = ((/* implicit */val<short>) (+((-(((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_3)))))))));
    *var_15 = ((/* implicit */val<signed char>) ((((((val<unsigned int>) var_8)) * (((/* implicit */val<unsigned int>) max((((/* implicit */val<int>) var_12)), (var_6)))))) >= (min((((/* implicit */val<unsigned int>) (-(var_2)))), (((var_10) >> (((var_4) - (4252979597U)))))))));
    *var_16 = ((/* implicit */val<int>) var_3);
    *var_17 = ((/* implicit */val<short>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) min((max((var_0), (((/* implicit */val<short>) var_12)))), (((/* implicit */val<short>) var_1)))))) == (((((/* implicit */val<bool>) ((val<int>) 3457144458U))) ? (4294967295U) : (4199014884U)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21850;
signed char var_1 = (signed char)52;
int var_2 = 637542263;
signed char var_3 = (signed char)111;
unsigned int var_4 = 4252979603U;
int var_6 = 676396825;
short var_8 = (short)28074;
unsigned int var_10 = 3842453729U;
signed char var_12 = (signed char)-84;
int zero = 0;
short var_14 = (short)5960;
signed char var_15 = (signed char)-18;
int var_16 = 2006097954;
short var_17 = (short)-20923;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (short)0;
    value_mismatch |= var_15 != (signed char)1;
    value_mismatch |= var_16 != 111;
    value_mismatch |= var_17 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_6, var_8, var_10, var_12, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
}
