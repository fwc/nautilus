/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4306
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4306
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
void test(val<bool> var_1, val<unsigned int> var_5, val<int> var_17, val<int> zero, val<int*> var_18, val<short*> var_19, val<short*> var_20) {
    *var_18 = ((/* implicit */val<int>) max(((~(262143LL))), (((/* implicit */val<long long int>) var_1))));
    *var_19 |= ((/* implicit */val<short>) (!(((/* implicit */val<bool>) var_5))));
    *var_20 = ((/* implicit */val<short>) var_17);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)1;
unsigned int var_5 = 3432436829U;
int var_17 = -776380410;
int zero = 0;
int var_18 = -468771636;
short var_19 = (short)30324;
short var_20 = (short)18360;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 1;
    value_mismatch |= var_19 != (short)30324;
    value_mismatch |= var_20 != (short)24582;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_17, zero, &var_18, &var_19, &var_20);
  checksum();
}
