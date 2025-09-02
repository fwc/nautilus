/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2347
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2347
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
void test(val<int> var_0, val<long long int> var_1, val<long long int> var_2, val<long long int> var_4, val<unsigned long long int> var_5, val<unsigned long long int> var_6, val<signed char> var_8, val<bool> var_9, val<int> var_10, val<long long int> var_11, val<unsigned int> var_13, val<unsigned int> var_14, val<short> var_17, val<int> zero, val<unsigned int*> var_18, val<int*> var_19, val<unsigned char*> var_20, val<long long int*> var_21, val<long long int*> var_22, val<long long int*> var_23, val<unsigned int*> var_24, val<unsigned int*> var_25, val<bool*> var_26, val<long long int*> var_27) {
    *var_18 = ((/* implicit */val<unsigned int>) ((min((((/* implicit */val<long long int>) 4294967295U)), (-2940192390993548807LL))) < (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9)))));
    if (((/* implicit */val<bool>) var_8))
    {
        if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_1)) ? (min((((/* implicit */val<unsigned long long int>) (val<signed char>)103)), (1ULL))) : (min((1ULL), (((/* implicit */val<unsigned long long int>) var_13))))))) ? (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) -7675734750978634934LL)) ? (var_1) : (var_1)))) ? (min((1730745117513983585ULL), (((/* implicit */val<unsigned long long int>) var_9)))) : (var_5))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((((/* implicit */val<int>) var_17)) == (((/* implicit */val<int>) (val<signed char>)-104)))))))))))
        {
            *var_19 ^= ((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)(-127 - 1)))) >= (var_6)));
            *var_20 = ((/* implicit */val<unsigned char>) min((*var_20), (((/* implicit */val<unsigned char>) min((((var_2) + (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_8))))), (((/* implicit */val<long long int>) (val<signed char>)127)))))));
            *var_21 ^= ((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) max((((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) var_0))))), (var_8))))));
            *var_22 = ((/* implicit */val<long long int>) var_17);
            *var_23 = ((/* implicit */val<long long int>) ((((((/* implicit */val<bool>) ((val<long long int>) (val<signed char>)115))) ? (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_8))) : (19ULL))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 18446744073709551596ULL)) ? (var_13) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)98)))))))) << (((((((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) (val<signed char>)(-127 - 1))), (var_13)))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)-118))) : (((((/* implicit */val<unsigned int>) var_10)) ^ (var_14))))) - (4294967141U)))));
        }

        *var_24 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<unsigned long long int>) (+(var_13)))) < (var_5)));
    }

    if (((/* implicit */val<bool>) ((1738922139U) * (((/* implicit */val<unsigned int>) -200477650)))))
    {
        *var_25 = ((/* implicit */val<unsigned int>) min((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((val<unsigned char>) 437522122))) ? (var_13) : (2428947750U)))), (((((/* implicit */val<unsigned long long int>) var_11)) & (19ULL)))));
        *var_26 = ((/* implicit */val<bool>) max((((/* implicit */val<long long int>) ((((/* implicit */val<long long int>) (~(28U)))) == (max((var_1), (((/* implicit */val<long long int>) -437522122))))))), (((((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_8))) : (5564618778963016627LL))) ^ ((~(9223372036854775803LL)))))));
    }

    *var_27 = ((/* implicit */val<long long int>) min((*var_27), (((/* implicit */val<long long int>) max((((/* implicit */val<unsigned int>) 437522122)), (((((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)-112))) + (18ULL)))) ? (((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<unsigned int>) var_10)) : (1738922139U))) : (((/* implicit */val<unsigned int>) (-(var_10)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 659097105;
long long int var_1 = 1567070028968489954LL;
long long int var_2 = -1424851395401225356LL;
long long int var_4 = 5594054722182113671LL;
unsigned long long int var_5 = 6908420368099147724ULL;
unsigned long long int var_6 = 4408650475857069436ULL;
signed char var_8 = (signed char)-119;
bool var_9 = (bool)0;
int var_10 = -1494420223;
long long int var_11 = 8179820807300405107LL;
unsigned int var_13 = 4162869189U;
unsigned int var_14 = 2678235333U;
short var_17 = (short)13247;
int zero = 0;
unsigned int var_18 = 87878666U;
int var_19 = -626584398;
unsigned char var_20 = (unsigned char)98;
long long int var_21 = 2620588221560812110LL;
long long int var_22 = -2565436305993719192LL;
long long int var_23 = 6974788870381697552LL;
unsigned int var_24 = 562087404U;
unsigned int var_25 = 371258032U;
bool var_26 = (bool)0;
long long int var_27 = -8509047504346446429LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 1U;
    value_mismatch |= var_19 != -626584398;
    value_mismatch |= var_20 != (unsigned char)98;
    value_mismatch |= var_21 != 2620588221560812110LL;
    value_mismatch |= var_22 != -2565436305993719192LL;
    value_mismatch |= var_23 != 6974788870381697552LL;
    value_mismatch |= var_24 != 1U;
    value_mismatch |= var_25 != 19U;
    value_mismatch |= var_26 != (bool)1;
    value_mismatch |= var_27 != -8509047504346446429LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_5, var_6, var_8, var_9, var_10, var_11, var_13, var_14, var_17, zero, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25, &var_26, &var_27);
  checksum();
  assert(!value_mismatch);
}
