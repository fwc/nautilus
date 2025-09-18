/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7864
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7864
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
void test(val<long long int> var_13, val<int> zero, val<unsigned int*> var_14, val<int*> var_15) {
    *var_14 = 212942028U;
    *var_15 = ((/* implicit */val<int>) (~(var_13)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_13 = -1414134606273960805LL;
int zero = 0;
unsigned int var_14 = 348671531U;
int var_15 = 1371837222;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 212942028U;
    value_mismatch |= var_15 != -1752442012;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_13, zero, &var_14, &var_15);
  checksum();
}
