/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5413
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5413
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
void test(val<int> var_0, val<signed char> var_3, val<signed char> var_5, val<signed char> var_6, val<unsigned int> var_7, val<short> var_11, val<signed char> var_12, val<short> var_14, val<unsigned int> var_15, val<unsigned int> var_16, val<int> zero, val<unsigned int*> var_17, val<short*> var_18) {
    *var_17 = ((((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) (val<unsigned short>)0)) == (((/* implicit */val<int>) var_3)))))) : (min((((/* implicit */val<unsigned int>) var_12)), (var_7))))) % (max((((((/* implicit */val<bool>) var_0)) ? (var_15) : (var_16))), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<int>) (val<short>)-19770)) : (((/* implicit */val<int>) var_5))))))));
    *var_18 = ((/* implicit */val<short>) ((min(((-(var_16))), (((/* implicit */val<unsigned int>) max((((/* implicit */val<short>) var_6)), ((val<short>)-24435)))))) - (min((((/* implicit */val<unsigned int>) (val<short>)19749)), (2575422529U)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -39494381;
signed char var_3 = (signed char)-20;
signed char var_5 = (signed char)98;
signed char var_6 = (signed char)9;
unsigned int var_7 = 1952400419U;
short var_11 = (short)28555;
signed char var_12 = (signed char)79;
short var_14 = (short)-19748;
unsigned int var_15 = 960441049U;
unsigned int var_16 = 3044337463U;
int zero = 0;
unsigned int var_17 = 1111059244U;
short var_18 = (short)-2542;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 0U;
    value_mismatch |= var_18 != (short)-19740;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_5, var_6, var_7, var_11, var_12, var_14, var_15, var_16, zero, &var_17, &var_18);
  checksum();
}
