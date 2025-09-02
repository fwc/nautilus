/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3379
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3379
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
void test(val<signed char> var_2, val<short> var_3, val<int> zero, val<unsigned long long int*> var_15, val<unsigned long long int*> var_16) {
    *var_15 = ((/* implicit */val<unsigned long long int>) var_2);
    *var_16 = ((/* implicit */val<unsigned long long int>) min((*var_16), (((/* implicit */val<unsigned long long int>) var_3))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)20;
short var_3 = (short)-10783;
int zero = 0;
unsigned long long int var_15 = 10411545708051481649ULL;
unsigned long long int var_16 = 12824360841687304438ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 20ULL;
    value_mismatch |= var_16 != 12824360841687304438ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
