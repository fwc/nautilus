/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9102
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9102
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
void test(val<signed char> var_6, val<short> var_12, val<bool> var_15, val<int> zero, val<bool*> var_20, val<int*> var_21, val<short*> var_22, val<bool*> var_23, val<bool*> var_24) {
    *var_20 = (!(((/* implicit */val<bool>) var_12)));
    *var_21 = ((/* implicit */val<int>) ((val<short>) (val<short>)4861));
    *var_22 = ((/* implicit */val<short>) (~(((/* implicit */val<int>) (!(((val<bool>) (val<short>)4861)))))));
    *var_23 = var_15;
    *var_24 ^= ((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_6))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)13;
short var_12 = (short)20831;
bool var_15 = (bool)0;
int zero = 0;
bool var_20 = (bool)0;
int var_21 = -1927667625;
short var_22 = (short)-3420;
bool var_23 = (bool)0;
bool var_24 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (bool)0;
    value_mismatch |= var_21 != 4861;
    value_mismatch |= var_22 != (short)-1;
    value_mismatch |= var_23 != (bool)0;
    value_mismatch |= var_24 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_12, var_15, zero, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
  assert(!value_mismatch);
}
