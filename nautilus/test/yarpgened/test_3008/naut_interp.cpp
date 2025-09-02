/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3008
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3008
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
void test(val<signed char> var_0, val<long long int> var_1, val<signed char> var_2, val<unsigned char> var_3, val<unsigned short> var_4, val<int> var_5, val<short> var_6, val<long long int> var_7, val<unsigned int> var_8, val<int> var_9, val<long long int> var_10, val<unsigned int> var_11, val<int> zero, val<unsigned int*> var_12, val<long long int*> var_13, val<unsigned int*> var_14, val<unsigned int*> var_15, val<unsigned int*> var_16, val<long long int*> var_17) {
    *var_12 |= ((/* implicit */val<unsigned int>) min((min((((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_0))) - (var_1))), (((/* implicit */val<long long int>) ((((/* implicit */val<int>) (val<signed char>)0)) + (((/* implicit */val<int>) (val<unsigned short>)65530))))))), (((((/* implicit */val<long long int>) ((/* implicit */val<int>) min((var_2), (var_2))))) + ((+(var_10)))))));
    *var_13 &= (~(((((/* implicit */val<bool>) min((var_10), (((/* implicit */val<long long int>) var_0))))) ? (((/* implicit */val<long long int>) (~(var_5)))) : (((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1))) + (7159108773872568939LL))))));
    *var_14 = min((((((/* implicit */val<bool>) min((((/* implicit */val<long long int>) var_5)), (var_10)))) ? (((/* implicit */val<unsigned int>) (~(var_5)))) : (((val<unsigned int>) var_4)))), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((var_8) / (var_8)))) && (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_7)) ? (var_11) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_2))))))))));
    if (((/* implicit */val<bool>) ((((/* implicit */val<long long int>) ((((((/* implicit */val<int>) ((val<short>) var_6))) + (2147483647))) << (((((((((/* implicit */val<long long int>) var_9)) | (var_10))) + (652259618298400804LL))) - (17LL)))))) / ((~((~(var_7))))))))
    {
        *var_15 ^= ((/* implicit */val<unsigned int>) ((((((/* implicit */val<bool>) ((var_5) / (((/* implicit */val<int>) var_0))))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) var_4))))) : (((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2))) : (var_7))))) + (((/* implicit */val<long long int>) ((((var_8) % (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3))))) << (((var_10) + (652259618580796563LL))))))));
        *var_16 = ((val<unsigned int>) max((((/* implicit */val<unsigned int>) min((((/* implicit */val<int>) var_0)), (var_9)))), (((val<unsigned int>) var_9))));
        *var_17 = (((~(((((/* implicit */val<bool>) var_4)) ? (var_1) : (var_7))))) | (((/* implicit */val<long long int>) min(((~(var_8))), (((/* implicit */val<unsigned int>) ((val<signed char>) var_10)))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)73;
long long int var_1 = -6775481303412169005LL;
signed char var_2 = (signed char)-42;
unsigned char var_3 = (unsigned char)170;
unsigned short var_4 = (unsigned short)24203;
int var_5 = 626233984;
short var_6 = (short)-11741;
long long int var_7 = 7400557303986337955LL;
unsigned int var_8 = 1855234872U;
int var_9 = 889038306;
long long int var_10 = -652259618580796562LL;
unsigned int var_11 = 2828338812U;
int zero = 0;
unsigned int var_12 = 1495328528U;
long long int var_13 = -836482017726576254LL;
unsigned int var_14 = 3751123568U;
unsigned int var_15 = 3090724931U;
unsigned int var_16 = 2381268506U;
long long int var_17 = -6000721051772289796LL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 2099834708U;
    value_mismatch |= var_13 != 541294720LL;
    value_mismatch |= var_14 != 1U;
    value_mismatch |= var_15 != 3090724931U;
    value_mismatch |= var_16 != 2381268506U;
    value_mismatch |= var_17 != -6000721051772289796LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, zero, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
