/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1556
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1556
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
void test(val<int> zero, val<int*> var_19, val<short*> var_20, val<short*> var_21, val<unsigned int*> var_22) {
    *var_19 &= ((/* implicit */val<int>) ((((/* implicit */val<bool>) (~(((((/* implicit */val<bool>) (val<short>)-4880)) ? (4294967295U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)47)))))))) ? (min((((/* implicit */val<unsigned long long int>) (~(1039855885U)))), (((((/* implicit */val<bool>) 2082662315U)) ? (((/* implicit */val<unsigned long long int>) 1039855885U)) : (6ULL))))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 3255111400U)) ? (((/* implicit */val<unsigned int>) -416312502)) : ((~(2082662315U))))))));
    *var_20 = ((/* implicit */val<short>) min((*var_20), (((/* implicit */val<short>) (!(((/* implicit */val<bool>) (val<short>)18454)))))));
    *var_21 = ((/* implicit */val<short>) (~(202229208629486723LL)));
    *var_22 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 2082662315U)) ? (5970998815765798203ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1)))))) ? (18446744073709551607ULL) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<signed char>)-92)) ? (-416312502) : (416312504))))))) ? (((/* implicit */val<int>) (val<short>)-1652)) : (((/* implicit */val<int>) min((max(((val<short>)-7069), (((/* implicit */val<short>) (val<signed char>)-43)))), (((/* implicit */val<short>) (!(((/* implicit */val<bool>) 14163792763374538146ULL))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
int var_19 = -1421743194;
short var_20 = (short)-22054;
short var_21 = (short)-22122;
unsigned int var_22 = 877438157U;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != -1560182014;
    value_mismatch |= var_20 != (short)-22054;
    value_mismatch |= var_21 != (short)23420;
    value_mismatch |= var_22 != 4294965644U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
