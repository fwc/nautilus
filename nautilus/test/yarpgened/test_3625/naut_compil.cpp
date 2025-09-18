/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3625
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3625
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
void test(val<unsigned char> var_0, val<bool> var_1, val<unsigned short> var_2, val<unsigned long long int> var_4, val<bool> var_5, val<unsigned int> var_6, val<unsigned long long int> var_8, val<unsigned long long int> var_9, val<signed char> var_10, val<long long int> var_11, val<int> zero, val<unsigned short*> var_14, val<signed char*> var_15, val<signed char*> var_16) {
    *var_14 = ((/* implicit */val<unsigned short>) ((var_1) ? (((((/* implicit */val<bool>) ((val<unsigned int>) (val<signed char>)7))) ? (((((/* implicit */val<bool>) var_0)) ? (12ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<unsigned short>) var_10)))))) : (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_4)) ? (var_8) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_0)))))) ? ((~(var_9))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_1)) + (((/* implicit */val<int>) (val<bool>)1)))))))));
    *var_15 = ((/* implicit */val<signed char>) ((max((((((/* implicit */val<bool>) var_2)) ? (9223372036854775807LL) : (((/* implicit */val<long long int>) 1273724971U)))), (((/* implicit */val<long long int>) (~(((/* implicit */val<int>) (val<signed char>)0))))))) & (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (~(var_6)))) ? (((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) var_5))))) : (((val<unsigned int>) var_5)))))));
    *var_16 = ((/* implicit */val<signed char>) var_11);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)198;
bool var_1 = (bool)1;
unsigned short var_2 = (unsigned short)64420;
unsigned long long int var_4 = 15103553161648445826ULL;
bool var_5 = (bool)1;
unsigned int var_6 = 2539143414U;
unsigned long long int var_8 = 17859184645614720969ULL;
unsigned long long int var_9 = 10176188016798181898ULL;
signed char var_10 = (signed char)94;
long long int var_11 = -2537420303732493135LL;
int zero = 0;
unsigned short var_14 = (unsigned short)41316;
signed char var_15 = (signed char)1;
signed char var_16 = (signed char)-113;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned short)12;
    value_mismatch |= var_15 != (signed char)-2;
    value_mismatch |= var_16 != (signed char)-79;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_5, var_6, var_8, var_9, var_10, var_11, zero, &var_14, &var_15, &var_16);
  checksum();
}
