/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9060
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9060
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
void test(val<unsigned int> var_7, val<int> zero, val<unsigned long long int*> var_13, val<unsigned int*> var_14) {
    *var_13 = ((/* implicit */val<unsigned long long int>) var_7);
    *var_14 += var_7;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 2327668551U;
int zero = 0;
unsigned long long int var_13 = 7488179463859998848ULL;
unsigned int var_14 = 835261013U;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 2327668551ULL;
    value_mismatch |= var_14 != 3162929564U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, zero, &var_13, &var_14);
  checksum();
}
