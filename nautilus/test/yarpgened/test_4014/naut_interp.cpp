/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4014
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4014
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
void test(val<bool> var_0, val<unsigned int> var_1, val<unsigned long long int> var_2, val<signed char> var_3, val<unsigned long long int> var_4, val<int> var_5, val<signed char> var_6, val<unsigned int> var_7, val<signed char> var_8, val<signed char> var_9, val<int> var_10, val<signed char> var_11, val<long long int> var_12, val<short> var_13, val<bool> var_14, val<signed char> var_16, val<int> zero, val<signed char*> var_17, val<unsigned short*> var_18, val<unsigned short*> var_19, val<long long int*> var_20, val<short*> var_21, val<unsigned int*> var_22, val<long long int*> var_23, val<bool*> var_24, val<unsigned long long int*> var_25) {
    if (((/* implicit */val<bool>) var_12))
    {
        if (((/* implicit */val<bool>) (val<signed char>)-11))
        {
            *var_17 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((val<signed char>) var_14))) ? (min((((((/* implicit */val<bool>) (val<signed char>)22)) ? (((/* implicit */val<long long int>) var_5)) : (3654201030510328071LL))), (((/* implicit */val<long long int>) ((((/* implicit */val<int>) (val<signed char>)-22)) != (((/* implicit */val<int>) (val<unsigned short>)27757))))))) : ((+(((3654201030510328071LL) | (var_12)))))));
            *var_18 = ((/* implicit */val<unsigned short>) var_3);
            *var_19 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) max((var_3), (var_11)))) : (var_10)));
            *var_20 = ((/* implicit */val<long long int>) var_6);
        }

        *var_21 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) min((((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)21))) % (var_12))), (((/* implicit */val<long long int>) max((var_8), ((val<signed char>)10))))))) ? (max((((/* implicit */val<long long int>) min((((/* implicit */val<unsigned int>) var_0)), (var_7)))), (((((/* implicit */val<bool>) -3654201030510328071LL)) ? (var_12) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3))))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_2))))))));
        *var_22 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((var_4), (((/* implicit */val<unsigned long long int>) (val<unsigned short>)28))))) ? (var_12) : (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_16))) : (var_1))))))) ? ((~(3654201030510328071LL))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9)))));
        *var_23 = ((/* implicit */val<long long int>) max((((val<bool>) max((var_6), ((val<signed char>)71)))), (var_14)));
        *var_24 = ((/* implicit */val<bool>) var_9);
    }

    *var_25 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 10969163280665274326ULL)) ? (((((/* implicit */val<bool>) min((var_13), (((/* implicit */val<short>) var_8))))) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) max((var_6), (var_16)))))) : (((/* implicit */val<int>) var_8))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
unsigned int var_1 = 1964644759U;
unsigned long long int var_2 = 12806619321434518854ULL;
signed char var_3 = (signed char)-42;
unsigned long long int var_4 = 10346691124370012399ULL;
int var_5 = 1643191911;
signed char var_6 = (signed char)-108;
unsigned int var_7 = 3199083710U;
signed char var_8 = (signed char)-2;
signed char var_9 = (signed char)73;
int var_10 = -769796324;
signed char var_11 = (signed char)-85;
long long int var_12 = -490317884721635031LL;
short var_13 = (short)10930;
bool var_14 = (bool)0;
signed char var_16 = (signed char)-8;
int zero = 0;
signed char var_17 = (signed char)59;
unsigned short var_18 = (unsigned short)50508;
unsigned short var_19 = (unsigned short)20233;
long long int var_20 = -4576857428812926550LL;
short var_21 = (short)-28605;
unsigned int var_22 = 1923310711U;
long long int var_23 = 7340031321479301872LL;
bool var_24 = (bool)1;
unsigned long long int var_25 = 10064605708222235955ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (signed char)47;
    value_mismatch |= var_18 != (unsigned short)65494;
    value_mismatch |= var_19 != (unsigned short)65494;
    value_mismatch |= var_20 != -108LL;
    value_mismatch |= var_21 != (short)1;
    value_mismatch |= var_22 != 110151416U;
    value_mismatch |= var_23 != 1LL;
    value_mismatch |= var_24 != (bool)1;
    value_mismatch |= var_25 != 1ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, var_16, zero, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25);
  checksum();
  assert(!value_mismatch);
}
