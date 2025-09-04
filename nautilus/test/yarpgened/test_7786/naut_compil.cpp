/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7786
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7786
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
void test(val<unsigned long long int> var_0, val<long long int> var_3, val<unsigned char> var_4, val<unsigned char> var_5, val<unsigned long long int> var_6, val<bool> var_7, val<unsigned long long int> var_8, val<unsigned char> var_9, val<int> zero, val<bool*> var_11, val<unsigned long long int*> var_12, val<unsigned long long int*> var_13, val<unsigned char*> var_14, val<long long int*> var_15, val<unsigned long long int*> var_16, val<long long int*> var_17) {
    if (((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<signed char>)(-127 - 1))) * (((/* implicit */val<int>) var_4)))))
    {
        *var_11 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) max(((val<unsigned char>)188), (((/* implicit */val<unsigned char>) var_7)))))) < (((val<long long int>) (val<signed char>)(-127 - 1)))))) : (((/* implicit */val<int>) var_4))));
        *var_12 = ((/* implicit */val<unsigned long long int>) var_7);
    }

    if (((/* implicit */val<bool>) (-(((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)118))) : (min((((/* implicit */val<unsigned long long int>) (val<unsigned char>)208)), (16251438151530999373ULL))))))))
    {
        *var_13 = ((/* implicit */val<unsigned long long int>) var_4);
        *var_14 |= ((/* implicit */val<unsigned char>) ((min((var_8), (((/* implicit */val<unsigned long long int>) var_5)))) + (((min((var_6), (18446744073709551615ULL))) % (((/* implicit */val<unsigned long long int>) (-(663031813U))))))));
        *var_15 = ((/* implicit */val<long long int>) ((min((max((((/* implicit */val<unsigned long long int>) -413276784)), (7890812876931950986ULL))), (((/* implicit */val<unsigned long long int>) var_3)))) == (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((val<long long int>) var_0)))))))));
        *var_16 = ((/* implicit */val<unsigned long long int>) max((((((/* implicit */val<int>) ((val<unsigned char>) var_7))) + (((((/* implicit */val<bool>) 18446744073709551595ULL)) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) (val<signed char>)127)))))), ((-(((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<unsigned char>)188))))))));
    }

    *var_17 = ((/* implicit */val<long long int>) 668116963U);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2685071622017522691ULL;
long long int var_3 = -3328879398118053172LL;
unsigned char var_4 = (unsigned char)223;
unsigned char var_5 = (unsigned char)114;
unsigned long long int var_6 = 340135409962089390ULL;
bool var_7 = (bool)0;
unsigned long long int var_8 = 14638504755118520028ULL;
unsigned char var_9 = (unsigned char)176;
int zero = 0;
bool var_11 = (bool)0;
unsigned long long int var_12 = 9215568430162532012ULL;
unsigned long long int var_13 = 5700905076637288191ULL;
unsigned char var_14 = (unsigned char)116;
long long int var_15 = 6896719892723940502LL;
unsigned long long int var_16 = 3601866403532984173ULL;
long long int var_17 = -6416167349486464837LL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)0;
    value_mismatch |= var_12 != 0ULL;
    value_mismatch |= var_13 != 223ULL;
    value_mismatch |= var_14 != (unsigned char)244;
    value_mismatch |= var_15 != 0LL;
    value_mismatch |= var_16 != 176ULL;
    value_mismatch |= var_17 != 668116963LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_5, var_6, var_7, var_8, var_9, zero, &var_11, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
