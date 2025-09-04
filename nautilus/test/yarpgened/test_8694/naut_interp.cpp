/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8694
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8694
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
void test(val<bool> var_6, val<signed char> var_8, val<int> zero, val<long long int*> var_10, val<unsigned long long int*> var_11) {
    *var_10 -= ((/* implicit */val<long long int>) var_8);
    *var_11 = ((/* implicit */val<unsigned long long int>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_6 = (bool)0;
signed char var_8 = (signed char)-123;
int zero = 0;
long long int var_10 = 2738019880164239552LL;
unsigned long long int var_11 = 9450973411650518039ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 2738019880164239675LL;
    value_mismatch |= var_11 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_8, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
