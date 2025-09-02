/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6282
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6282
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
void test(val<short> var_0, val<signed char> var_2, val<short> var_4, val<bool> var_5, val<bool> var_6, val<signed char> var_7, val<unsigned int> var_8, val<int> var_9, val<unsigned short> var_10, val<int> zero, val<unsigned long long int*> var_11, val<short*> var_12, val<signed char*> var_13, val<unsigned long long int*> var_14, val<bool*> var_15, val<unsigned char*> var_16, val<signed char*> var_17, val<signed char*> var_18, val<unsigned int*> var_19, val<bool*> var_20, val<unsigned int*> var_21) {
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) 6476534487135288370LL)) ? (((val<long long int>) 2808049333U)) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7))))))
    {
        *var_11 *= ((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<bool>) max((var_0), (((/* implicit */val<short>) var_5))))) ? (((/* implicit */val<long long int>) (~(2943680813U)))) : ((~(288230376150663168LL))))) << (((((/* implicit */val<int>) (val<signed char>)-116)) + (122)))));
        *var_12 = ((/* implicit */val<short>) var_9);
    }
    else
    {
        *var_13 *= ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((var_6) ? (((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) (val<unsigned char>)255)) : (((/* implicit */val<int>) var_6)))) : (((/* implicit */val<int>) var_4))))) ? (((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<unsigned char>)18)) && (((/* implicit */val<bool>) (val<signed char>)120)))))) > (((((/* implicit */val<bool>) (val<unsigned short>)63563)) ? (-6476534487135288371LL) : (((/* implicit */val<long long int>) var_8))))))) : (((/* implicit */val<int>) var_2))));
        *var_14 = ((/* implicit */val<unsigned long long int>) var_8);
        *var_15 = ((/* implicit */val<bool>) (val<short>)-17134);
        *var_16 &= ((/* implicit */val<unsigned char>) ((-7946412048546206503LL) >= (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) var_2)) > (((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)9))) != (-6476534487135288371LL))))))))));
    }

    if (((/* implicit */val<bool>) (-(1051591842U))))
    {
        *var_17 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_8)) ? (min((((3455467771U) & (2808049349U))), (((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) var_5))))))) : (((/* implicit */val<unsigned int>) min(((-(((/* implicit */val<int>) var_7)))), (((/* implicit */val<int>) var_2)))))));
        *var_18 = ((/* implicit */val<signed char>) max((*var_18), (((/* implicit */val<signed char>) (((+(min((((/* implicit */val<int>) (val<bool>)1)), (2047))))) == (((/* implicit */val<int>) max((var_0), (((/* implicit */val<short>) var_7))))))))));
        *var_19 |= ((/* implicit */val<unsigned int>) var_6);
        *var_20 = ((/* implicit */val<bool>) var_10);
        *var_21 -= (~((+(var_8))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2943;
signed char var_2 = (signed char)-106;
short var_4 = (short)12084;
bool var_5 = (bool)1;
bool var_6 = (bool)0;
signed char var_7 = (signed char)-5;
unsigned int var_8 = 4018589945U;
int var_9 = -1161256217;
unsigned short var_10 = (unsigned short)1729;
int zero = 0;
unsigned long long int var_11 = 14427400849857138351ULL;
short var_12 = (short)13032;
signed char var_13 = (signed char)-28;
unsigned long long int var_14 = 4619276873999748705ULL;
bool var_15 = (bool)0;
unsigned char var_16 = (unsigned char)228;
signed char var_17 = (signed char)4;
signed char var_18 = (signed char)68;
unsigned int var_19 = 508824350U;
bool var_20 = (bool)0;
unsigned int var_21 = 1655889883U;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 15842813779362145152ULL;
    value_mismatch |= var_12 != (short)-23833;
    value_mismatch |= var_13 != (signed char)-28;
    value_mismatch |= var_14 != 4619276873999748705ULL;
    value_mismatch |= var_15 != (bool)0;
    value_mismatch |= var_16 != (unsigned char)228;
    value_mismatch |= var_17 != (signed char)-63;
    value_mismatch |= var_18 != (signed char)68;
    value_mismatch |= var_19 != 508824350U;
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != 1379512533U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_5, var_6, var_7, var_8, var_9, var_10, zero, &var_11, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
