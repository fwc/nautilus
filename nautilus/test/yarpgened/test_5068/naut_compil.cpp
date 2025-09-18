/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5068
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5068
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
void test(val<short> var_3, val<signed char> var_8, val<signed char> var_13, val<short> var_14, val<int> zero, val<short*> var_16, val<short*> var_17, val<signed char*> var_18) {
    *var_16 = ((/* implicit */val<short>) max((*var_16), (var_3)));
    *var_17 = ((/* implicit */val<short>) min((*var_17), (((/* implicit */val<short>) (!(((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_14))))))))));
    *var_18 = ((/* implicit */val<signed char>) (((!((!(((/* implicit */val<bool>) var_13)))))) ? (((/* implicit */val<int>) var_14)) : ((-((+(((/* implicit */val<int>) var_8))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-18428;
signed char var_8 = (signed char)0;
signed char var_13 = (signed char)-115;
short var_14 = (short)-1442;
int zero = 0;
short var_16 = (short)7623;
short var_17 = (short)21505;
signed char var_18 = (signed char)-96;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (short)7623;
    value_mismatch |= var_17 != (short)0;
    value_mismatch |= var_18 != (signed char)94;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_8, var_13, var_14, zero, &var_16, &var_17, &var_18);
  checksum();
}
