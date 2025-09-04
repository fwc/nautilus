/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1542
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1542
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
void test(val<unsigned char> var_0, val<unsigned short> var_1, val<unsigned int> var_2, val<bool> var_3, val<unsigned char> var_4, val<bool> var_5, val<unsigned long long int> var_7, val<int> var_8, val<int> var_10, val<bool> var_11, val<unsigned long long int> var_12, val<short> var_13, val<long long int> var_14, val<int> var_15, val<unsigned char> var_16, val<short> var_17, val<int> zero, val<unsigned char*> var_18, val<unsigned char*> var_19, val<unsigned short*> var_20, val<int*> var_21, val<unsigned long long int*> var_22, val<long long int*> var_23, val<short*> var_24, val<unsigned long long int*> var_25, val<int*> var_26, val<int*> var_27, val<unsigned short*> var_28, val<int*> var_29, val<long long int*> var_30, val<short*> var_31, val<int*> var_32, val<long long int*> var_33) {
    *var_18 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) (val<signed char>)-78)) - (32505856)));
    *var_19 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<short>)-15942)) ? (min((((/* implicit */val<unsigned long long int>) (val<bool>)0)), (var_7))) : (((/* implicit */val<unsigned long long int>) (+(var_14))))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((((/* implicit */val<bool>) 7000673928570316642ULL)) ? (3848709587U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_0))))) >= (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) (val<short>)7168)) | (((/* implicit */val<int>) (val<bool>)0))))))))) : (((((var_12) & (((/* implicit */val<unsigned long long int>) -7700832640144822783LL)))) - (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_13)))))));
    *var_20 = ((/* implicit */val<unsigned short>) ((val<long long int>) (!(((/* implicit */val<bool>) max((var_16), (((/* implicit */val<unsigned char>) var_11))))))));
    if (((/* implicit */val<bool>) var_2))
    {
        *var_21 = ((/* implicit */val<int>) (!(((/* implicit */val<bool>) (-(3979454401566303765LL))))));
        *var_22 = ((/* implicit */val<unsigned long long int>) var_13);
        *var_23 = ((/* implicit */val<long long int>) ((val<short>) ((max((((/* implicit */val<long long int>) (val<bool>)1)), (9223372036854775807LL))) >> (((2545058723142625803ULL) & (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4))))))));
        *var_24 = ((/* implicit */val<short>) ((val<long long int>) (-(((216172782113783808LL) / (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_1))))))));
    }
    else
    {
        *var_25 = ((/* implicit */val<unsigned long long int>) (val<bool>)0);
        *var_26 |= ((/* implicit */val<int>) (~(((((((/* implicit */val<bool>) var_7)) ? (0ULL) : (((/* implicit */val<unsigned long long int>) var_8)))) % (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<int>) var_1)), (var_15))))))));
        *var_27 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) 0U)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_17))) : (((val<unsigned long long int>) ((val<unsigned char>) (val<unsigned char>)255)))));
    }

    if ((!((((!(((/* implicit */val<bool>) var_8)))) || ((!(((/* implicit */val<bool>) 0ULL))))))))
    {
        if (((/* implicit */val<bool>) var_8))
        {
            *var_28 = ((/* implicit */val<unsigned short>) 12647088548719914217ULL);
            *var_29 = ((/* implicit */val<int>) (val<unsigned char>)0);
        }

        *var_30 = ((/* implicit */val<long long int>) var_0);
    }
    else
    {
        if ((!(((/* implicit */val<bool>) max(((~(var_15))), (((/* implicit */val<int>) (!(((/* implicit */val<bool>) 16276690953731583641ULL))))))))))
        {
            *var_31 |= ((/* implicit */val<short>) (((!((((val<bool>)1) && (((/* implicit */val<bool>) (val<unsigned char>)84)))))) || (((/* implicit */val<bool>) (val<unsigned short>)48319))));
            *var_32 = ((/* implicit */val<int>) var_3);
        }

        *var_33 = ((/* implicit */val<long long int>) min((((/* implicit */val<unsigned int>) ((max((((/* implicit */val<int>) var_5)), (var_10))) & (((((/* implicit */val<int>) (val<unsigned char>)0)) << (((((/* implicit */val<int>) var_13)) - (3605)))))))), (var_2)));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)218;
unsigned short var_1 = (unsigned short)59478;
unsigned int var_2 = 661232049U;
bool var_3 = (bool)1;
unsigned char var_4 = (unsigned char)25;
bool var_5 = (bool)1;
unsigned long long int var_7 = 8539518404849482602ULL;
int var_8 = -206009045;
int var_10 = 901701787;
bool var_11 = (bool)0;
unsigned long long int var_12 = 12908652059433937653ULL;
short var_13 = (short)3630;
long long int var_14 = 5390802946581334638LL;
int var_15 = -346330124;
unsigned char var_16 = (unsigned char)174;
short var_17 = (short)27957;
int zero = 0;
unsigned char var_18 = (unsigned char)208;
unsigned char var_19 = (unsigned char)173;
unsigned short var_20 = (unsigned short)28598;
int var_21 = 975820472;
unsigned long long int var_22 = 12266372515668243826ULL;
long long int var_23 = 6036948410933719304LL;
short var_24 = (short)10148;
unsigned long long int var_25 = 9392108609579343351ULL;
int var_26 = -248133156;
int var_27 = 889088855;
unsigned short var_28 = (unsigned short)27667;
int var_29 = -1238198756;
long long int var_30 = 9097345451909101299LL;
short var_31 = (short)478;
int var_32 = -1792657133;
long long int var_33 = 1157607875528002864LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned char)178;
    value_mismatch |= var_19 != (unsigned char)211;
    value_mismatch |= var_20 != (unsigned short)0;
    value_mismatch |= var_21 != 0;
    value_mismatch |= var_22 != 3630ULL;
    value_mismatch |= var_23 != -1LL;
    value_mismatch |= var_24 != (short)28316;
    value_mismatch |= var_25 != 9392108609579343351ULL;
    value_mismatch |= var_26 != -248133156;
    value_mismatch |= var_27 != 889088855;
    value_mismatch |= var_28 != (unsigned short)27667;
    value_mismatch |= var_29 != -1238198756;
    value_mismatch |= var_30 != 9097345451909101299LL;
    value_mismatch |= var_31 != (short)478;
    value_mismatch |= var_32 != -1792657133;
    value_mismatch |= var_33 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_7, var_8, var_10, var_11, var_12, var_13, var_14, var_15, var_16, var_17, zero, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25, &var_26, &var_27, &var_28, &var_29, &var_30, &var_31, &var_32, &var_33);
  checksum();
  assert(!value_mismatch);
}
