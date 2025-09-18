/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 913
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=913
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
void test(val<int> var_2, val<unsigned int> var_3, val<unsigned int> var_5, val<short> var_6, val<short> var_7, val<long long int> var_10, val<unsigned int> var_12, val<unsigned int> var_13, val<unsigned int> var_14, val<int> zero, val<int*> var_16, val<unsigned int*> var_17, val<int*> var_18, val<int*> var_19) {
    *var_16 = ((/* implicit */val<int>) min((*var_16), (((/* implicit */val<int>) ((((2319879260U) > (((/* implicit */val<unsigned int>) max((((/* implicit */val<int>) (val<short>)-5933)), (-1416997951)))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)1))) : (var_12))))));
    *var_17 = ((/* implicit */val<unsigned int>) ((((((((/* implicit */val<bool>) var_7)) ? (var_3) : (2319879260U))) >= (min((var_13), (((/* implicit */val<unsigned int>) var_7)))))) ? (max((((((/* implicit */val<long long int>) var_13)) & (-6178295659722200225LL))), (((/* implicit */val<long long int>) ((val<int>) var_2))))) : (((/* implicit */val<long long int>) min((((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) var_6))))), (((((/* implicit */val<bool>) (val<signed char>)-122)) ? (1975088035U) : (((/* implicit */val<unsigned int>) 0)))))))));
    *var_18 = ((/* implicit */val<int>) min((((/* implicit */val<long long int>) (val<signed char>)-127)), (((((/* implicit */val<long long int>) var_13)) / (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<long long int>) var_14)) : (var_10)))))));
    *var_19 = (+(((((/* implicit */val<bool>) 2319879271U)) ? (((/* implicit */val<int>) (val<short>)-5933)) : (((/* implicit */val<int>) (val<short>)0)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1682995092;
unsigned int var_3 = 1862753702U;
unsigned int var_5 = 2032369617U;
short var_6 = (short)4503;
short var_7 = (short)2354;
long long int var_10 = -6554915045607973392LL;
unsigned int var_12 = 2216056844U;
unsigned int var_13 = 2477316657U;
unsigned int var_14 = 9304579U;
int zero = 0;
int var_16 = 490878536;
unsigned int var_17 = 2261398611U;
int var_18 = -859223964;
int var_19 = 830829971;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != -2078910452;
    value_mismatch |= var_17 != 2426964497U;
    value_mismatch |= var_18 != -127;
    value_mismatch |= var_19 != -5933;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_5, var_6, var_7, var_10, var_12, var_13, var_14, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
}
