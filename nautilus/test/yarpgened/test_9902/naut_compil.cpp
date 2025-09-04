/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9902
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9902
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
void test(val<unsigned short> var_1, val<unsigned short> var_2, val<unsigned int> var_3, val<unsigned char> var_4, val<bool> var_5, val<short> var_6, val<unsigned int> var_8, val<unsigned char> var_9, val<signed char> var_10, val<unsigned int> var_11, val<unsigned char> var_12, val<bool> var_14, val<unsigned short> var_15, val<signed char> var_16, val<unsigned char> var_18, val<unsigned int> var_19, val<int> zero, val<long long int*> var_20, val<unsigned int*> var_21, val<unsigned long long int*> var_22, val<bool*> var_23, val<unsigned char*> var_24, val<int*> var_25, val<signed char*> var_26) {
    *var_20 = ((/* implicit */val<long long int>) min((((/* implicit */val<unsigned int>) ((val<int>) ((((/* implicit */val<bool>) var_15)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_10))) : (var_3))))), (((var_8) - (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_2))) + (var_8)))))));
    if (((/* implicit */val<bool>) ((max((((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) var_4)), (var_15)))), (((((/* implicit */val<int>) var_5)) + (((/* implicit */val<int>) var_4)))))) * (min((min((511), (((/* implicit */val<int>) var_14)))), (((/* implicit */val<int>) var_6)))))))
    {
        *var_21 = 4294967293U;
        *var_22 = ((/* implicit */val<unsigned long long int>) max((((((/* implicit */val<bool>) min((var_3), (var_19)))) ? (((/* implicit */val<int>) ((val<short>) var_12))) : (((/* implicit */val<int>) ((val<short>) var_15))))), (((/* implicit */val<int>) ((873654000) < (((/* implicit */val<int>) (val<unsigned char>)15)))))));
        *var_23 = ((/* implicit */val<bool>) min((*var_23), (((/* implicit */val<bool>) ((((((/* implicit */val<int>) var_4)) >> (((var_19) - (3951691863U))))) & (((/* implicit */val<int>) var_2)))))));
        if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_18)) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) var_12))))) ? (((((/* implicit */val<bool>) var_18)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) var_5)))) : (((/* implicit */val<int>) var_5))))) ? (min((64512U), (((/* implicit */val<unsigned int>) -394417388)))) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) min((var_3), (((/* implicit */val<unsigned int>) var_10))))) ? ((-(((/* implicit */val<int>) var_16)))) : (((/* implicit */val<int>) var_16))))))))
        {
            *var_24 = ((/* implicit */val<unsigned char>) min((*var_24), (((/* implicit */val<unsigned char>) (-(((/* implicit */val<int>) var_1)))))));
            *var_25 |= ((max((((/* implicit */val<int>) ((val<bool>) var_14))), (((((/* implicit */val<int>) var_12)) ^ (((/* implicit */val<int>) var_6)))))) - (((/* implicit */val<int>) var_12)));
        }

        *var_26 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) (+(-394417382)))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<bool>) var_11)))) : (4095U)));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)45986;
unsigned short var_2 = (unsigned short)14195;
unsigned int var_3 = 3423813561U;
unsigned char var_4 = (unsigned char)150;
bool var_5 = (bool)1;
short var_6 = (short)15811;
unsigned int var_8 = 1718962329U;
unsigned char var_9 = (unsigned char)142;
signed char var_10 = (signed char)-34;
unsigned int var_11 = 1560581334U;
unsigned char var_12 = (unsigned char)70;
bool var_14 = (bool)1;
unsigned short var_15 = (unsigned short)35992;
signed char var_16 = (signed char)80;
unsigned char var_18 = (unsigned char)152;
unsigned int var_19 = 3951691864U;
int zero = 0;
long long int var_20 = 4852428140639225310LL;
unsigned int var_21 = 2943429506U;
unsigned long long int var_22 = 12129496137402431791ULL;
bool var_23 = (bool)0;
unsigned char var_24 = (unsigned char)79;
int var_25 = -1871824267;
signed char var_26 = (signed char)58;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 4294953101LL;
    value_mismatch |= var_21 != 4294967293U;
    value_mismatch |= var_22 != 70ULL;
    value_mismatch |= var_23 != (bool)0;
    value_mismatch |= var_24 != (unsigned char)79;
    value_mismatch |= var_25 != -1871822977;
    value_mismatch |= var_26 != (signed char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_5, var_6, var_8, var_9, var_10, var_11, var_12, var_14, var_15, var_16, var_18, var_19, zero, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25, &var_26);
  checksum();
  assert(!value_mismatch);
}
