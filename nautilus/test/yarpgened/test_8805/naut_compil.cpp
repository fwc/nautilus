/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8805
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8805
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
void test(val<bool> var_0, val<signed char> var_2, val<unsigned char> var_4, val<short> var_6, val<unsigned char> var_8, val<long long int> var_9, val<short> var_10, val<unsigned char> var_11, val<short> var_13, val<int> zero, val<short*> var_14, val<unsigned short*> var_15, val<unsigned char*> var_16, val<long long int*> var_17) {
    *var_14 = ((/* implicit */val<short>) ((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<short>)32767)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) var_0))))) ? (((/* implicit */val<int>) (val<short>)-6476)) : (((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) var_4)))))) - (((((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)32751))) & (724184346U)))) ? (((((/* implicit */val<int>) var_13)) & (((/* implicit */val<int>) (val<short>)-32762)))) : (((/* implicit */val<int>) var_10))))));
    *var_15 -= ((/* implicit */val<unsigned short>) var_11);
    if (((/* implicit */val<bool>) var_4))
    {
        *var_16 = var_8;
        *var_17 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) var_2))))) ? (((((/* implicit */val<int>) (val<signed char>)127)) - (((/* implicit */val<int>) var_13)))) : (((/* implicit */val<int>) var_0))))) && (((/* implicit */val<bool>) min((((((/* implicit */val<bool>) (val<short>)-6460)) ? (((/* implicit */val<int>) (val<short>)32739)) : (((/* implicit */val<int>) (val<short>)32757)))), (((/* implicit */val<int>) (val<signed char>)-1)))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
signed char var_2 = (signed char)-48;
unsigned char var_4 = (unsigned char)194;
short var_6 = (short)13379;
unsigned char var_8 = (unsigned char)151;
long long int var_9 = 1294902667985605288LL;
short var_10 = (short)4784;
unsigned char var_11 = (unsigned char)42;
short var_13 = (short)-9223;
int zero = 0;
short var_14 = (short)22996;
unsigned short var_15 = (unsigned short)52259;
unsigned char var_16 = (unsigned char)206;
long long int var_17 = -3215342233967243740LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (short)26292;
    value_mismatch |= var_15 != (unsigned short)52217;
    value_mismatch |= var_16 != (unsigned char)151;
    value_mismatch |= var_17 != 1LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_6, var_8, var_9, var_10, var_11, var_13, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
