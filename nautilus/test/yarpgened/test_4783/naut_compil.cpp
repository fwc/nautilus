/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4783
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4783
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
void test(val<unsigned long long int> var_0, val<long long int> var_1, val<unsigned char> var_2, val<unsigned char> var_3, val<long long int> var_4, val<unsigned char> var_5, val<signed char> var_6, val<unsigned short> var_7, val<long long int> var_8, val<short> var_9, val<int> var_10, val<int> zero, val<unsigned int*> var_11, val<long long int*> var_12, val<unsigned int*> var_13, val<short*> var_14, val<long long int*> var_15, val<unsigned short*> var_16, val<short*> var_17, val<unsigned int*> var_18, val<unsigned int*> var_19, val<int*> var_20, val<unsigned char*> var_21, val<long long int*> var_22, val<int*> var_23, val<int*> var_24, val<unsigned char*> var_25, val<unsigned short*> var_26, val<unsigned long long int*> var_27, val<int*> var_28, val<signed char*> var_29) {
    *var_11 = ((/* implicit */val<unsigned int>) var_2);
    if (((max((((/* implicit */val<unsigned long long int>) var_9)), (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)3))) - (18446744073709551615ULL))))) <= (((/* implicit */val<unsigned long long int>) 17448566U))))
    {
        *var_12 = ((val<long long int>) (~(((((/* implicit */val<bool>) var_3)) ? (17448568U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3)))))));
        if (((/* implicit */val<bool>) (-(((val<long long int>) var_9)))))
        {
            *var_13 = ((/* implicit */val<unsigned int>) max((*var_13), (((/* implicit */val<unsigned int>) (-(var_4))))));
            *var_14 = ((/* implicit */val<short>) var_7);
        }
        else
        {
            if (((/* implicit */val<bool>) (val<short>)-20495))
            {
                *var_15 = ((val<long long int>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_9))))) ? (((/* implicit */val<int>) (val<unsigned short>)26)) : ((~(((/* implicit */val<int>) var_5))))));
                *var_16 = ((/* implicit */val<unsigned short>) min((((/* implicit */val<unsigned int>) var_2)), ((~((+(10U)))))));
            }

            *var_17 = ((/* implicit */val<short>) ((val<unsigned short>) var_7));
            if (((/* implicit */val<bool>) (+(((((/* implicit */val<int>) ((val<unsigned char>) 2220175053U))) & (((/* implicit */val<int>) (val<unsigned short>)0)))))))
            {
                *var_18 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) 0U)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)-6397))) : (var_4)));
                *var_19 = ((/* implicit */val<unsigned int>) min(((~((+(((/* implicit */val<int>) (val<unsigned char>)248)))))), (((/* implicit */val<int>) var_6))));
                if (((/* implicit */val<bool>) ((val<long long int>) var_10)))
                {
                    *var_20 = max((((/* implicit */val<int>) ((((/* implicit */val<int>) var_5)) > (var_10)))), (((((/* implicit */val<bool>) ((-1075841910) - (var_10)))) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_10))))))));
                    *var_21 = ((/* implicit */val<unsigned char>) max((*var_21), (((/* implicit */val<unsigned char>) min(((~(min((((/* implicit */val<unsigned int>) var_6)), (10U))))), ((~(min((4221880517U), (((/* implicit */val<unsigned int>) var_5)))))))))));
                    *var_22 = ((/* implicit */val<long long int>) max((*var_22), (var_8)));
                    *var_23 += ((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_5)) ? (((val<int>) var_4)) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) 2147483632)) && (((/* implicit */val<bool>) (val<unsigned short>)3574)))))))) && (((/* implicit */val<bool>) var_0))));
                }
                else
                {
                    *var_24 = ((/* implicit */val<int>) 128U);
                    *var_25 = ((/* implicit */val<unsigned char>) var_6);
                }

                *var_26 = ((/* implicit */val<unsigned short>) ((val<short>) ((((/* implicit */val<bool>) ((2220175062U) | (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)22949)))))) || (((/* implicit */val<bool>) max((var_4), (var_4)))))));
                *var_27 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_6))) : (0U)));
            }

        }

        *var_28 = ((((/* implicit */val<int>) var_9)) & ((~((-(((/* implicit */val<int>) (val<unsigned short>)14336)))))));
        *var_29 -= ((/* implicit */val<signed char>) ((((/* implicit */val<int>) ((((((/* implicit */val<bool>) (val<unsigned short>)9)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6))) : (var_0))) <= (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<short>) 1428337817U))))))) >> (((((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<unsigned long long int>) max((var_1), (((/* implicit */val<long long int>) 10U))))) : (var_0))) - (990816062458994236ULL)))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1254598461083473657ULL;
long long int var_1 = 990816062458994238LL;
unsigned char var_2 = (unsigned char)163;
unsigned char var_3 = (unsigned char)126;
long long int var_4 = -4344355118605997000LL;
unsigned char var_5 = (unsigned char)77;
signed char var_6 = (signed char)121;
unsigned short var_7 = (unsigned short)33083;
long long int var_8 = -4717341965560004783LL;
short var_9 = (short)-28325;
int var_10 = -1785956479;
int zero = 0;
unsigned int var_11 = 2759555321U;
long long int var_12 = 5359756894322605912LL;
unsigned int var_13 = 2130472653U;
short var_14 = (short)583;
long long int var_15 = 7271698140139110524LL;
unsigned short var_16 = (unsigned short)25322;
short var_17 = (short)-31848;
unsigned int var_18 = 670525576U;
unsigned int var_19 = 1369004079U;
int var_20 = -649638006;
unsigned char var_21 = (unsigned char)116;
long long int var_22 = -1259104683911542532LL;
int var_23 = -1410789675;
int var_24 = -860168599;
unsigned char var_25 = (unsigned char)75;
unsigned short var_26 = (unsigned short)49802;
unsigned long long int var_27 = 16933837295470204974ULL;
int var_28 = -250497511;
signed char var_29 = (signed char)100;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 163U;
    value_mismatch |= var_12 != 5359756894322605912LL;
    value_mismatch |= var_13 != 2130472653U;
    value_mismatch |= var_14 != (short)583;
    value_mismatch |= var_15 != 7271698140139110524LL;
    value_mismatch |= var_16 != (unsigned short)25322;
    value_mismatch |= var_17 != (short)-31848;
    value_mismatch |= var_18 != 670525576U;
    value_mismatch |= var_19 != 1369004079U;
    value_mismatch |= var_20 != -649638006;
    value_mismatch |= var_21 != (unsigned char)116;
    value_mismatch |= var_22 != -1259104683911542532LL;
    value_mismatch |= var_23 != -1410789675;
    value_mismatch |= var_24 != -860168599;
    value_mismatch |= var_25 != (unsigned char)75;
    value_mismatch |= var_26 != (unsigned short)49802;
    value_mismatch |= var_27 != 16933837295470204974ULL;
    value_mismatch |= var_28 != -250497511;
    value_mismatch |= var_29 != (signed char)100;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, zero, &var_11, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25, &var_26, &var_27, &var_28, &var_29);
  checksum();
  assert(!value_mismatch);
}
