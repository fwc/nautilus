/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2828
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2828
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
void test(val<short> var_0, val<int> var_1, val<unsigned char> var_3, val<unsigned int> var_5, val<unsigned long long int> var_8, val<short> var_10, val<int> var_13, val<unsigned short> var_16, val<long long int> var_19, val<int> zero, val<int*> var_20, val<unsigned short*> var_21, val<short*> var_22, val<unsigned int*> var_23, val<signed char*> var_24) {
    *var_20 = ((((/* implicit */val<int>) ((((/* implicit */val<bool>) var_0)) && (((/* implicit */val<bool>) var_8))))) / (((((/* implicit */val<int>) var_10)) - (var_13))));
    *var_21 = ((/* implicit */val<unsigned short>) var_3);
    *var_22 = ((/* implicit */val<short>) var_19);
    *var_23 = ((/* implicit */val<unsigned int>) ((((val<long long int>) max((262143ULL), (((/* implicit */val<unsigned long long int>) (val<unsigned short>)62891))))) & (((/* implicit */val<long long int>) ((var_5) * (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_16))))))));
    *var_24 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_1)) ? (var_1) : (((/* implicit */val<int>) var_3))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4344;
int var_1 = -1107655744;
unsigned char var_3 = (unsigned char)21;
unsigned int var_5 = 328244051U;
unsigned long long int var_8 = 12626796623726623743ULL;
short var_10 = (short)13641;
int var_13 = 1762526147;
unsigned short var_16 = (unsigned short)47107;
long long int var_19 = -2550659711519892780LL;
int zero = 0;
int var_20 = 497935546;
unsigned short var_21 = (unsigned short)22647;
short var_22 = (short)-7932;
unsigned int var_23 = 3861588306U;
signed char var_24 = (signed char)-69;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 0;
    value_mismatch |= var_21 != (unsigned short)21;
    value_mismatch |= var_22 != (short)-9516;
    value_mismatch |= var_23 != 96761U;
    value_mismatch |= var_24 != (signed char)-64;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_5, var_8, var_10, var_13, var_16, var_19, zero, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
  assert(!value_mismatch);
}
