/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8993
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8993
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
void test(val<unsigned int> var_0, val<unsigned long long int> var_6, val<int> zero, val<int*> var_13, val<int*> var_14) {
    *var_13 -= ((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) var_0)) >= (var_6)));
    *var_14 += (-2147483647 - 1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 546565547U;
unsigned long long int var_6 = 3966824373601517670ULL;
int zero = 0;
int var_13 = 1192026878;
int var_14 = 435406323;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 1192026878;
    value_mismatch |= var_14 != -1712077325;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
