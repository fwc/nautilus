/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2160
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2160
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
void test(val<signed char> var_3, val<unsigned short> var_4, val<short> var_5, val<long long int> var_6, val<short> var_11, val<unsigned short> var_12, val<int> zero, val<unsigned short*> var_13, val<bool*> var_14, val<bool*> var_15, val<long long int*> var_16, val<int*> var_17) {
    *var_13 = ((/* implicit */val<unsigned short>) (~(1536568163)));
    *var_14 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) (~(((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) var_3))))))) ? ((+(((/* implicit */val<int>) (val<signed char>)-16)))) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_12)))))));
    *var_15 = ((/* implicit */val<bool>) (-((+(2117148274873732510LL)))));
    *var_16 = ((/* implicit */val<long long int>) ((val<signed char>) (!(((/* implicit */val<bool>) var_5)))));
    *var_17 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) min((2408087069U), (((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) (val<signed char>)16)))))))) ? ((~((-9223372036854775807LL - 1LL)))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-10;
unsigned short var_4 = (unsigned short)1285;
short var_5 = (short)-23317;
long long int var_6 = -5510040223864440078LL;
short var_11 = (short)-11592;
unsigned short var_12 = (unsigned short)13489;
int zero = 0;
unsigned short var_13 = (unsigned short)43064;
bool var_14 = (bool)0;
bool var_15 = (bool)1;
long long int var_16 = -6216415794350685641LL;
int var_17 = 1910420714;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)54428;
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != 0LL;
    value_mismatch |= var_17 != -1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_5, var_6, var_11, var_12, zero, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
}
