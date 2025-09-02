/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5343
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5343
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
void test(val<short> var_6, val<short> var_8, val<short> var_10, val<short> var_12, val<unsigned int> var_13, val<int> var_14, val<int> var_16, val<int> zero, val<short*> var_18, val<signed char*> var_19, val<int*> var_20) {
    *var_18 = ((/* implicit */val<short>) ((((/* implicit */val<unsigned int>) var_16)) / ((-(((((/* implicit */val<bool>) (val<short>)32767)) ? (((/* implicit */val<unsigned int>) var_14)) : (var_13)))))));
    *var_19 |= ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<short>)-24545)) ? (((/* implicit */val<int>) var_6)) : (((/* implicit */val<int>) var_6))))) ? (((((/* implicit */val<int>) (val<short>)-24537)) % (((/* implicit */val<int>) (val<short>)-24545)))) : (((/* implicit */val<int>) min((var_10), ((val<short>)11133))))))) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) var_12))));
    *var_20 = ((/* implicit */val<int>) var_10);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)29586;
short var_8 = (short)10768;
short var_10 = (short)-9663;
short var_12 = (short)20867;
unsigned int var_13 = 1594545889U;
int var_14 = -1996125818;
int var_16 = -353500509;
int zero = 0;
short var_18 = (short)23775;
signed char var_19 = (signed char)34;
int var_20 = -408689642;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)1;
    value_mismatch |= var_19 != (signed char)50;
    value_mismatch |= var_20 != -9663;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_8, var_10, var_12, var_13, var_14, var_16, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
