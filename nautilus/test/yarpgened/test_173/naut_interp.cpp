/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 173
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=173
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
void test(val<short> var_5, val<int> zero, val<unsigned int*> var_16, val<unsigned int*> var_17) {
    *var_16 = ((/* implicit */val<unsigned int>) var_5);
    *var_17 = ((/* implicit */val<unsigned int>) (!((val<bool>)1)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-11306;
int zero = 0;
unsigned int var_16 = 2592697615U;
unsigned int var_17 = 1320450378U;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 4294955990U;
    value_mismatch |= var_17 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
