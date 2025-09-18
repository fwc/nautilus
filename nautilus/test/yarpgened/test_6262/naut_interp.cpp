/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6262
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6262
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
void test(val<short> var_0, val<short> var_1, val<signed char> var_2, val<short> var_3, val<unsigned long long int> var_5, val<unsigned long long int> var_7, val<unsigned int> var_8, val<signed char> var_9, val<int> var_10, val<short> var_12, val<unsigned long long int> var_16, val<unsigned long long int> var_17, val<short> var_18, val<int> zero, val<int*> var_19, val<signed char*> var_20, val<short*> var_21, val<unsigned long long int*> var_22) {
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((max((((/* implicit */val<unsigned long long int>) var_1)), (var_7))) % (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_10)) || (((/* implicit */val<bool>) (val<signed char>)-16))))))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9))) : (max((4116055628205979262ULL), (max((var_5), (var_7))))))))
    {
        *var_19 = (~(((/* implicit */val<int>) (val<signed char>)2)));
        *var_20 = ((/* implicit */val<signed char>) min((*var_20), (((/* implicit */val<signed char>) 4294967264U))));
    }

    *var_21 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) min((var_16), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 201770397U)) ? (-1513628841) : (((/* implicit */val<int>) var_3)))))))) ? (var_7) : ((-(8556219100198698782ULL)))));
    *var_22 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) (((-(var_8))) == (((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) var_0)))))))) << (((((((/* implicit */val<bool>) var_18)) ? (max((((/* implicit */val<unsigned long long int>) var_2)), (var_5))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_12))) < (var_17))))))) - (18446744073709551508ULL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5119;
short var_1 = (short)-32615;
signed char var_2 = (signed char)-92;
short var_3 = (short)26893;
unsigned long long int var_5 = 282404869278599744ULL;
unsigned long long int var_7 = 7856648754063064222ULL;
unsigned int var_8 = 3761572308U;
signed char var_9 = (signed char)-20;
int var_10 = -1056962377;
short var_12 = (short)-25709;
unsigned long long int var_16 = 14447512973077380441ULL;
unsigned long long int var_17 = 18234392569114578101ULL;
short var_18 = (short)1331;
int zero = 0;
int var_19 = 205886465;
signed char var_20 = (signed char)98;
short var_21 = (short)-12754;
unsigned long long int var_22 = 8097122775768689917ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != -3;
    value_mismatch |= var_20 != (signed char)-32;
    value_mismatch |= var_21 != (short)-17250;
    value_mismatch |= var_22 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_5, var_7, var_8, var_9, var_10, var_12, var_16, var_17, var_18, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
