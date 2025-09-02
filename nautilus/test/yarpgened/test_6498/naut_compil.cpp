/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6498
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6498
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
void test(val<signed char> var_6, val<signed char> var_7, val<signed char> var_8, val<signed char> var_13, val<int> zero, val<signed char*> var_15, val<signed char*> var_16, val<signed char*> var_17) {
    *var_15 = max((((/* implicit */val<signed char>) ((((/* implicit */val<int>) (val<signed char>)-127)) >= (((/* implicit */val<int>) (val<signed char>)-104))))), (((val<signed char>) ((((/* implicit */val<bool>) (val<signed char>)-87)) ? (((/* implicit */val<int>) (val<signed char>)-104)) : (((/* implicit */val<int>) (val<signed char>)-109))))));
    *var_16 -= ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_8)) || (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_13))))))))));
    *var_17 = ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_6)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-96;
signed char var_7 = (signed char)9;
signed char var_8 = (signed char)122;
signed char var_13 = (signed char)-83;
int zero = 0;
signed char var_15 = (signed char)-32;
signed char var_16 = (signed char)-74;
signed char var_17 = (signed char)-8;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)0;
    value_mismatch |= var_16 != (signed char)-75;
    value_mismatch |= var_17 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_7, var_8, var_13, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
