/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6721
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6721
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
void test(val<int> zero, val<bool*> var_10, val<long long int*> var_11) {
    *var_10 = ((/* implicit */val<bool>) min((2238487324956452681LL), (((/* implicit */val<long long int>) ((val<short>) 4294967295U)))));
    *var_11 = ((/* implicit */val<long long int>) max((*var_11), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) 5U)) ? (((/* implicit */val<unsigned long long int>) 4294967284U)) : (549755813887ULL))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
bool var_10 = (bool)0;
long long int var_11 = 2595582490972535647LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (bool)1;
    value_mismatch |= var_11 != 2595582490972535647LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
