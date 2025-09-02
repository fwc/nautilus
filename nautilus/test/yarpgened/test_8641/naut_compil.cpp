/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8641
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8641
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
void test(val<int> zero, val<int*> var_10, val<unsigned char*> var_11, val<int*> var_12, val<int*> var_13, val<unsigned int*> var_14, val<short*> var_15, val<bool*> var_16) {
    if (((/* implicit */val<bool>) -2114466415))
    {
        *var_10 = ((/* implicit */val<int>) min((((/* implicit */val<unsigned int>) min(((val<bool>)1), (((((/* implicit */val<int>) (val<bool>)1)) <= (((/* implicit */val<int>) (val<short>)-29552))))))), (max((((4294967295U) | (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)55))))), (min((((/* implicit */val<unsigned int>) (val<short>)-29551)), (21U)))))));
        *var_11 = ((/* implicit */val<unsigned char>) min((((/* implicit */val<int>) (!(((/* implicit */val<bool>) min(((val<unsigned char>)173), ((val<unsigned char>)71))))))), (((((/* implicit */val<int>) ((3472229739U) > (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)-540)))))) << (((((((/* implicit */val<int>) (val<short>)-565)) % (((/* implicit */val<int>) (val<signed char>)101)))) + (74)))))));
    }

    if (((/* implicit */val<bool>) (val<signed char>)-108))
    {
        if (((/* implicit */val<bool>) 3472229739U))
        {
            *var_12 -= ((/* implicit */val<int>) 822737558U);
            *var_13 *= ((/* implicit */val<int>) ((((min((1366531330U), (4072060935U))) - (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)232))))) & (((/* implicit */val<unsigned int>) min((((((/* implicit */val<int>) (val<bool>)1)) % (((/* implicit */val<int>) (val<short>)525)))), (((/* implicit */val<int>) (val<bool>)1)))))));
        }

        *var_14 |= ((/* implicit */val<unsigned int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)216))) >= (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) min(((val<unsigned short>)7945), (((/* implicit */val<unsigned short>) (val<unsigned char>)200)))))) | (min((((/* implicit */val<unsigned int>) (val<unsigned short>)52927)), (4294967274U)))))));
        *var_15 = ((/* implicit */val<short>) max(((~(((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) (val<unsigned char>)99)), ((val<unsigned short>)52927)))))), (((/* implicit */val<int>) ((((/* implicit */val<int>) (val<unsigned char>)200)) != ((-(((/* implicit */val<int>) (val<unsigned short>)0)))))))));
        *var_16 = ((/* implicit */val<bool>) min((max((((((/* implicit */val<long long int>) 9U)) & (2797074824780846854LL))), (((/* implicit */val<long long int>) (~(2114466416)))))), (((/* implicit */val<long long int>) 986124580U))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
int var_10 = 927448860;
unsigned char var_11 = (unsigned char)34;
int var_12 = -345055808;
int var_13 = -264394599;
unsigned int var_14 = 524976221U;
short var_15 = (short)-945;
bool var_16 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 0;
    value_mismatch |= var_11 != (unsigned char)0;
    value_mismatch |= var_12 != -1167793366;
    value_mismatch |= var_13 != 0;
    value_mismatch |= var_14 != 524976221U;
    value_mismatch |= var_15 != (short)1;
    value_mismatch |= var_16 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_10, &var_11, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
