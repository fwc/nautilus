/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5607
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5607
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION true
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
void test(val<signed char> var_1, val<short> var_5, val<int> zero, val<signed char*> var_19, val<signed char*> var_20) {
    *var_19 = var_1;
    *var_20 = ((/* implicit */val<signed char>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)16;
short var_5 = (short)-207;
int zero = 0;
signed char var_19 = (signed char)-95;
signed char var_20 = (signed char)-115;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)16;
    value_mismatch |= var_20 != (signed char)49;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
