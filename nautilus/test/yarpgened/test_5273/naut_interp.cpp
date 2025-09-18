/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5273
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5273
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
void test(val<signed char> var_1, val<unsigned char> var_4, val<short> var_6, val<short> var_7, val<unsigned char> var_8, val<int> var_9, val<int> zero, val<unsigned short*> var_10, val<signed char*> var_11, val<short*> var_12, val<unsigned int*> var_13, val<unsigned char*> var_14) {
    *var_10 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) (val<unsigned char>)151)) : (((/* implicit */val<int>) (val<signed char>)(-127 - 1)))));
    *var_11 *= ((/* implicit */val<signed char>) ((((/* implicit */val<int>) var_4)) >> (((((/* implicit */val<int>) ((val<unsigned char>) ((((/* implicit */val<bool>) (val<unsigned char>)224)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_8))) : (2749685516U))))) - (117)))));
    *var_12 &= ((/* implicit */val<short>) var_8);
    *var_13 = ((/* implicit */val<unsigned int>) var_1);
    *var_14 = ((/* implicit */val<unsigned char>) min((var_9), (((/* implicit */val<int>) var_6))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)105;
unsigned char var_4 = (unsigned char)124;
short var_6 = (short)-8279;
short var_7 = (short)-21315;
unsigned char var_8 = (unsigned char)147;
int var_9 = -1285524620;
int zero = 0;
unsigned short var_10 = (unsigned short)57833;
signed char var_11 = (signed char)1;
short var_12 = (short)-18386;
unsigned int var_13 = 2803168584U;
unsigned char var_14 = (unsigned char)58;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned short)151;
    value_mismatch |= var_11 != (signed char)0;
    value_mismatch |= var_12 != (short)2;
    value_mismatch |= var_13 != 105U;
    value_mismatch |= var_14 != (unsigned char)116;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_6, var_7, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13, &var_14);
  checksum();
}
