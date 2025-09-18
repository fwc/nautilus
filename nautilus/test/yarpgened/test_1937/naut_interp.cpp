/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1937
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1937
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
void test(val<unsigned int> var_1, val<bool> var_8, val<int> zero, val<int*> var_20, val<long long int*> var_21) {
    *var_20 = ((/* implicit */val<int>) var_1);
    *var_21 &= ((/* implicit */val<long long int>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2695743356U;
bool var_8 = (bool)1;
int zero = 0;
int var_20 = -1228479782;
long long int var_21 = 1039737580174997883LL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != -1599223940;
    value_mismatch |= var_21 != 1LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_8, zero, &var_20, &var_21);
  checksum();
}
