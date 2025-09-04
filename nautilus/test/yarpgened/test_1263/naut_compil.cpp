/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1263
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1263
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
void test(val<int> zero, val<unsigned int*> var_12, val<long long int*> var_13) {
    *var_12 = ((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) (!(((/* implicit */val<bool>) (~(2147483647U)))))))));
    *var_13 &= ((/* implicit */val<long long int>) (-((+(8U)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned int var_12 = 2798131481U;
long long int var_13 = -4670083575780478329LL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 4294967295U;
    value_mismatch |= var_13 != 574091904LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
