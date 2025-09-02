/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4140
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4140
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
void test(val<short> var_1, val<short> var_2, val<int> zero, val<short*> var_14, val<short*> var_15) {
    *var_14 = ((/* implicit */val<short>) (~(((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<short>)(-32767 - 1))) | (((/* implicit */val<int>) (val<short>)4))))) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) (val<short>)30668))))));
    *var_15 = ((/* implicit */val<short>) (+(((/* implicit */val<int>) var_1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7951;
short var_2 = (short)328;
int zero = 0;
short var_14 = (short)20110;
short var_15 = (short)5515;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (short)-329;
    value_mismatch |= var_15 != (short)7951;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
