/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6725
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6725
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
void test(val<signed char> var_0, val<int> var_1, val<unsigned short> var_2, val<bool> var_4, val<int> var_5, val<unsigned int> var_6, val<unsigned long long int> var_7, val<unsigned char> var_8, val<signed char> var_9, val<short> var_10, val<unsigned long long int> var_11, val<short> var_12, val<unsigned int> var_13, val<bool> var_14, val<bool> var_15, val<int> zero, val<signed char*> var_16, val<int*> var_17, val<unsigned short*> var_18, val<unsigned long long int*> var_19, val<unsigned short*> var_20, val<signed char*> var_21, val<unsigned short*> var_22, val<short*> var_23, val<signed char*> var_24, val<bool*> var_25, val<long long int*> var_26, val<signed char*> var_27, val<short*> var_28) {
    if ((!(var_15)))
    {
        *var_16 = ((/* implicit */val<signed char>) (~(((/* implicit */val<int>) var_15))));
        *var_17 = ((/* implicit */val<int>) var_8);
        if (((/* implicit */val<bool>) var_6))
        {
            *var_18 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_2)) ? (var_13) : (((/* implicit */val<unsigned int>) ((var_1) - (((/* implicit */val<int>) var_8)))))))) ? (((/* implicit */val<int>) ((val<bool>) ((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) var_4)))))) : (((/* implicit */val<int>) var_12))));
            *var_19 = ((/* implicit */val<unsigned long long int>) (((val<bool>)1) ? (((/* implicit */val<int>) max((((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_6)) && ((val<bool>)1)))), ((val<signed char>)114)))) : (((/* implicit */val<int>) (val<bool>)1))));
            *var_20 = ((/* implicit */val<unsigned short>) var_0);
            *var_21 = ((/* implicit */val<signed char>) max((*var_21), (((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_6)) && (((/* implicit */val<bool>) (((~(var_1))) % (((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) var_9))))))))))));
            *var_22 = ((/* implicit */val<unsigned short>) var_11);
        }

    }
    else
    {
        *var_23 = ((/* implicit */val<short>) min(((((-(var_5))) * ((+(((/* implicit */val<int>) var_4)))))), (((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) var_14))))));
        *var_24 = ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_1)) ? (var_6) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_2)) && (((/* implicit */val<bool>) var_0)))))))))));
        *var_25 = (((val<bool>)1) || ((val<bool>)1));
    }

    *var_26 &= ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_1)) ? (var_7) : (((/* implicit */val<unsigned long long int>) var_13))));
    *var_27 = ((/* implicit */val<signed char>) ((val<unsigned short>) var_9));
    *var_28 = ((/* implicit */val<short>) (!(((/* implicit */val<bool>) (val<signed char>)-97))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-41;
int var_1 = 2103137635;
unsigned short var_2 = (unsigned short)32402;
bool var_4 = (bool)0;
int var_5 = -1910948144;
unsigned int var_6 = 1648389480U;
unsigned long long int var_7 = 7310315745172939229ULL;
unsigned char var_8 = (unsigned char)13;
signed char var_9 = (signed char)-10;
short var_10 = (short)-11245;
unsigned long long int var_11 = 2846404584384258794ULL;
short var_12 = (short)8899;
unsigned int var_13 = 3900732003U;
bool var_14 = (bool)0;
bool var_15 = (bool)1;
int zero = 0;
signed char var_16 = (signed char)-32;
int var_17 = -62342876;
unsigned short var_18 = (unsigned short)36017;
unsigned long long int var_19 = 7344973504072461452ULL;
unsigned short var_20 = (unsigned short)3061;
signed char var_21 = (signed char)85;
unsigned short var_22 = (unsigned short)47000;
short var_23 = (short)2955;
signed char var_24 = (signed char)-71;
bool var_25 = (bool)1;
long long int var_26 = 5923383039657136758LL;
signed char var_27 = (signed char)72;
short var_28 = (short)7490;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (signed char)-32;
    value_mismatch |= var_17 != -62342876;
    value_mismatch |= var_18 != (unsigned short)36017;
    value_mismatch |= var_19 != 7344973504072461452ULL;
    value_mismatch |= var_20 != (unsigned short)3061;
    value_mismatch |= var_21 != (signed char)85;
    value_mismatch |= var_22 != (unsigned short)47000;
    value_mismatch |= var_23 != (short)-41;
    value_mismatch |= var_24 != (signed char)0;
    value_mismatch |= var_25 != (bool)1;
    value_mismatch |= var_26 != 4625220388128964692LL;
    value_mismatch |= var_27 != (signed char)-10;
    value_mismatch |= var_28 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, var_15, zero, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25, &var_26, &var_27, &var_28);
  checksum();
  assert(!value_mismatch);
}
