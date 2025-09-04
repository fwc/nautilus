/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5376
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5376
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
void test(val<short> var_0, val<unsigned long long int> var_4, val<unsigned long long int> var_6, val<unsigned int> var_7, val<unsigned int> var_8, val<short> var_9, val<short> var_11, val<unsigned long long int> var_15, val<int> zero, val<short*> var_18, val<bool*> var_19, val<short*> var_20) {
    *var_18 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((18446744073709551606ULL) | (max((((/* implicit */val<unsigned long long int>) var_8)), (var_6)))))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<unsigned char>)128)) ? (min((4294967277U), (((/* implicit */val<unsigned int>) (val<unsigned short>)32760)))) : (var_7)))) : (((((/* implicit */val<bool>) (~(var_15)))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)112))) : (var_4)))));
    *var_19 = ((/* implicit */val<bool>) max((*var_19), (((/* implicit */val<bool>) (((!(((/* implicit */val<bool>) max((((/* implicit */val<short>) (val<signed char>)24)), (var_0)))))) ? (((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) ((3848181103U) == (26U))))))) : ((-(((((/* implicit */val<bool>) 4013941257U)) ? (18446744073709551610ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_11))))))))))));
    *var_20 = ((/* implicit */val<short>) (~(((/* implicit */val<int>) var_9))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24513;
unsigned long long int var_4 = 16776640387942260076ULL;
unsigned long long int var_6 = 1983929862965043612ULL;
unsigned int var_7 = 3967810681U;
unsigned int var_8 = 2711020505U;
short var_9 = (short)-11832;
short var_11 = (short)-15256;
unsigned long long int var_15 = 16205545082980430233ULL;
int zero = 0;
short var_18 = (short)7520;
bool var_19 = (bool)0;
short var_20 = (short)22096;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)32760;
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != (short)11831;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_6, var_7, var_8, var_9, var_11, var_15, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
