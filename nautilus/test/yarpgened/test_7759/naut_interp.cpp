/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7759
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7759
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
void test(val<unsigned long long int> var_1, val<unsigned char> var_2, val<unsigned int> var_3, val<signed char> var_4, val<int> var_5, val<unsigned long long int> var_6, val<long long int> var_8, val<unsigned long long int> var_9, val<long long int> var_10, val<short> var_12, val<unsigned int> var_13, val<unsigned char> var_14, val<unsigned long long int> var_16, val<int> zero, val<int*> var_17, val<long long int*> var_18, val<unsigned long long int*> var_19, val<short*> var_20, val<unsigned long long int*> var_21, val<short*> var_22, val<bool*> var_23) {
    if (((/* implicit */val<bool>) min((4248642622U), (46324674U))))
    {
        *var_17 = ((/* implicit */val<int>) var_13);
        *var_18 = ((/* implicit */val<long long int>) var_1);
    }

    if (((/* implicit */val<bool>) ((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<signed char>)-101)) ? (var_16) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_14)))))) ? (((/* implicit */val<int>) max((var_2), (((/* implicit */val<unsigned char>) var_4))))) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_14)) || (((/* implicit */val<bool>) -3279500506104381209LL))))))) % (((/* implicit */val<int>) ((val<unsigned char>) ((((/* implicit */val<int>) (val<signed char>)53)) % (((/* implicit */val<int>) (val<unsigned char>)15)))))))))
    {
        *var_19 = (((!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_2)) ? (4248642622U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)101)))))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<signed char>) ((((/* implicit */val<bool>) -234144096)) || (((/* implicit */val<bool>) (val<short>)(-32767 - 1)))))))) : (min((13736878903678238474ULL), (((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) (val<unsigned char>)240))))))));
        if (((/* implicit */val<bool>) var_14))
        {
            *var_20 &= ((/* implicit */val<short>) (+(var_6)));
            *var_21 = ((/* implicit */val<unsigned long long int>) (~((~(((((/* implicit */val<bool>) (val<unsigned char>)92)) ? (2147483647) : (((/* implicit */val<int>) var_12))))))));
            *var_22 = ((/* implicit */val<short>) max((((((/* implicit */val<unsigned long long int>) var_10)) / ((-(var_9))))), (((/* implicit */val<unsigned long long int>) (((!(((/* implicit */val<bool>) var_5)))) ? (((/* implicit */val<int>) var_2)) : (((((/* implicit */val<bool>) var_8)) ? ((-2147483647 - 1)) : (((/* implicit */val<int>) (val<signed char>)53)))))))));
        }

    }

    *var_23 = ((/* implicit */val<bool>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13287935307045423459ULL;
unsigned char var_2 = (unsigned char)219;
unsigned int var_3 = 4006125474U;
signed char var_4 = (signed char)-18;
int var_5 = -1307234973;
unsigned long long int var_6 = 10766125673011334597ULL;
long long int var_8 = -7539255915509528656LL;
unsigned long long int var_9 = 6007929203299904079ULL;
long long int var_10 = -6092192434929189543LL;
short var_12 = (short)-9478;
unsigned int var_13 = 678472862U;
unsigned char var_14 = (unsigned char)99;
unsigned long long int var_16 = 15066513376921375579ULL;
int zero = 0;
int var_17 = 549548503;
long long int var_18 = 4507404078968033074LL;
unsigned long long int var_19 = 14398446615243656795ULL;
short var_20 = (short)23350;
unsigned long long int var_21 = 7340469688636921626ULL;
short var_22 = (short)24083;
bool var_23 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 678472862;
    value_mismatch |= var_18 != -5158808766664128157LL;
    value_mismatch |= var_19 != 0ULL;
    value_mismatch |= var_20 != (short)18692;
    value_mismatch |= var_21 != 2147483647ULL;
    value_mismatch |= var_22 != (short)0;
    value_mismatch |= var_23 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_5, var_6, var_8, var_9, var_10, var_12, var_13, var_14, var_16, zero, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
}
