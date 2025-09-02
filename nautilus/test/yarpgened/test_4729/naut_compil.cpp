/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4729
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4729
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
void test(val<bool> var_3, val<unsigned long long int> var_8, val<short> var_10, val<unsigned long long int> var_14, val<unsigned int> var_18, val<int> zero, val<short*> var_20, val<short*> var_21, val<unsigned short*> var_22, val<int*> var_23) {
    *var_20 += ((/* implicit */val<short>) (val<unsigned short>)23079);
    *var_21 = ((/* implicit */val<short>) max((((/* implicit */val<unsigned long long int>) ((var_18) >> ((((-(var_8))) - (7751732883643340009ULL)))))), (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 1073741312LL)) ? (((/* implicit */val<int>) (val<short>)-20002)) : (((/* implicit */val<int>) var_3))))) ? (((/* implicit */val<unsigned long long int>) -3917590351578133660LL)) : (var_14)))));
    *var_22 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) (val<unsigned char>)255)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_10))) : (min((((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)32758))) % (var_18))), (((2169722434U) * (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)25514)))))))));
    *var_23 += ((/* implicit */val<int>) -3917590351578133682LL);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_3 = (bool)1;
unsigned long long int var_8 = 10695011190066211606ULL;
short var_10 = (short)6631;
unsigned long long int var_14 = 14764766894095913306ULL;
unsigned int var_18 = 1219872218U;
int zero = 0;
short var_20 = (short)22648;
short var_21 = (short)25590;
unsigned short var_22 = (unsigned short)18544;
int var_23 = -1045516424;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (short)-19809;
    value_mismatch |= var_21 != (short)2916;
    value_mismatch |= var_22 != (unsigned short)6631;
    value_mismatch |= var_23 != -1604404538;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_8, var_10, var_14, var_18, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
