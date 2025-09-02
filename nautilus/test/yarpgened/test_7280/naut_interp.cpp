/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7280
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7280
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
void test(val<unsigned long long int> var_0, val<bool> var_1, val<short> var_2, val<long long int> var_3, val<unsigned long long int> var_4, val<bool> var_5, val<unsigned int> var_6, val<bool> var_7, val<unsigned int> var_9, val<unsigned char> var_10, val<unsigned char> var_11, val<int> var_12, val<int> var_14, val<unsigned int> var_15, val<unsigned int> var_16, val<int> zero, val<bool*> var_17, val<bool*> var_18, val<unsigned int*> var_19, val<bool*> var_20, val<signed char*> var_21, val<bool*> var_22, val<long long int*> var_23, val<unsigned int*> var_24, val<unsigned long long int*> var_25, val<int*> var_26, val<int*> var_27, val<unsigned int*> var_28) {
    *var_17 += ((/* implicit */val<bool>) var_4);
    if (((/* implicit */val<bool>) var_0))
    {
        if (((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) var_9)) * (var_0))))
        {
            *var_18 = ((/* implicit */val<bool>) var_15);
            if (var_7)
            {
                *var_19 = ((((/* implicit */val<bool>) var_14)) ? (min((var_16), (3670640566U))) : (((var_9) | (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) min((var_10), (var_11))))))));
                if (((/* implicit */val<bool>) max((((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<unsigned long long int>) var_6)) : (var_0))), (((/* implicit */val<unsigned long long int>) (((+(((/* implicit */val<int>) var_2)))) <= (((/* implicit */val<int>) var_7))))))))
                {
                    *var_20 = (!(((/* implicit */val<bool>) var_3)));
                    if (((/* implicit */val<bool>) max((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_16)) ? (var_3) : (((/* implicit */val<long long int>) 469390163))))) ? (((/* implicit */val<int>) (val<short>)-4420)) : (((/* implicit */val<int>) ((val<signed char>) 3568462679U))))), (((/* implicit */val<int>) ((((/* implicit */val<int>) ((var_14) == (((/* implicit */val<int>) var_7))))) > (((/* implicit */val<int>) var_10))))))))
                    {
                        *var_21 = ((/* implicit */val<signed char>) var_14);
                        *var_22 = ((/* implicit */val<bool>) var_9);
                        *var_23 |= ((/* implicit */val<long long int>) ((val<short>) var_9));
                    }

                    *var_24 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<unsigned char>)145)) / (1492159333)))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1))) : (((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_7)) / (var_12)))) * (var_0)))));
                }

            }

            *var_25 = ((/* implicit */val<unsigned long long int>) ((val<unsigned int>) -180199991));
        }

        *var_26 = ((/* implicit */val<int>) var_2);
    }

    *var_27 -= ((/* implicit */val<int>) var_5);
    *var_28 &= ((/* implicit */val<unsigned int>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13530204990879898036ULL;
bool var_1 = (bool)1;
short var_2 = (short)5493;
long long int var_3 = -6165688923201519134LL;
unsigned long long int var_4 = 16711528976075150994ULL;
bool var_5 = (bool)0;
unsigned int var_6 = 1374888306U;
bool var_7 = (bool)1;
unsigned int var_9 = 389579518U;
unsigned char var_10 = (unsigned char)68;
unsigned char var_11 = (unsigned char)130;
int var_12 = 296213049;
int var_14 = -205725688;
unsigned int var_15 = 2125004803U;
unsigned int var_16 = 4001265140U;
int zero = 0;
bool var_17 = (bool)0;
bool var_18 = (bool)0;
unsigned int var_19 = 2088444336U;
bool var_20 = (bool)1;
signed char var_21 = (signed char)58;
bool var_22 = (bool)1;
long long int var_23 = -5447119991448082979LL;
unsigned int var_24 = 688319153U;
unsigned long long int var_25 = 3625055276694074482ULL;
int var_26 = -758624805;
int var_27 = 958419737;
unsigned int var_28 = 2046884275U;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != 3670640566U;
    value_mismatch |= var_20 != (bool)0;
    value_mismatch |= var_21 != (signed char)58;
    value_mismatch |= var_22 != (bool)1;
    value_mismatch |= var_23 != -5447119991448082979LL;
    value_mismatch |= var_24 != 0U;
    value_mismatch |= var_25 != 4114767305ULL;
    value_mismatch |= var_26 != 5493;
    value_mismatch |= var_27 != 958419737;
    value_mismatch |= var_28 != 4401U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_9, var_10, var_11, var_12, var_14, var_15, var_16, zero, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25, &var_26, &var_27, &var_28);
  checksum();
  assert(!value_mismatch);
}
