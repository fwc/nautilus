/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5166
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5166
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
void test(val<int> zero, val<long long int*> var_15, val<int*> var_16) {
    *var_15 &= ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) 4294967295U)) ? (((/* implicit */val<int>) (val<signed char>)2)) : (((/* implicit */val<int>) (val<unsigned char>)244))));
    *var_16 = ((/* implicit */val<int>) -2660481195725963557LL);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
long long int var_15 = 4459850024802013206LL;
int var_16 = 1078114410;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 2LL;
    value_mismatch |= var_16 != -987382053;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
