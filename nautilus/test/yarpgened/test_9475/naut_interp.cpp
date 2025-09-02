/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9475
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9475
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
void test(val<unsigned int> var_2, val<signed char> var_4, val<signed char> var_9, val<unsigned long long int> var_10, val<int> var_16, val<bool> var_18, val<long long int> var_19, val<int> zero, val<unsigned long long int*> var_20, val<unsigned short*> var_21, val<int*> var_22, val<int*> var_23, val<short*> var_24, val<int*> var_25, val<signed char*> var_26, val<unsigned long long int*> var_27, val<unsigned short*> var_28) {
    *var_20 = ((/* implicit */val<unsigned long long int>) max((*var_20), (12656520365276682672ULL)));
    if (var_18)
    {
        *var_21 |= ((/* implicit */val<unsigned short>) (((~(max((var_10), (((/* implicit */val<unsigned long long int>) var_9)))))) >> (((var_19) + (1519802137440571966LL)))));
        *var_22 -= ((/* implicit */val<int>) ((val<unsigned short>) var_18));
    }
    else
    {
        *var_23 = ((/* implicit */val<int>) max((*var_23), (((/* implicit */val<int>) ((((((/* implicit */val<bool>) 7)) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_10)) ? (-21) : (-2)))) : (min((((/* implicit */val<long long int>) 3)), (var_19))))) == (((/* implicit */val<long long int>) min((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_4)) ? (-12) : (((/* implicit */val<int>) (val<short>)30981))))), (var_2)))))))));
        *var_24 ^= ((/* implicit */val<short>) ((1) | (((/* implicit */val<int>) (val<unsigned char>)255))));
        *var_25 |= -10;
        *var_26 = ((/* implicit */val<signed char>) max((*var_26), (((/* implicit */val<signed char>) ((val<long long int>) ((((/* implicit */val<bool>) ((val<int>) (val<short>)8128))) ? (((/* implicit */val<unsigned long long int>) var_2)) : (13361359866762170440ULL)))))));
    }

    *var_27 |= ((/* implicit */val<unsigned long long int>) (!(var_18)));
    *var_28 -= ((/* implicit */val<unsigned short>) var_16);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 347363365U;
signed char var_4 = (signed char)-46;
signed char var_9 = (signed char)-56;
unsigned long long int var_10 = 13929454668269765111ULL;
int var_16 = 115995893;
bool var_18 = (bool)0;
long long int var_19 = -1519802137440571947LL;
int zero = 0;
unsigned long long int var_20 = 12424472238147004230ULL;
unsigned short var_21 = (unsigned short)8211;
int var_22 = -1133132415;
int var_23 = 659110223;
short var_24 = (short)-27902;
int var_25 = -717514029;
signed char var_26 = (signed char)63;
unsigned long long int var_27 = 310384602483054762ULL;
unsigned short var_28 = (unsigned short)24421;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 12656520365276682672ULL;
    value_mismatch |= var_21 != (unsigned short)8211;
    value_mismatch |= var_22 != -1133132415;
    value_mismatch |= var_23 != 659110223;
    value_mismatch |= var_24 != (short)-27651;
    value_mismatch |= var_25 != -9;
    value_mismatch |= var_26 != (signed char)63;
    value_mismatch |= var_27 != 310384602483054763ULL;
    value_mismatch |= var_28 != (unsigned short)27248;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_9, var_10, var_16, var_18, var_19, zero, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25, &var_26, &var_27, &var_28);
  checksum();
  assert(!value_mismatch);
}
