/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8271
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8271
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
void test(val<bool> var_6, val<int> zero, val<signed char*> var_17, val<unsigned char*> var_18) {
    *var_17 |= ((/* implicit */val<signed char>) max((5668195396839631743LL), (((/* implicit */val<long long int>) (val<unsigned char>)11))));
    *var_18 = ((/* implicit */val<unsigned char>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_6 = (bool)0;
int zero = 0;
signed char var_17 = (signed char)16;
unsigned char var_18 = (unsigned char)73;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (signed char)127;
    value_mismatch |= var_18 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, zero, &var_17, &var_18);
  checksum();
}
