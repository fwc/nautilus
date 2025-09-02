/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7050
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7050
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
void test(val<unsigned int> var_7, val<unsigned int> var_9, val<int> zero, val<bool*> var_11, val<unsigned int*> var_12) {
    *var_11 = ((/* implicit */val<bool>) max((*var_11), (((/* implicit */val<bool>) var_7))));
    *var_12 = ((/* implicit */val<unsigned int>) max((*var_12), (var_9)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 3215556500U;
unsigned int var_9 = 1589794985U;
int zero = 0;
bool var_11 = (bool)1;
unsigned int var_12 = 177206365U;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != 1589794985U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_9, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
