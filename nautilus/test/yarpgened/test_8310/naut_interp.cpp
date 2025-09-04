/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8310
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8310
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
void test(val<long long int> var_10, val<int> zero, val<bool*> var_13, val<short*> var_14, val<short*> var_15) {
    *var_13 = ((/* implicit */val<bool>) var_10);
    *var_14 = ((/* implicit */val<short>) (~(((/* implicit */val<int>) ((val<unsigned short>) (val<signed char>)60)))));
    *var_15 = ((/* implicit */val<short>) (val<signed char>)36);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = -1217811522188659385LL;
int zero = 0;
bool var_13 = (bool)0;
short var_14 = (short)-13018;
short var_15 = (short)14989;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (short)-61;
    value_mismatch |= var_15 != (short)36;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_10, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
