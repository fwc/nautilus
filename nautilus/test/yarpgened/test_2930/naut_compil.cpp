/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2930
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2930
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
void test(val<bool> var_0, val<bool> var_1, val<bool> var_2, val<long long int> var_5, val<bool> var_6, val<long long int> var_8, val<long long int> var_10, val<bool> var_11, val<bool> var_12, val<bool> var_13, val<unsigned char> var_14, val<bool> var_15, val<long long int> var_16, val<int> zero, val<long long int*> var_17, val<bool*> var_18, val<long long int*> var_19, val<long long int*> var_20, val<bool*> var_21, val<unsigned char*> var_22, val<bool*> var_23, val<bool*> var_24, val<unsigned char*> var_25, val<long long int*> var_26, val<long long int*> var_27, val<bool*> var_28) {
    *var_17 *= ((/* implicit */val<long long int>) var_1);
    if (((/* implicit */val<bool>) var_5))
    {
        *var_18 = ((/* implicit */val<bool>) (+(max((max(((-9223372036854775807LL - 1LL)), (0LL))), (((/* implicit */val<long long int>) var_13))))));
        *var_19 = ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned char>)255)) ? (((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_0)) ^ (((/* implicit */val<int>) (val<bool>)1))))) : (((((/* implicit */val<bool>) var_14)) ? (-9223372036854775783LL) : (9223372036854775807LL)))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<long long int>) (((val<bool>)1) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<bool>)1))))) <= (min((var_16), (268435455LL))))))) : (min((((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_11)) <= (((/* implicit */val<int>) var_2))))), (((((/* implicit */val<bool>) var_16)) ? (var_8) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_0))))))));
        if ((((val<bool>)1) && (((/* implicit */val<bool>) min((((/* implicit */val<long long int>) var_0)), (((0LL) * (1152903912420802560LL))))))))
        {
            *var_20 = ((var_15) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) (~(-1LL)))))))) : (min((-1152903912420802560LL), (((/* implicit */val<long long int>) var_1)))));
            *var_21 = (val<bool>)1;
            *var_22 = ((/* implicit */val<unsigned char>) min((*var_22), (((/* implicit */val<unsigned char>) (~(var_5))))));
            *var_23 -= ((/* implicit */val<bool>) (~((-(((/* implicit */val<int>) var_12))))));
        }

        *var_24 *= ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<bool>)1)) & (((/* implicit */val<int>) (val<bool>)1))))) ? (((/* implicit */val<int>) (val<unsigned char>)255)) : (((/* implicit */val<int>) (val<bool>)0))));
        *var_25 = ((/* implicit */val<unsigned char>) max((max(((((val<bool>)1) ? (((/* implicit */val<int>) var_14)) : (((/* implicit */val<int>) var_6)))), (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_8))))))), (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) -1LL)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1))) : (9223372036854775807LL)))) ? (((((/* implicit */val<bool>) -17179869184LL)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<bool>)0)))) : (((/* implicit */val<int>) var_15))))));
    }

    *var_26 = min(((-(max((9223372036854775792LL), (2LL))))), (((/* implicit */val<long long int>) (~(((/* implicit */val<int>) ((var_10) < (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_13))))))))));
    *var_27 = ((((/* implicit */val<bool>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1))) % (9223372036854775807LL)))) ? (((/* implicit */val<long long int>) (+(((/* implicit */val<int>) var_2))))) : (((((/* implicit */val<bool>) var_5)) ? (min((((/* implicit */val<long long int>) var_11)), (9223372036854775807LL))) : (max((var_5), (-9223372036854775798LL))))));
    *var_28 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((min((9223372036854775801LL), (((/* implicit */val<long long int>) (val<unsigned char>)0)))), (((/* implicit */val<long long int>) (~(((/* implicit */val<int>) (val<bool>)1)))))))) ? (((/* implicit */val<int>) var_6)) : (((((/* implicit */val<bool>) 9223372036854775800LL)) ? (((/* implicit */val<int>) max(((val<bool>)0), ((val<bool>)1)))) : (((/* implicit */val<int>) (val<unsigned char>)112))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
bool var_1 = (bool)1;
bool var_2 = (bool)0;
long long int var_5 = 1743416546585109787LL;
bool var_6 = (bool)0;
long long int var_8 = 1310011089138724793LL;
long long int var_10 = 2638960988757219561LL;
bool var_11 = (bool)0;
bool var_12 = (bool)0;
bool var_13 = (bool)0;
unsigned char var_14 = (unsigned char)161;
bool var_15 = (bool)0;
long long int var_16 = -8410253479272995756LL;
int zero = 0;
long long int var_17 = -1279375991453164013LL;
bool var_18 = (bool)0;
long long int var_19 = 3660912363606403119LL;
long long int var_20 = -6742692028818566001LL;
bool var_21 = (bool)0;
unsigned char var_22 = (unsigned char)11;
bool var_23 = (bool)0;
bool var_24 = (bool)0;
unsigned char var_25 = (unsigned char)212;
long long int var_26 = 2262815162057559917LL;
long long int var_27 = 4681366558444705513LL;
bool var_28 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != -1279375991453164013LL;
    value_mismatch |= var_18 != (bool)0;
    value_mismatch |= var_19 != 1LL;
    value_mismatch |= var_20 != -6742692028818566001LL;
    value_mismatch |= var_21 != (bool)0;
    value_mismatch |= var_22 != (unsigned char)11;
    value_mismatch |= var_23 != (bool)0;
    value_mismatch |= var_24 != (bool)0;
    value_mismatch |= var_25 != (unsigned char)161;
    value_mismatch |= var_26 != -9223372036854775792LL;
    value_mismatch |= var_27 != 0LL;
    value_mismatch |= var_28 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_5, var_6, var_8, var_10, var_11, var_12, var_13, var_14, var_15, var_16, zero, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25, &var_26, &var_27, &var_28);
  checksum();
  assert(!value_mismatch);
}
