/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8695
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8695
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
void test(val<unsigned int> var_2, val<int> var_7, val<int> var_9, val<int> zero, val<unsigned int*> var_10, val<unsigned int*> var_11) {
    *var_10 = ((/* implicit */val<unsigned int>) max((*var_10), ((((!(((/* implicit */val<bool>) var_9)))) ? (((/* implicit */val<unsigned int>) max((2147483647), (((/* implicit */val<int>) (val<unsigned char>)249))))) : (var_2)))));
    *var_11 -= ((/* implicit */val<unsigned int>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1384247240U;
int var_7 = 1622461023;
int var_9 = 1789135793;
int zero = 0;
unsigned int var_10 = 3008462292U;
unsigned int var_11 = 1485323772U;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 3008462292U;
    value_mismatch |= var_11 != 4157830045U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_7, var_9, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
