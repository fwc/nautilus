/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8447
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8447
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
void test(val<short> var_0, val<signed char> var_1, val<unsigned short> var_2, val<unsigned short> var_4, val<int> var_5, val<unsigned long long int> var_6, val<long long int> var_7, val<long long int> var_8, val<short> var_9, val<int> zero, val<signed char*> var_10, val<signed char*> var_11, val<int*> var_12, val<unsigned short*> var_13, val<signed char*> var_14, val<bool*> var_15, val<signed char*> var_16, val<signed char*> var_17, val<int*> var_18, val<int*> var_19, val<int*> var_20, val<unsigned long long int*> var_21) {
    *var_10 = ((/* implicit */val<signed char>) ((((((/* implicit */val<unsigned long long int>) 4294967272U)) != (12332221699685697555ULL))) ? (max((((/* implicit */val<int>) (!(((/* implicit */val<bool>) -5917010271863795744LL))))), (((1106154768) >> (((4294967289U) - (4294967287U))))))) : (var_5)));
    if (((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) ((val<int>) ((((/* implicit */val<int>) (val<unsigned short>)0)) & (((/* implicit */val<int>) (val<bool>)1)))))), (((val<unsigned long long int>) ((((/* implicit */val<int>) var_1)) > (((/* implicit */val<int>) (val<unsigned short>)51129))))))))
    {
        if (((/* implicit */val<bool>) (+(var_8))))
        {
            *var_11 ^= ((/* implicit */val<signed char>) ((val<unsigned short>) ((val<signed char>) ((var_8) / (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9)))))));
            *var_12 = ((/* implicit */val<int>) min((*var_12), (((/* implicit */val<int>) (((!((val<bool>)1))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) min((((/* implicit */val<short>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)-113))) != (4935818913450821610LL)))), (max((var_9), (((/* implicit */val<short>) (val<bool>)1)))))))) : (var_6))))));
            if ((!(((val<bool>) (-(((/* implicit */val<int>) (val<short>)7)))))))
            {
                *var_13 = ((/* implicit */val<unsigned short>) ((val<int>) (~(max((var_8), (-6114896198613764486LL))))));
                *var_14 = ((/* implicit */val<signed char>) var_2);
                *var_15 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) max((((/* implicit */val<int>) min(((val<unsigned char>)11), (((/* implicit */val<unsigned char>) (val<bool>)1))))), (134217728)))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9))) : (((((var_6) % (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)108))))) >> (((max((var_7), (((/* implicit */val<long long int>) (val<signed char>)-84)))) + (95LL)))))));
                *var_16 = ((/* implicit */val<signed char>) 127);
                *var_17 = ((/* implicit */val<signed char>) min((*var_17), (((/* implicit */val<signed char>) var_0))));
            }

            *var_18 = (+(((/* implicit */val<int>) (val<bool>)1)));
        }
        else
        {
            *var_19 = ((((/* implicit */val<bool>) 1410114393U)) ? (((/* implicit */val<int>) (!((!(((/* implicit */val<bool>) 1503020519))))))) : (((/* implicit */val<int>) ((((/* implicit */val<int>) ((var_5) != (((/* implicit */val<int>) var_1))))) == (1692369834)))));
            *var_20 = ((/* implicit */val<int>) var_8);
        }

        *var_21 = ((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) ((min((((/* implicit */val<unsigned long long int>) (val<bool>)1)), (1088855892128896354ULL))) != (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) max((var_4), (((/* implicit */val<unsigned short>) (val<bool>)1)))))))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14527;
signed char var_1 = (signed char)-125;
unsigned short var_2 = (unsigned short)28798;
unsigned short var_4 = (unsigned short)12715;
int var_5 = 535933194;
unsigned long long int var_6 = 9815193328998629700ULL;
long long int var_7 = -9155492549956146867LL;
long long int var_8 = 3251466720440798204LL;
short var_9 = (short)6631;
int zero = 0;
signed char var_10 = (signed char)101;
signed char var_11 = (signed char)-29;
int var_12 = -854823504;
unsigned short var_13 = (unsigned short)30967;
signed char var_14 = (signed char)-92;
bool var_15 = (bool)0;
signed char var_16 = (signed char)-110;
signed char var_17 = (signed char)46;
int var_18 = 1376726025;
int var_19 = 881660717;
int var_20 = -1731056425;
unsigned long long int var_21 = 17399785705583926868ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (signed char)68;
    value_mismatch |= var_11 != (signed char)-29;
    value_mismatch |= var_12 != -854823504;
    value_mismatch |= var_13 != (unsigned short)30967;
    value_mismatch |= var_14 != (signed char)-92;
    value_mismatch |= var_15 != (bool)0;
    value_mismatch |= var_16 != (signed char)-110;
    value_mismatch |= var_17 != (signed char)46;
    value_mismatch |= var_18 != 1376726025;
    value_mismatch |= var_19 != 881660717;
    value_mismatch |= var_20 != -1731056425;
    value_mismatch |= var_21 != 17399785705583926868ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_5, var_6, var_7, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
