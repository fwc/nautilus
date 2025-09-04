/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8413
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8413
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
void test(val<unsigned long long int> var_3, val<long long int> var_9, val<int> zero, val<signed char*> var_15, val<signed char*> var_16, val<unsigned int*> var_17) {
    *var_15 = ((/* implicit */val<signed char>) var_3);
    *var_16 = ((/* implicit */val<signed char>) max((*var_16), (((/* implicit */val<signed char>) var_9))));
    *var_17 = ((/* implicit */val<unsigned int>) ((val<unsigned char>) ((255ULL) - (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<unsigned char>) (val<unsigned char>)0)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9617782303228711483ULL;
long long int var_9 = -5522472993991051866LL;
int zero = 0;
signed char var_15 = (signed char)-65;
signed char var_16 = (signed char)57;
unsigned int var_17 = 2290865309U;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)59;
    value_mismatch |= var_16 != (signed char)57;
    value_mismatch |= var_17 != 255U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_9, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
