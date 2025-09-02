/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9373
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9373
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
void test(val<unsigned int> var_0, val<unsigned long long int> var_1, val<signed char> var_2, val<unsigned long long int> var_3, val<long long int> var_6, val<unsigned int> var_7, val<unsigned long long int> var_9, val<unsigned long long int> var_11, val<unsigned int> var_12, val<bool> var_13, val<unsigned char> var_15, val<signed char> var_16, val<signed char> var_18, val<int> var_19, val<int> zero, val<long long int*> var_20, val<int*> var_21, val<unsigned long long int*> var_22, val<unsigned int*> var_23, val<unsigned long long int*> var_24, val<unsigned long long int*> var_25, val<unsigned int*> var_26, val<unsigned long long int*> var_27, val<int*> var_28, val<int*> var_29) {
    *var_20 = ((/* implicit */val<long long int>) var_19);
    if (((/* implicit */val<bool>) var_15))
    {
        if (((/* implicit */val<bool>) ((val<unsigned long long int>) (val<bool>)1)))
        {
            if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) var_16)), (((((/* implicit */val<bool>) (val<unsigned short>)65535)) ? (var_3) : (((/* implicit */val<unsigned long long int>) 927933997U))))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_13))) : (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_19)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_2))) : (var_7)))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 3877054321U)) ? (((/* implicit */val<int>) (val<bool>)1)) : (-689412129)))) : ((~(11855381681853283977ULL))))))))
            {
                *var_21 = ((/* implicit */val<int>) (~(max((((17098836837750928026ULL) * (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)1))))), (((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2))) : (var_1)))))));
                *var_22 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) min((((val<unsigned long long int>) var_12)), (((/* implicit */val<unsigned long long int>) var_19))))) || (((/* implicit */val<bool>) (~(((/* implicit */val<int>) ((val<bool>) var_0))))))));
                *var_23 = ((/* implicit */val<unsigned int>) var_19);
                *var_24 = ((/* implicit */val<unsigned long long int>) min((min((((/* implicit */val<unsigned int>) var_18)), (((((/* implicit */val<bool>) var_9)) ? (var_0) : (2257814471U))))), (((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_18))))) ? (min((2257814471U), (776719077U))) : (((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) (val<bool>)1)))))))));
                if (((/* implicit */val<bool>) var_3))
                {
                    *var_25 = ((/* implicit */val<unsigned long long int>) min((((/* implicit */val<long long int>) (-(min((((/* implicit */val<int>) var_16)), (-286458282)))))), (max((var_6), (((/* implicit */val<long long int>) var_13))))));
                    *var_26 = ((var_12) / (((((/* implicit */val<bool>) 10105706616972971471ULL)) ? (4294967270U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)21567))))));
                }

            }

            *var_27 = ((/* implicit */val<unsigned long long int>) var_12);
        }

        *var_28 = ((/* implicit */val<int>) var_1);
    }

    *var_29 = ((/* implicit */val<int>) var_11);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4205446749U;
unsigned long long int var_1 = 17417103702372864643ULL;
signed char var_2 = (signed char)-108;
unsigned long long int var_3 = 3763333432308880569ULL;
long long int var_6 = -854472149528637587LL;
unsigned int var_7 = 3216658506U;
unsigned long long int var_9 = 13131778176947011144ULL;
unsigned long long int var_11 = 12719584332797803899ULL;
unsigned int var_12 = 2744405959U;
bool var_13 = (bool)1;
unsigned char var_15 = (unsigned char)95;
signed char var_16 = (signed char)74;
signed char var_18 = (signed char)38;
int var_19 = -421233135;
int zero = 0;
long long int var_20 = 4484534954411096375LL;
int var_21 = -843827803;
unsigned long long int var_22 = 12817372379565619434ULL;
unsigned int var_23 = 3208414153U;
unsigned long long int var_24 = 12249960594876391639ULL;
unsigned long long int var_25 = 3084367654334543276ULL;
unsigned int var_26 = 1099080002U;
unsigned long long int var_27 = 9811141549307305056ULL;
int var_28 = 1741183444;
int var_29 = -745004779;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != -421233135LL;
    value_mismatch |= var_21 != 107;
    value_mismatch |= var_22 != 1ULL;
    value_mismatch |= var_23 != 3873734161U;
    value_mismatch |= var_24 != 38ULL;
    value_mismatch |= var_25 != 1ULL;
    value_mismatch |= var_26 != 0U;
    value_mismatch |= var_27 != 2744405959ULL;
    value_mismatch |= var_28 != -1676455293;
    value_mismatch |= var_29 != 923368827;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_6, var_7, var_9, var_11, var_12, var_13, var_15, var_16, var_18, var_19, zero, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25, &var_26, &var_27, &var_28, &var_29);
  checksum();
  assert(!value_mismatch);
}
