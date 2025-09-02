/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4086
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4086
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
void test(val<short> var_0, val<unsigned char> var_1, val<unsigned char> var_2, val<unsigned short> var_3, val<unsigned int> var_4, val<int> var_5, val<int> var_6, val<short> var_7, val<bool> var_8, val<unsigned short> var_9, val<int> zero, val<long long int*> var_10, val<unsigned char*> var_11, val<short*> var_12, val<long long int*> var_13, val<unsigned short*> var_14, val<unsigned int*> var_15, val<bool*> var_16, val<unsigned char*> var_17, val<unsigned short*> var_18, val<short*> var_19, val<short*> var_20, val<long long int*> var_21, val<signed char*> var_22, val<bool*> var_23) {
    if (((/* implicit */val<bool>) var_3))
    {
        *var_10 ^= ((/* implicit */val<long long int>) var_1);
        *var_11 = ((/* implicit */val<unsigned char>) min(((+((~(((/* implicit */val<int>) var_8)))))), (((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) var_2)) : (((((/* implicit */val<bool>) (val<short>)14112)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) (val<short>)-1))))))));
        if (((/* implicit */val<bool>) var_9))
        {
            *var_12 = ((/* implicit */val<short>) max((var_4), (((/* implicit */val<unsigned int>) var_3))));
            *var_13 &= ((((/* implicit */val<bool>) var_5)) ? ((-(((((/* implicit */val<bool>) var_2)) ? (7988534771830974146LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3))))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_1))));
            if (((/* implicit */val<bool>) var_4))
            {
                *var_14 = ((/* implicit */val<unsigned short>) max((*var_14), (((/* implicit */val<unsigned short>) (~(min((var_4), ((-(var_4))))))))));
                *var_15 = ((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned short>) var_8)), ((val<unsigned short>)65535)))) ? (1395653669U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3))))))));
                if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) (-(var_6)))) ? (1241624800969063842LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2))))))
                {
                    *var_16 = ((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) ((var_4) > (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_9)))))), (min((min((var_4), (0U))), (((/* implicit */val<unsigned int>) var_6))))));
                    *var_17 = ((/* implicit */val<unsigned char>) var_5);
                }

                *var_18 *= ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_0))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_7))) : (var_4)));
            }

        }

        *var_19 = ((/* implicit */val<short>) min((((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_6))))) == (var_5))), (var_8)));
        *var_20 ^= ((/* implicit */val<short>) (~(2211536737447208367LL)));
    }

    *var_21 = ((/* implicit */val<long long int>) var_7);
    *var_22 = ((/* implicit */val<signed char>) (val<unsigned char>)230);
    *var_23 &= ((/* implicit */val<bool>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24968;
unsigned char var_1 = (unsigned char)148;
unsigned char var_2 = (unsigned char)132;
unsigned short var_3 = (unsigned short)56874;
unsigned int var_4 = 1188175439U;
int var_5 = 1743219566;
int var_6 = -2041733371;
short var_7 = (short)5094;
bool var_8 = (bool)0;
unsigned short var_9 = (unsigned short)6550;
int zero = 0;
long long int var_10 = 3857454447244134515LL;
unsigned char var_11 = (unsigned char)86;
short var_12 = (short)24223;
long long int var_13 = 1953154479782998027LL;
unsigned short var_14 = (unsigned short)62071;
unsigned int var_15 = 3280797630U;
bool var_16 = (bool)1;
unsigned char var_17 = (unsigned char)9;
unsigned short var_18 = (unsigned short)39813;
short var_19 = (short)-6041;
short var_20 = (short)31703;
long long int var_21 = 6358853297249568345LL;
signed char var_22 = (signed char)-15;
bool var_23 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 3857454447244134631LL;
    value_mismatch |= var_11 != (unsigned char)255;
    value_mismatch |= var_12 != (short)7759;
    value_mismatch |= var_13 != 1225548242614784010LL;
    value_mismatch |= var_14 != (unsigned short)62071;
    value_mismatch |= var_15 != 0U;
    value_mismatch |= var_16 != (bool)0;
    value_mismatch |= var_17 != (unsigned char)110;
    value_mismatch |= var_18 != (unsigned short)39038;
    value_mismatch |= var_19 != (short)0;
    value_mismatch |= var_20 != (short)-7801;
    value_mismatch |= var_21 != 5094LL;
    value_mismatch |= var_22 != (signed char)-26;
    value_mismatch |= var_23 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
