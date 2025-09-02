/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7802
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7802
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
void test(val<long long int> var_2, val<unsigned short> var_11, val<int> zero, val<unsigned short*> var_15, val<unsigned long long int*> var_16) {
    *var_15 = ((/* implicit */val<unsigned short>) max((*var_15), (((/* implicit */val<unsigned short>) var_2))));
    *var_16 = ((/* implicit */val<unsigned long long int>) var_11);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7140624485914459540LL;
unsigned short var_11 = (unsigned short)6765;
int zero = 0;
unsigned short var_15 = (unsigned short)22542;
unsigned long long int var_16 = 17868649978725154698ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned short)49772;
    value_mismatch |= var_16 != 6765ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_11, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
