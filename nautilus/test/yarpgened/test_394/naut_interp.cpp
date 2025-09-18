/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 394
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=394
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
void test(val<unsigned int> var_2, val<int> zero, val<int*> var_10, val<unsigned int*> var_11) {
    *var_10 = -1073551378;
    *var_11 = ((/* implicit */val<unsigned int>) min((*var_11), (var_2)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1880573362U;
int zero = 0;
int var_10 = -2105854162;
unsigned int var_11 = 2367349640U;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != -1073551378;
    value_mismatch |= var_11 != 1880573362U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, zero, &var_10, &var_11);
  checksum();
}
