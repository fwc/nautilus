/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1684
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1684
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
void test(val<short> var_4, val<short> var_6, val<int> zero, val<short*> var_13, val<short*> var_14) {
    *var_13 = var_6;
    *var_14 = ((/* implicit */val<short>) (~(((/* implicit */val<int>) var_4))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-23038;
short var_6 = (short)23260;
int zero = 0;
short var_13 = (short)-30556;
short var_14 = (short)27271;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (short)23260;
    value_mismatch |= var_14 != (short)23037;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_6, zero, &var_13, &var_14);
  checksum();
}
