/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4754
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4754
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
void test(val<short> var_9, val<short> var_11, val<int> zero, val<short*> var_12, val<short*> var_13) {
    *var_12 = ((/* implicit */val<short>) (!(((/* implicit */val<bool>) var_11))));
    *var_13 = ((/* implicit */val<short>) (~(((/* implicit */val<int>) var_9))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)11633;
short var_11 = (short)-7117;
int zero = 0;
short var_12 = (short)-5199;
short var_13 = (short)-16132;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (short)0;
    value_mismatch |= var_13 != (short)-11634;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, var_11, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
