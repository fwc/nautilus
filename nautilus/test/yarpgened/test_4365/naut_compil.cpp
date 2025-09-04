/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4365
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4365
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
void test(val<bool> var_0, val<bool> var_1, val<signed char> var_2, val<unsigned short> var_3, val<unsigned long long int> var_4, val<unsigned char> var_5, val<unsigned int> var_6, val<int> var_8, val<int> var_9, val<unsigned short> var_10, val<unsigned long long int> var_11, val<unsigned short> var_12, val<unsigned int> var_13, val<unsigned long long int> var_14, val<int> zero, val<unsigned long long int*> var_15, val<unsigned long long int*> var_16, val<unsigned int*> var_17, val<signed char*> var_18, val<unsigned char*> var_19, val<short*> var_20, val<unsigned short*> var_21, val<long long int*> var_22, val<unsigned int*> var_23, val<unsigned short*> var_24, val<unsigned short*> var_25) {
    if (((/* implicit */val<bool>) min(((+(((((/* implicit */val<int>) (val<unsigned char>)127)) - (((/* implicit */val<int>) var_12)))))), (((/* implicit */val<int>) var_0)))))
    {
        *var_15 = var_11;
        *var_16 = ((/* implicit */val<unsigned long long int>) ((val<bool>) ((((/* implicit */val<bool>) 18446744073709551615ULL)) && (((/* implicit */val<bool>) ((((/* implicit */val<int>) var_10)) << (((3057914389847563533ULL) - (3057914389847563532ULL)))))))));
        if (((/* implicit */val<bool>) min((((((/* implicit */val<bool>) var_9)) ? (min((((/* implicit */val<unsigned long long int>) 31U)), (var_11))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_8)) ? (4294967250U) : (var_13)))))), (((/* implicit */val<unsigned long long int>) (val<unsigned short>)14207)))))
        {
            *var_17 = ((/* implicit */val<unsigned int>) ((val<unsigned short>) ((val<unsigned short>) 2575665365949858088ULL)));
            *var_18 = ((/* implicit */val<signed char>) var_1);
            *var_19 = ((/* implicit */val<unsigned char>) min((var_14), (((/* implicit */val<unsigned long long int>) min((var_6), (((/* implicit */val<unsigned int>) var_5)))))));
            *var_20 = ((/* implicit */val<short>) 5261693863435841886ULL);
        }

    }

    if (((/* implicit */val<bool>) var_12))
    {
        *var_21 = ((/* implicit */val<unsigned short>) max((*var_21), (var_3)));
        if (((/* implicit */val<bool>) max((min((21ULL), (((/* implicit */val<unsigned long long int>) var_9)))), ((~(((7032146133227041087ULL) * (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2))))))))))
        {
            *var_22 = ((/* implicit */val<long long int>) var_0);
            *var_23 = ((/* implicit */val<unsigned int>) (+(((val<unsigned long long int>) ((val<int>) var_13)))));
            *var_24 = ((/* implicit */val<unsigned short>) var_4);
        }

    }

    *var_25 = ((/* implicit */val<unsigned short>) -2291689770140024232LL);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
bool var_1 = (bool)1;
signed char var_2 = (signed char)88;
unsigned short var_3 = (unsigned short)8302;
unsigned long long int var_4 = 13977425773443666012ULL;
unsigned char var_5 = (unsigned char)187;
unsigned int var_6 = 256346017U;
int var_8 = 295490538;
int var_9 = -1803861988;
unsigned short var_10 = (unsigned short)24340;
unsigned long long int var_11 = 13880649797843907867ULL;
unsigned short var_12 = (unsigned short)16872;
unsigned int var_13 = 2966373951U;
unsigned long long int var_14 = 15587562622699338445ULL;
int zero = 0;
unsigned long long int var_15 = 18256062788024389916ULL;
unsigned long long int var_16 = 14496909690794488365ULL;
unsigned int var_17 = 1484300606U;
signed char var_18 = (signed char)30;
unsigned char var_19 = (unsigned char)152;
short var_20 = (short)25981;
unsigned short var_21 = (unsigned short)37906;
long long int var_22 = -6875548549211009983LL;
unsigned int var_23 = 1613698615U;
unsigned short var_24 = (unsigned short)64131;
unsigned short var_25 = (unsigned short)29962;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 13880649797843907867ULL;
    value_mismatch |= var_16 != 1ULL;
    value_mismatch |= var_17 != 49448U;
    value_mismatch |= var_18 != (signed char)1;
    value_mismatch |= var_19 != (unsigned char)187;
    value_mismatch |= var_20 != (short)12638;
    value_mismatch |= var_21 != (unsigned short)37906;
    value_mismatch |= var_22 != 1LL;
    value_mismatch |= var_23 != 2966373951U;
    value_mismatch |= var_24 != (unsigned short)53340;
    value_mismatch |= var_25 != (unsigned short)16984;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_8, var_9, var_10, var_11, var_12, var_13, var_14, zero, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25);
  checksum();
  assert(!value_mismatch);
}
