/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5645
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5645
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
void test(val<long long int> var_12, val<int> zero, val<unsigned int*> var_15, val<unsigned long long int*> var_16) {
    *var_15 &= ((/* implicit */val<unsigned int>) 2147483647);
    *var_16 = ((/* implicit */val<unsigned long long int>) max((((/* implicit */val<long long int>) (val<unsigned char>)0)), (var_12)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_12 = 7845230119650905540LL;
int zero = 0;
unsigned int var_15 = 2460708994U;
unsigned long long int var_16 = 12778256283425347607ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 313225346U;
    value_mismatch |= var_16 != 7845230119650905540ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_12, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
