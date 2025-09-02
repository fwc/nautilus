/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6405
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6405
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
void test(val<bool> var_0, val<unsigned short> var_2, val<unsigned short> var_3, val<long long int> var_4, val<unsigned short> var_5, val<bool> var_7, val<signed char> var_9, val<int> var_10, val<bool> var_11, val<bool> var_12, val<signed char> var_13, val<unsigned short> var_14, val<bool> var_16, val<bool> var_17, val<bool> var_18, val<unsigned short> var_19, val<int> zero, val<unsigned short*> var_20, val<unsigned short*> var_21, val<bool*> var_22, val<short*> var_23, val<bool*> var_24, val<bool*> var_25, val<bool*> var_26) {
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((val<short>) var_3))) ? (((var_12) ? (((/* implicit */val<int>) ((val<bool>) var_4))) : (((/* implicit */val<int>) ((val<unsigned short>) var_10))))) : (((/* implicit */val<int>) var_2)))))
    {
        if (var_18)
        {
            *var_20 = ((/* implicit */val<unsigned short>) min((max((((/* implicit */val<int>) var_5)), (((((/* implicit */val<bool>) (val<unsigned char>)34)) ? (((/* implicit */val<int>) (val<bool>)0)) : (((/* implicit */val<int>) (val<unsigned short>)3683)))))), (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_14)) : (((/* implicit */val<int>) var_9))))) ? (((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<int>) var_16)) : (((/* implicit */val<int>) var_16)))) : (((/* implicit */val<int>) var_7))))));
            *var_21 = ((/* implicit */val<unsigned short>) var_13);
            *var_22 = var_17;
        }
        else
        {
            *var_23 += ((/* implicit */val<short>) min((max((((val<unsigned short>) var_18)), (((/* implicit */val<unsigned short>) ((val<unsigned char>) var_12))))), (((/* implicit */val<unsigned short>) var_11))));
            *var_24 += ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((var_12) ? ((((val<bool>)1) ? (((/* implicit */val<int>) (val<short>)-32741)) : (((/* implicit */val<int>) var_19)))) : (((/* implicit */val<int>) var_18))))) ? (((val<long long int>) ((var_17) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) var_5))))) : (((/* implicit */val<long long int>) ((var_0) ? (((/* implicit */val<int>) var_19)) : (((/* implicit */val<int>) var_3)))))));
        }

        *var_25 = ((/* implicit */val<bool>) max((*var_25), (((/* implicit */val<bool>) ((val<signed char>) var_2)))));
    }

    *var_26 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((val<bool>) var_9)) ? (((/* implicit */val<int>) var_5)) : (var_10)))) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) ((val<short>) var_5)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
unsigned short var_2 = (unsigned short)28;
unsigned short var_3 = (unsigned short)937;
long long int var_4 = -7125130409216866076LL;
unsigned short var_5 = (unsigned short)34741;
bool var_7 = (bool)0;
signed char var_9 = (signed char)59;
int var_10 = 1187773902;
bool var_11 = (bool)1;
bool var_12 = (bool)1;
signed char var_13 = (signed char)122;
unsigned short var_14 = (unsigned short)41003;
bool var_16 = (bool)1;
bool var_17 = (bool)1;
bool var_18 = (bool)0;
unsigned short var_19 = (unsigned short)49623;
int zero = 0;
unsigned short var_20 = (unsigned short)49206;
unsigned short var_21 = (unsigned short)37884;
bool var_22 = (bool)0;
short var_23 = (short)-9215;
bool var_24 = (bool)1;
bool var_25 = (bool)0;
bool var_26 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned short)49206;
    value_mismatch |= var_21 != (unsigned short)37884;
    value_mismatch |= var_22 != (bool)0;
    value_mismatch |= var_23 != (short)-9214;
    value_mismatch |= var_24 != (bool)1;
    value_mismatch |= var_25 != (bool)1;
    value_mismatch |= var_26 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_7, var_9, var_10, var_11, var_12, var_13, var_14, var_16, var_17, var_18, var_19, zero, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25, &var_26);
  checksum();
  assert(!value_mismatch);
}
