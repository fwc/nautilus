/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4235
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4235
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
void test(val<signed char> var_0, val<signed char> var_1, val<unsigned int> var_2, val<unsigned int> var_3, val<unsigned int> var_5, val<signed char> var_6, val<unsigned short> var_10, val<signed char> var_11, val<unsigned short> var_12, val<signed char> var_14, val<signed char> var_15, val<unsigned int> var_16, val<int> zero, val<unsigned int*> var_17, val<signed char*> var_18, val<unsigned int*> var_19, val<signed char*> var_20) {
    *var_17 = min((((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) ((val<signed char>) var_15)))))), ((+(var_3))));
    *var_18 |= ((/* implicit */val<signed char>) min((min((((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_1))) : (var_3))), (var_5))), (min((((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_10))) | (var_5))), (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_6)) & (((/* implicit */val<int>) var_11)))))))));
    *var_19 = ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<unsigned int>) max((((((/* implicit */val<bool>) (val<short>)7055)) ? (((/* implicit */val<int>) var_15)) : (((/* implicit */val<int>) (val<signed char>)72)))), (((/* implicit */val<int>) var_12))))) : (var_16));
    *var_20 = ((/* implicit */val<signed char>) ((((/* implicit */val<int>) ((((((/* implicit */val<int>) var_1)) % (((/* implicit */val<int>) var_0)))) > (((((/* implicit */val<bool>) (val<short>)-64)) ? (((/* implicit */val<int>) (val<short>)31153)) : (((/* implicit */val<int>) (val<signed char>)77))))))) & (((/* implicit */val<int>) (val<signed char>)102))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)112;
signed char var_1 = (signed char)-111;
unsigned int var_2 = 2353104254U;
unsigned int var_3 = 1916044743U;
unsigned int var_5 = 2428468288U;
signed char var_6 = (signed char)-81;
unsigned short var_10 = (unsigned short)3753;
signed char var_11 = (signed char)-120;
unsigned short var_12 = (unsigned short)24516;
signed char var_14 = (signed char)-55;
signed char var_15 = (signed char)-19;
unsigned int var_16 = 3719878492U;
int zero = 0;
unsigned int var_17 = 3975863539U;
signed char var_18 = (signed char)22;
unsigned int var_19 = 2855181968U;
signed char var_20 = (signed char)-7;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 19U;
    value_mismatch |= var_18 != (signed char)86;
    value_mismatch |= var_19 != 24516U;
    value_mismatch |= var_20 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_5, var_6, var_10, var_11, var_12, var_14, var_15, var_16, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
}
