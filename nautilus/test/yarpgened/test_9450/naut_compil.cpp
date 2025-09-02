/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9450
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9450
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
void test(val<signed char> var_1, val<short> var_3, val<signed char> var_4, val<signed char> var_7, val<short> var_10, val<int> zero, val<short*> var_12, val<short*> var_13, val<short*> var_14, val<short*> var_15) {
    *var_12 = ((/* implicit */val<short>) ((val<signed char>) ((val<signed char>) (val<signed char>)-29)));
    *var_13 = ((/* implicit */val<short>) ((val<signed char>) ((((/* implicit */val<int>) max((((/* implicit */val<short>) var_1)), (var_3)))) > (((((/* implicit */val<bool>) (val<short>)16926)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) (val<signed char>)-93)))))));
    *var_14 = ((/* implicit */val<short>) ((val<signed char>) (((!(((/* implicit */val<bool>) (val<short>)9992)))) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) (val<short>)-22278)))));
    *var_15 -= ((/* implicit */val<short>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_10))))) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) ((((/* implicit */val<int>) ((val<short>) var_7))) != (((val<int>) (val<short>)-14060)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)84;
short var_3 = (short)-28069;
signed char var_4 = (signed char)41;
signed char var_7 = (signed char)29;
short var_10 = (short)-7527;
int zero = 0;
short var_12 = (short)11559;
short var_13 = (short)-1617;
short var_14 = (short)-13660;
short var_15 = (short)4128;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (short)-29;
    value_mismatch |= var_13 != (short)1;
    value_mismatch |= var_14 != (short)-6;
    value_mismatch |= var_15 != (short)4099;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_7, var_10, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
