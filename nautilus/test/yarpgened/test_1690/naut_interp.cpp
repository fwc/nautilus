/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1690
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1690
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
void test(val<long long int> var_2, val<signed char> var_7, val<int> zero, val<signed char*> var_19, val<unsigned int*> var_20, val<unsigned int*> var_21) {
    *var_19 = ((/* implicit */val<signed char>) var_2);
    *var_20 = ((/* implicit */val<unsigned int>) var_7);
    *var_21 = ((/* implicit */val<unsigned int>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8130043846337989979LL;
signed char var_7 = (signed char)97;
int zero = 0;
signed char var_19 = (signed char)51;
unsigned int var_20 = 3118065787U;
unsigned int var_21 = 1241057725U;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)91;
    value_mismatch |= var_20 != 97U;
    value_mismatch |= var_21 != 2907934043U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_7, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
