/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8813
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8813
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
void test(val<unsigned int> var_2, val<unsigned long long int> var_3, val<unsigned int> var_4, val<unsigned long long int> var_6, val<bool> var_7, val<unsigned int> var_9, val<unsigned int> var_11, val<unsigned int> var_12, val<int> zero, val<unsigned int*> var_13, val<unsigned int*> var_14, val<unsigned long long int*> var_15, val<unsigned long long int*> var_16) {
    *var_13 |= ((((/* implicit */val<bool>) (((val<bool>)1) ? (((((/* implicit */val<bool>) 0U)) ? (8115637426924636888ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)-2357))))) : (((/* implicit */val<unsigned long long int>) 2724696435U))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1))) : (var_9));
    *var_14 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((var_3) == (((/* implicit */val<unsigned long long int>) var_11)))))) : (var_9)))) ? (((/* implicit */val<unsigned long long int>) ((0U) + (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1)))))) : (min((min((var_6), (((/* implicit */val<unsigned long long int>) var_12)))), (max((((/* implicit */val<unsigned long long int>) var_7)), (var_3)))))));
    *var_15 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)28648))) : (var_4)));
    *var_16 = ((/* implicit */val<unsigned long long int>) min((*var_16), (((/* implicit */val<unsigned long long int>) (val<bool>)1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2246014014U;
unsigned long long int var_3 = 15406423975879938023ULL;
unsigned int var_4 = 3407408287U;
unsigned long long int var_6 = 2674900604101977115ULL;
bool var_7 = (bool)1;
unsigned int var_9 = 2507689835U;
unsigned int var_11 = 1340121904U;
unsigned int var_12 = 1749260291U;
int zero = 0;
unsigned int var_13 = 1478118448U;
unsigned int var_14 = 3239029913U;
unsigned long long int var_15 = 4336233481582329942ULL;
unsigned long long int var_16 = 5808617778582580167ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 1478118449U;
    value_mismatch |= var_14 != 1749260291U;
    value_mismatch |= var_15 != 28648ULL;
    value_mismatch |= var_16 != 1ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_6, var_7, var_9, var_11, var_12, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
