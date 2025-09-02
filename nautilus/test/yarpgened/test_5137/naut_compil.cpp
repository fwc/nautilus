/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5137
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5137
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
void test(val<int> var_3, val<short> var_5, val<short> var_9, val<int> zero, val<unsigned int*> var_11, val<long long int*> var_12) {
    *var_11 = ((/* implicit */val<unsigned int>) var_5);
    *var_12 ^= ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_9)) ? (((val<unsigned int>) var_5)) : (((/* implicit */val<unsigned int>) var_3))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -692574314;
short var_5 = (short)27520;
short var_9 = (short)-17046;
int zero = 0;
unsigned int var_11 = 558669418U;
long long int var_12 = 7126212616113679340LL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 27520U;
    value_mismatch |= var_12 != 7126212616113651820LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_9, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
