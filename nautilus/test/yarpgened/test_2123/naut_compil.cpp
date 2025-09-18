/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2123
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2123
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
void test(val<unsigned int> var_0, val<bool> var_1, val<unsigned int> var_2, val<unsigned char> var_3, val<bool> var_4, val<bool> var_5, val<long long int> var_6, val<int> var_7, val<bool> var_8, val<unsigned long long int> var_9, val<long long int> var_10, val<bool> var_11, val<unsigned short> var_12, val<int> zero, val<unsigned long long int*> var_13, val<unsigned short*> var_14, val<int*> var_15, val<unsigned char*> var_16, val<unsigned int*> var_17, val<short*> var_18, val<int*> var_19, val<long long int*> var_20) {
    *var_13 = ((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)36121)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_11))))) ? (((/* implicit */val<unsigned long long int>) var_2)) : (var_9))) - (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<signed char>) min((((/* implicit */val<unsigned short>) var_11)), ((val<unsigned short>)511)))))));
    if ((((((((val<bool>)0) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)35))) : (21ULL))) * (((/* implicit */val<unsigned long long int>) var_2)))) < (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4)))))
    {
        if (((/* implicit */val<bool>) max((((val<long long int>) ((((/* implicit */val<int>) var_3)) | (((/* implicit */val<int>) var_8))))), (((/* implicit */val<long long int>) ((val<unsigned int>) (val<bool>)0))))))
        {
            *var_14 &= ((/* implicit */val<unsigned short>) var_4);
            if (var_1)
            {
                *var_15 = ((/* implicit */val<int>) max((((/* implicit */val<unsigned long long int>) var_4)), (((((/* implicit */val<bool>) max((var_0), (((/* implicit */val<unsigned int>) (val<unsigned char>)12))))) ? (0ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_8)))))));
                *var_16 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 0LL)) ? (var_7) : (var_7)))) ? (min((((/* implicit */val<long long int>) var_11)), (var_6))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3)))))) && (((/* implicit */val<bool>) ((((var_10) < (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11))))) ? (((/* implicit */val<unsigned long long int>) var_0)) : (max((((/* implicit */val<unsigned long long int>) var_4)), (var_9))))))));
                *var_17 = ((/* implicit */val<unsigned int>) var_7);
            }
            else
            {
                *var_18 = ((/* implicit */val<short>) var_6);
                *var_19 = ((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_5)) + (((/* implicit */val<int>) (val<unsigned char>)243))))) ? (((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<long long int>) var_7)) : (var_10))) : (((/* implicit */val<long long int>) (-(var_0)))))))));
            }

        }

        *var_20 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_10)) ? (var_0) : (((/* implicit */val<unsigned int>) var_7))))) ? (((/* implicit */val<unsigned int>) var_7)) : (((var_2) - (((/* implicit */val<unsigned int>) var_7))))))) ? (((/* implicit */val<int>) ((val<unsigned char>) max((var_10), (((/* implicit */val<long long int>) var_4)))))) : (((/* implicit */val<int>) (val<bool>)1))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3801333305U;
bool var_1 = (bool)1;
unsigned int var_2 = 780891555U;
unsigned char var_3 = (unsigned char)197;
bool var_4 = (bool)1;
bool var_5 = (bool)0;
long long int var_6 = 575493380805556083LL;
int var_7 = -1950341938;
bool var_8 = (bool)0;
unsigned long long int var_9 = 16504186246399110961ULL;
long long int var_10 = 4336427106417140768LL;
bool var_11 = (bool)1;
unsigned short var_12 = (unsigned short)51946;
int zero = 0;
unsigned long long int var_13 = 9748137466852245473ULL;
unsigned short var_14 = (unsigned short)13125;
int var_15 = 324752222;
unsigned char var_16 = (unsigned char)164;
unsigned int var_17 = 1978144958U;
short var_18 = (short)-741;
int var_19 = 1320921731;
long long int var_20 = 779878183777084944LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 780891554ULL;
    value_mismatch |= var_14 != (unsigned short)13125;
    value_mismatch |= var_15 != 324752222;
    value_mismatch |= var_16 != (unsigned char)164;
    value_mismatch |= var_17 != 1978144958U;
    value_mismatch |= var_18 != (short)-741;
    value_mismatch |= var_19 != 1320921731;
    value_mismatch |= var_20 != 779878183777084944LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, zero, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20);
  checksum();
}
