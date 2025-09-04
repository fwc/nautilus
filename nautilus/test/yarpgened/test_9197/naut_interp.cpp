/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9197
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9197
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
void test(val<bool> var_1, val<int> var_3, val<int> zero, val<unsigned int*> var_16, val<signed char*> var_17) {
    *var_16 = ((/* implicit */val<unsigned int>) (+((-(((/* implicit */val<int>) var_1))))));
    *var_17 = ((/* implicit */val<signed char>) min((*var_17), (((/* implicit */val<signed char>) var_3))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)1;
int var_3 = 1182161931;
int zero = 0;
unsigned int var_16 = 1680064010U;
signed char var_17 = (signed char)124;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 4294967295U;
    value_mismatch |= var_17 != (signed char)11;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
