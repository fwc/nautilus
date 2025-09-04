/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9720
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9720
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
void test(val<signed char> var_4, val<int> zero, val<bool*> var_17, val<signed char*> var_18, val<short*> var_19, val<short*> var_20) {
    *var_17 = ((/* implicit */val<bool>) max((*var_17), (((((/* implicit */val<int>) (val<signed char>)122)) != (((/* implicit */val<int>) (val<signed char>)31))))));
    *var_18 *= var_4;
    *var_19 = ((/* implicit */val<short>) (-(((/* implicit */val<int>) (val<signed char>)64))));
    *var_20 = ((/* implicit */val<short>) max((*var_20), ((val<short>)-20329)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)64;
int zero = 0;
bool var_17 = (bool)1;
signed char var_18 = (signed char)-49;
short var_19 = (short)-9971;
short var_20 = (short)-26573;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != (signed char)-64;
    value_mismatch |= var_19 != (short)-64;
    value_mismatch |= var_20 != (short)-20329;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
