/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9202
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9202
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
void test(val<int> var_2, val<unsigned long long int> var_3, val<unsigned int> var_5, val<unsigned int> var_6, val<short> var_7, val<int> var_14, val<unsigned char> var_15, val<short> var_16, val<int> zero, val<short*> var_17, val<int*> var_18, val<unsigned int*> var_19) {
    *var_17 = ((/* implicit */val<short>) ((max((((/* implicit */val<unsigned int>) min((((/* implicit */val<int>) var_15)), (var_2)))), ((+(var_6))))) * (((((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_16))) : (var_5))) << (((/* implicit */val<int>) ((4294967276U) <= (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)18))))))))));
    *var_18 = ((/* implicit */val<int>) (!(((/* implicit */val<bool>) min((((((/* implicit */val<int>) (val<bool>)1)) >> (((((/* implicit */val<int>) var_7)) - (17458))))), ((~(var_14))))))));
    *var_19 += ((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) (val<unsigned char>)218))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1950407686;
unsigned long long int var_3 = 12918982052158610969ULL;
unsigned int var_5 = 2271763890U;
unsigned int var_6 = 4275766886U;
short var_7 = (short)17461;
int var_14 = 2099000702;
unsigned char var_15 = (unsigned char)52;
short var_16 = (short)22587;
int zero = 0;
short var_17 = (short)29779;
int var_18 = 1980513718;
unsigned int var_19 = 1742594973U;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (short)-30334;
    value_mismatch |= var_18 != 0;
    value_mismatch |= var_19 != 1742595191U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_5, var_6, var_7, var_14, var_15, var_16, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
