/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8410
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8410
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
void test(val<unsigned int> var_11, val<int> zero, val<signed char*> var_20, val<unsigned long long int*> var_21) {
    *var_20 &= ((/* implicit */val<signed char>) (~(6016783264656588110LL)));
    *var_21 = ((/* implicit */val<unsigned long long int>) var_11);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_11 = 2557895354U;
int zero = 0;
signed char var_20 = (signed char)-91;
unsigned long long int var_21 = 9359446962564195082ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (signed char)-95;
    value_mismatch |= var_21 != 2557895354ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_11, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
