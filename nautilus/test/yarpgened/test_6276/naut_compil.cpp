/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6276
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6276
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
void test(val<short> var_0, val<signed char> var_2, val<signed char> var_3, val<unsigned short> var_4, val<signed char> var_5, val<unsigned long long int> var_6, val<short> var_10, val<unsigned int> var_12, val<int> zero, val<unsigned int*> var_13, val<unsigned char*> var_14, val<unsigned int*> var_15, val<unsigned long long int*> var_16, val<bool*> var_17, val<int*> var_18, val<signed char*> var_19) {
    *var_13 -= ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) ((((/* implicit */val<int>) var_2)) < ((+(945152416))))))));
    if (((/* implicit */val<bool>) var_4))
    {
        if ((!(((/* implicit */val<bool>) var_5))))
        {
            *var_14 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) min(((-(var_6))), (((/* implicit */val<unsigned long long int>) ((3218974189U) - (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_0))))))))) || (((/* implicit */val<bool>) var_3))));
            *var_15 ^= ((/* implicit */val<unsigned int>) var_0);
            *var_16 = ((/* implicit */val<unsigned long long int>) var_0);
        }

        *var_17 = ((/* implicit */val<bool>) (val<signed char>)22);
        *var_18 = ((/* implicit */val<int>) max((var_12), (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_2))) | (3434372862U)))));
        *var_19 |= ((/* implicit */val<signed char>) (~(var_12)));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4503;
signed char var_2 = (signed char)121;
signed char var_3 = (signed char)12;
unsigned short var_4 = (unsigned short)20188;
signed char var_5 = (signed char)122;
unsigned long long int var_6 = 10612224380278572915ULL;
short var_10 = (short)-17225;
unsigned int var_12 = 3208409395U;
int zero = 0;
unsigned int var_13 = 4279050151U;
unsigned char var_14 = (unsigned char)185;
unsigned int var_15 = 752000867U;
unsigned long long int var_16 = 14468134217037753239ULL;
bool var_17 = (bool)1;
int var_18 = -1316782091;
signed char var_19 = (signed char)86;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 4279067376U;
    value_mismatch |= var_14 != (unsigned char)185;
    value_mismatch |= var_15 != 752000867U;
    value_mismatch |= var_16 != 14468134217037753239ULL;
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != -860594433;
    value_mismatch |= var_19 != (signed char)-34;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_6, var_10, var_12, zero, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
}
