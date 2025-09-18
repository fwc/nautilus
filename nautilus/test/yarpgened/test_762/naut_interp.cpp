/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 762
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=762
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
void test(val<short> var_0, val<bool> var_1, val<unsigned long long int> var_2, val<signed char> var_3, val<long long int> var_4, val<short> var_5, val<long long int> var_6, val<short> var_7, val<unsigned char> var_8, val<int> zero, val<unsigned int*> var_10, val<unsigned long long int*> var_11, val<signed char*> var_12, val<unsigned long long int*> var_13, val<unsigned char*> var_14, val<unsigned long long int*> var_15, val<bool*> var_16, val<unsigned long long int*> var_17) {
    *var_10 ^= ((/* implicit */val<unsigned int>) (val<signed char>)-101);
    *var_11 = ((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) var_7))));
    if (((/* implicit */val<bool>) var_0))
    {
        if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) max(((~(var_2))), (((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_5))) : (var_2)))))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (val<unsigned char>)233)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_2)))))))) : (max(((-(var_4))), (((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_1))) : (var_4))))))))
        {
            *var_12 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((val<signed char>) min((((/* implicit */val<unsigned int>) (val<unsigned char>)27)), (3743082681U))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7))) : ((+(var_6)))));
            *var_13 = ((/* implicit */val<unsigned long long int>) 3743082681U);
        }

        if (((/* implicit */val<bool>) var_4))
        {
            *var_14 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) 8366413879353079926LL)) ? (((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_1))) : (1644294386U)))) : (((val<unsigned long long int>) 12124314369625885582ULL)))) : (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) ((val<unsigned char>) 551884614U))))))));
            *var_15 = ((/* implicit */val<unsigned long long int>) var_0);
        }

        *var_16 = ((/* implicit */val<bool>) (~(max((((/* implicit */val<long long int>) (((val<bool>)1) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) var_3))))), (var_6)))));
        *var_17 = ((/* implicit */val<unsigned long long int>) min((*var_17), (min((((/* implicit */val<unsigned long long int>) max((((/* implicit */val<long long int>) max((3743082681U), (((/* implicit */val<unsigned int>) (val<short>)-30256))))), (((((/* implicit */val<bool>) 551884614U)) ? (var_4) : (var_4)))))), (((((/* implicit */val<bool>) 4007458430U)) ? (((val<unsigned long long int>) (val<unsigned char>)160)) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_8)) * (((/* implicit */val<int>) (val<unsigned short>)112)))))))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25035;
bool var_1 = (bool)1;
unsigned long long int var_2 = 17118508098550751716ULL;
signed char var_3 = (signed char)-12;
long long int var_4 = 3551402269299025242LL;
short var_5 = (short)-4786;
long long int var_6 = 3820366631129411926LL;
short var_7 = (short)7247;
unsigned char var_8 = (unsigned char)66;
int zero = 0;
unsigned int var_10 = 3472894009U;
unsigned long long int var_11 = 18185641895713724667ULL;
signed char var_12 = (signed char)-94;
unsigned long long int var_13 = 11042624302093643874ULL;
unsigned char var_14 = (unsigned char)104;
unsigned long long int var_15 = 203854689537811382ULL;
bool var_16 = (bool)0;
unsigned long long int var_17 = 15402120147585597079ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 822073250U;
    value_mismatch |= var_11 != 18446744073709544369ULL;
    value_mismatch |= var_12 != (signed char)79;
    value_mismatch |= var_13 != 3743082681ULL;
    value_mismatch |= var_14 != (unsigned char)1;
    value_mismatch |= var_15 != 25035ULL;
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != 160ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, zero, &var_10, &var_11, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
}
