/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9818
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9818
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
void test(val<unsigned char> var_0, val<signed char> var_1, val<long long int> var_3, val<unsigned short> var_5, val<signed char> var_7, val<long long int> var_8, val<signed char> var_9, val<unsigned char> var_10, val<signed char> var_11, val<signed char> var_12, val<int> zero, val<bool*> var_13, val<long long int*> var_14, val<unsigned short*> var_15, val<long long int*> var_16, val<bool*> var_17, val<long long int*> var_18, val<signed char*> var_19, val<bool*> var_20, val<unsigned char*> var_21, val<bool*> var_22, val<signed char*> var_23) {
    *var_13 = ((/* implicit */val<bool>) (val<unsigned char>)31);
    *var_14 = ((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_11)) % (((/* implicit */val<int>) var_12))));
    *var_15 = ((/* implicit */val<unsigned short>) ((3985827115U) > (((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) min(((val<unsigned char>)33), ((val<unsigned char>)33)))))))));
    *var_16 = ((/* implicit */val<long long int>) min((*var_16), (((/* implicit */val<long long int>) var_9))));
    if (((/* implicit */val<bool>) (+(((/* implicit */val<int>) (val<unsigned char>)32)))))
    {
        *var_17 = ((/* implicit */val<bool>) max((((/* implicit */val<long long int>) var_12)), (min((min((var_3), (((/* implicit */val<long long int>) var_7)))), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) (val<unsigned char>)224)))))))));
        *var_18 = ((/* implicit */val<long long int>) min((*var_18), (((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<long long int>) min(((~(((/* implicit */val<int>) (val<signed char>)7)))), (((/* implicit */val<int>) max((var_0), (((/* implicit */val<unsigned char>) var_1)))))))) : (max((((/* implicit */val<long long int>) max((var_0), (((/* implicit */val<unsigned char>) (val<signed char>)7))))), (var_3)))))));
        *var_19 -= ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) 309140159U)) ? ((~(((/* implicit */val<int>) (val<signed char>)-8)))) : (((/* implicit */val<int>) var_12))));
    }
    else
    {
        *var_20 = ((/* implicit */val<bool>) var_8);
        *var_21 = (val<unsigned char>)222;
        *var_22 += ((/* implicit */val<bool>) max((((((((/* implicit */val<bool>) (val<unsigned char>)32)) ? (562422999589692105LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)28836))))) % (((/* implicit */val<long long int>) (~(((/* implicit */val<int>) var_5))))))), (((/* implicit */val<long long int>) var_1))));
        *var_23 &= ((/* implicit */val<signed char>) ((((/* implicit */val<int>) var_0)) * (((/* implicit */val<int>) var_11))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)175;
signed char var_1 = (signed char)-52;
long long int var_3 = 5770633857573493642LL;
unsigned short var_5 = (unsigned short)35201;
signed char var_7 = (signed char)-77;
long long int var_8 = -4699624663893741914LL;
signed char var_9 = (signed char)-110;
unsigned char var_10 = (unsigned char)62;
signed char var_11 = (signed char)127;
signed char var_12 = (signed char)-8;
int zero = 0;
bool var_13 = (bool)0;
long long int var_14 = 7428496597641499012LL;
unsigned short var_15 = (unsigned short)7723;
long long int var_16 = 9125548840563422187LL;
bool var_17 = (bool)0;
long long int var_18 = -9170732057640030951LL;
signed char var_19 = (signed char)92;
bool var_20 = (bool)0;
unsigned char var_21 = (unsigned char)158;
bool var_22 = (bool)0;
signed char var_23 = (signed char)-52;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != 7LL;
    value_mismatch |= var_15 != (unsigned short)1;
    value_mismatch |= var_16 != -110LL;
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != -9170732057640030951LL;
    value_mismatch |= var_19 != (signed char)85;
    value_mismatch |= var_20 != (bool)0;
    value_mismatch |= var_21 != (unsigned char)158;
    value_mismatch |= var_22 != (bool)0;
    value_mismatch |= var_23 != (signed char)-52;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_5, var_7, var_8, var_9, var_10, var_11, var_12, zero, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
