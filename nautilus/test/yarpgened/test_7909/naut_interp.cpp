/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7909
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7909
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
void test(val<unsigned char> var_1, val<signed char> var_9, val<int> zero, val<int*> var_16, val<unsigned int*> var_17) {
    *var_16 = ((/* implicit */val<int>) var_1);
    *var_17 = ((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) var_9))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)141;
signed char var_9 = (signed char)-103;
int zero = 0;
int var_16 = 485084291;
unsigned int var_17 = 1103019577U;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 141;
    value_mismatch |= var_17 != 4294967193U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_9, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
