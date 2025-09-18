/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3967
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3967
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
void test(val<unsigned char> var_0, val<unsigned int> var_1, val<unsigned short> var_2, val<short> var_3, val<short> var_5, val<bool> var_6, val<unsigned char> var_7, val<int> zero, val<unsigned short*> var_10, val<signed char*> var_11, val<int*> var_12, val<bool*> var_13, val<long long int*> var_14) {
    *var_10 = ((/* implicit */val<unsigned short>) var_3);
    *var_11 *= ((/* implicit */val<signed char>) ((((/* implicit */val<int>) var_0)) + ((+(717350273)))));
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<short>)2248)) ? (((/* implicit */val<unsigned long long int>) 1488251414U)) : (((((/* implicit */val<bool>) var_5)) ? (18446744073709551607ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)-15819)))))))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<signed char>)15)) ? (3466316825U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)60)))))) ? (((/* implicit */val<int>) (val<unsigned short>)39910)) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned char>)190)))))))) : (max((0LL), (((/* implicit */val<long long int>) (val<short>)-5742)))))))
    {
        *var_12 = ((/* implicit */val<int>) ((val<bool>) var_0));
        *var_13 = ((/* implicit */val<bool>) max((*var_13), (((/* implicit */val<bool>) -1LL))));
        *var_14 = ((/* implicit */val<long long int>) (((!(((/* implicit */val<bool>) var_1)))) ? (((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) var_6))))) <= (((((/* implicit */val<bool>) (val<short>)-15819)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_7))) : (var_1)))))) : (((/* implicit */val<int>) var_2))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)238;
unsigned int var_1 = 1153292328U;
unsigned short var_2 = (unsigned short)56790;
short var_3 = (short)-25486;
short var_5 = (short)-14550;
bool var_6 = (bool)1;
unsigned char var_7 = (unsigned char)244;
int zero = 0;
unsigned short var_10 = (unsigned short)50650;
signed char var_11 = (signed char)71;
int var_12 = -431043433;
bool var_13 = (bool)0;
long long int var_14 = -7869450904517799739LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned short)40050;
    value_mismatch |= var_11 != (signed char)-55;
    value_mismatch |= var_12 != 1;
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != 56790LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_5, var_6, var_7, zero, &var_10, &var_11, &var_12, &var_13, &var_14);
  checksum();
}
