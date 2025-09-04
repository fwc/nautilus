/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9769
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9769
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
void test(val<short> var_0, val<signed char> var_3, val<bool> var_6, val<short> var_8, val<short> var_10, val<unsigned short> var_12, val<int> zero, val<int*> var_15, val<unsigned short*> var_16, val<signed char*> var_17, val<short*> var_18) {
    *var_15 = ((/* implicit */val<int>) max((((/* implicit */val<short>) var_3)), ((val<short>)-17487)));
    *var_16 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((val<unsigned short>) var_10))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_6))) : (((((/* implicit */val<bool>) 3221225472U)) ? (1073741823U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)16)))))));
    *var_17 = ((/* implicit */val<signed char>) ((max((((/* implicit */val<unsigned int>) ((val<bool>) var_12))), (((var_6) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_0))) : (1073741823U))))) * (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_6)) + (((/* implicit */val<int>) var_8)))))));
    *var_18 = ((/* implicit */val<short>) (+(((/* implicit */val<int>) (val<bool>)1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17863;
signed char var_3 = (signed char)78;
bool var_6 = (bool)0;
short var_8 = (short)17380;
short var_10 = (short)-12822;
unsigned short var_12 = (unsigned short)26941;
int zero = 0;
int var_15 = 1540202993;
unsigned short var_16 = (unsigned short)61287;
signed char var_17 = (signed char)104;
short var_18 = (short)30480;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 78;
    value_mismatch |= var_16 != (unsigned short)0;
    value_mismatch |= var_17 != (signed char)28;
    value_mismatch |= var_18 != (short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_6, var_8, var_10, var_12, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
