/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6830
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6830
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
void test(val<bool> var_6, val<unsigned int> var_7, val<unsigned long long int> var_9, val<unsigned long long int> var_13, val<int> zero, val<bool*> var_20, val<unsigned long long int*> var_21, val<short*> var_22) {
    *var_20 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) -643220013)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)(-127 - 1)))) : (((((/* implicit */val<bool>) ((val<unsigned char>) 0ULL))) ? (((((/* implicit */val<bool>) 10616706391560193290ULL)) ? (((/* implicit */val<unsigned long long int>) var_7)) : (10616706391560193290ULL))) : (((((/* implicit */val<bool>) var_13)) ? (var_9) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)26567)))))))));
    *var_21 = ((/* implicit */val<unsigned long long int>) (val<bool>)1);
    *var_22 *= ((/* implicit */val<short>) (~(((/* implicit */val<int>) var_6))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_6 = (bool)1;
unsigned int var_7 = 1125789510U;
unsigned long long int var_9 = 11651949972975474232ULL;
unsigned long long int var_13 = 14791997862515068766ULL;
int zero = 0;
bool var_20 = (bool)0;
unsigned long long int var_21 = 10289507438959897178ULL;
short var_22 = (short)-26559;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != 1ULL;
    value_mismatch |= var_22 != (short)-12418;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_7, var_9, var_13, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
