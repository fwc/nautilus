/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2876
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2876
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
void test(val<signed char> var_0, val<signed char> var_2, val<unsigned char> var_3, val<short> var_6, val<unsigned long long int> var_7, val<unsigned int> var_8, val<unsigned int> var_9, val<short> var_10, val<signed char> var_11, val<signed char> var_12, val<long long int> var_13, val<unsigned int> var_15, val<signed char> var_16, val<int> zero, val<unsigned int*> var_17, val<long long int*> var_18, val<unsigned int*> var_19, val<int*> var_20, val<unsigned int*> var_21, val<unsigned int*> var_22, val<long long int*> var_23, val<bool*> var_24, val<long long int*> var_25, val<signed char*> var_26, val<short*> var_27, val<unsigned short*> var_28, val<short*> var_29, val<signed char*> var_30, val<unsigned long long int*> var_31, val<short*> var_32, val<signed char*> var_33, val<long long int*> var_34, val<long long int*> var_35) {
    if (((/* implicit */val<bool>) var_7))
    {
        *var_17 = var_9;
        *var_18 = ((/* implicit */val<long long int>) var_10);
        *var_19 = ((/* implicit */val<unsigned int>) (val<unsigned char>)0);
    }

    if (((/* implicit */val<bool>) var_2))
    {
        *var_20 = ((/* implicit */val<int>) (val<signed char>)56);
        if (((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_3)))))
        {
            *var_21 = ((/* implicit */val<unsigned int>) min((*var_21), ((+(55298433U)))));
            *var_22 += (+(var_15));
            if (((/* implicit */val<bool>) var_0))
            {
                *var_23 = ((/* implicit */val<long long int>) var_2);
                *var_24 -= ((/* implicit */val<bool>) var_11);
            }

            *var_25 = ((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_0)) != ((~(((((/* implicit */val<int>) var_12)) ^ (((/* implicit */val<int>) (val<signed char>)9))))))));
        }

    }

    *var_26 -= ((/* implicit */val<signed char>) 1289126178);
    if (((/* implicit */val<bool>) ((((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_16))) - (var_8))) << (((var_13) + (226175588510734038LL))))))
    {
        *var_27 = ((/* implicit */val<short>) (-(((/* implicit */val<int>) (val<unsigned short>)1508))));
        *var_28 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) var_6)) >> (((/* implicit */val<int>) ((((/* implicit */val<bool>) 242238817U)) || ((!(((/* implicit */val<bool>) var_2)))))))));
        *var_29 -= ((/* implicit */val<short>) (!(((/* implicit */val<bool>) (val<signed char>)-118))));
        *var_30 *= ((/* implicit */val<signed char>) var_9);
        *var_31 = ((/* implicit */val<unsigned long long int>) max((*var_31), (((/* implicit */val<unsigned long long int>) (val<signed char>)-88))));
    }
    else
    {
        *var_32 = ((/* implicit */val<short>) max((*var_32), (((/* implicit */val<short>) ((((/* implicit */val<int>) (val<unsigned char>)157)) >= (((/* implicit */val<int>) (val<unsigned char>)146)))))));
        *var_33 = ((/* implicit */val<signed char>) var_9);
        *var_34 = ((/* implicit */val<long long int>) var_3);
        *var_35 = var_13;
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-53;
signed char var_2 = (signed char)-16;
unsigned char var_3 = (unsigned char)45;
short var_6 = (short)29572;
unsigned long long int var_7 = 763700253124513438ULL;
unsigned int var_8 = 3421009435U;
unsigned int var_9 = 2398090967U;
short var_10 = (short)30217;
signed char var_11 = (signed char)-106;
signed char var_12 = (signed char)20;
long long int var_13 = -226175588510734038LL;
unsigned int var_15 = 2255385766U;
signed char var_16 = (signed char)-68;
int zero = 0;
unsigned int var_17 = 1144501922U;
long long int var_18 = 8177746580001439679LL;
unsigned int var_19 = 1703648628U;
int var_20 = 531939472;
unsigned int var_21 = 1119298696U;
unsigned int var_22 = 732314950U;
long long int var_23 = 2078427451439791054LL;
bool var_24 = (bool)0;
long long int var_25 = 3060239218817898340LL;
signed char var_26 = (signed char)85;
short var_27 = (short)17323;
unsigned short var_28 = (unsigned short)49488;
short var_29 = (short)24564;
signed char var_30 = (signed char)49;
unsigned long long int var_31 = 5356654554667152362ULL;
short var_32 = (short)-4652;
signed char var_33 = (signed char)-42;
long long int var_34 = -5781793113270893283LL;
long long int var_35 = 3301778001684133568LL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 2398090967U;
    value_mismatch |= var_18 != 30217LL;
    value_mismatch |= var_19 != 0U;
    value_mismatch |= var_20 != 56;
    value_mismatch |= var_21 != 55298433U;
    value_mismatch |= var_22 != 2987700716U;
    value_mismatch |= var_23 != -16LL;
    value_mismatch |= var_24 != (bool)1;
    value_mismatch |= var_25 != 1LL;
    value_mismatch |= var_26 != (signed char)51;
    value_mismatch |= var_27 != (short)-1508;
    value_mismatch |= var_28 != (unsigned short)14786;
    value_mismatch |= var_29 != (short)24564;
    value_mismatch |= var_30 != (signed char)39;
    value_mismatch |= var_31 != 18446744073709551528ULL;
    value_mismatch |= var_32 != (short)-4652;
    value_mismatch |= var_33 != (signed char)-42;
    value_mismatch |= var_34 != -5781793113270893283LL;
    value_mismatch |= var_35 != 3301778001684133568LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_15, var_16, zero, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25, &var_26, &var_27, &var_28, &var_29, &var_30, &var_31, &var_32, &var_33, &var_34, &var_35);
  checksum();
  assert(!value_mismatch);
}
