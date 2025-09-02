/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1642
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1642
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
void test(val<short> var_1, val<int> var_2, val<int> var_12, val<int> zero, val<short*> var_15, val<bool*> var_16) {
    *var_15 = ((/* implicit */val<short>) ((val<signed char>) max((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_2))))), (max((((/* implicit */val<int>) var_1)), (var_12))))));
    *var_16 = ((/* implicit */val<bool>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-1299;
int var_2 = -58078396;
int var_12 = 1062627505;
int zero = 0;
short var_15 = (short)-1276;
bool var_16 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)-79;
    value_mismatch |= var_16 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_12, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
