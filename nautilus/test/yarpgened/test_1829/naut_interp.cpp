/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1829
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1829
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
void test(val<short> var_3, val<unsigned int> var_12, val<int> var_15, val<int> zero, val<unsigned long long int*> var_20, val<int*> var_21) {
    *var_20 = ((/* implicit */val<unsigned long long int>) min((var_12), (((/* implicit */val<unsigned int>) var_3))));
    *var_21 &= var_15;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-2247;
unsigned int var_12 = 2368760515U;
int var_15 = -1578826858;
int zero = 0;
unsigned long long int var_20 = 11820397272734795548ULL;
int var_21 = -446013526;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 2368760515ULL;
    value_mismatch |= var_21 != -1587543166;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_12, var_15, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
