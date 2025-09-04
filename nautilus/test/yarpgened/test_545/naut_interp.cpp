/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 545
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=545
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
void test(val<int> var_3, val<bool> var_9, val<int> zero, val<int*> var_14, val<unsigned int*> var_15) {
    *var_14 = ((/* implicit */val<int>) max((*var_14), (var_3)));
    *var_15 = ((/* implicit */val<unsigned int>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -785126094;
bool var_9 = (bool)1;
int zero = 0;
int var_14 = -1773060166;
unsigned int var_15 = 3347385806U;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != -785126094;
    value_mismatch |= var_15 != 1U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_9, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
