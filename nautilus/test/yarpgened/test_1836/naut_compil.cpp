/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1836
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1836
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
void test(val<short> var_0, val<signed char> var_3, val<long long int> var_5, val<short> var_8, val<unsigned long long int> var_10, val<unsigned char> var_11, val<int> zero, val<int*> var_12, val<signed char*> var_13, val<short*> var_14, val<short*> var_15) {
    *var_12 = ((/* implicit */val<int>) max((*var_12), (((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<signed char>)15)) ? (((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) var_3))))) : (((((/* implicit */val<bool>) 267523405)) ? ((+(var_10))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_11))))))))));
    *var_13 = ((/* implicit */val<signed char>) var_0);
    *var_14 = ((/* implicit */val<short>) ((((/* implicit */val<long long int>) (~(((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_8)))))))) & (var_5)));
    *var_15 = ((/* implicit */val<short>) max((*var_15), (((/* implicit */val<short>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_0))) & (max((((/* implicit */val<unsigned long long int>) var_5)), (var_10))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6346;
signed char var_3 = (signed char)-29;
long long int var_5 = 7757868000610251707LL;
short var_8 = (short)-10996;
unsigned long long int var_10 = 14425442344957096300ULL;
unsigned char var_11 = (unsigned char)163;
int zero = 0;
int var_12 = -1757182352;
signed char var_13 = (signed char)18;
short var_14 = (short)7780;
short var_15 = (short)26575;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 29;
    value_mismatch |= var_13 != (signed char)54;
    value_mismatch |= var_14 != (short)29627;
    value_mismatch |= var_15 != (short)26575;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_5, var_8, var_10, var_11, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
