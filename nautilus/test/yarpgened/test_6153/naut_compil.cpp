/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6153
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6153
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
void test(val<unsigned char> var_0, val<unsigned int> var_1, val<unsigned int> var_5, val<signed char> var_7, val<unsigned short> var_8, val<bool> var_9, val<unsigned int> var_12, val<unsigned short> var_16, val<int> zero, val<long long int*> var_20, val<unsigned int*> var_21, val<unsigned short*> var_22, val<signed char*> var_23, val<unsigned short*> var_24, val<long long int*> var_25, val<short*> var_26, val<bool*> var_27) {
    if (((/* implicit */val<bool>) var_5))
    {
        *var_20 = ((/* implicit */val<long long int>) min((*var_20), (((/* implicit */val<long long int>) var_7))));
        *var_21 = ((/* implicit */val<unsigned int>) ((val<unsigned short>) (val<unsigned short>)25575));
        *var_22 = ((/* implicit */val<unsigned short>) 1707750241U);
    }
    else
    {
        *var_23 = ((/* implicit */val<signed char>) ((((((/* implicit */val<bool>) (((val<bool>)1) ? (((/* implicit */val<int>) (val<unsigned short>)50074)) : (((/* implicit */val<int>) var_9))))) ? (min((var_5), (((/* implicit */val<unsigned int>) (val<unsigned char>)35)))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1))))) / (((/* implicit */val<unsigned int>) max((((((/* implicit */val<int>) (val<short>)32767)) >> (((((/* implicit */val<int>) (val<unsigned short>)15445)) - (15437))))), (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned char>)220))))))))));
        *var_24 &= ((/* implicit */val<unsigned short>) ((8064611785421157789LL) << (((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<signed char>)-124)) ? (((/* implicit */val<int>) (val<unsigned char>)220)) : (((/* implicit */val<int>) (val<unsigned char>)220))))) ? (var_1) : (618152940U))) - (4027232008U)))));
        *var_25 = ((/* implicit */val<long long int>) min((((/* implicit */val<int>) var_8)), (((((/* implicit */val<int>) (val<unsigned short>)15474)) / (((/* implicit */val<int>) var_16))))));
    }

    *var_26 = ((/* implicit */val<short>) (((-(((val<unsigned long long int>) var_7)))) >= (((/* implicit */val<unsigned long long int>) var_12))));
    *var_27 = ((/* implicit */val<bool>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)171;
unsigned int var_1 = 4027232008U;
unsigned int var_5 = 347742330U;
signed char var_7 = (signed char)-59;
unsigned short var_8 = (unsigned short)21978;
bool var_9 = (bool)1;
unsigned int var_12 = 1574852082U;
unsigned short var_16 = (unsigned short)12230;
int zero = 0;
long long int var_20 = -3330299000965932441LL;
unsigned int var_21 = 1644999047U;
unsigned short var_22 = (unsigned short)53680;
signed char var_23 = (signed char)52;
unsigned short var_24 = (unsigned short)13278;
long long int var_25 = 8685192338677903341LL;
short var_26 = (short)-29471;
bool var_27 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != -3330299000965932441LL;
    value_mismatch |= var_21 != 25575U;
    value_mismatch |= var_22 != (unsigned short)13153;
    value_mismatch |= var_23 != (signed char)52;
    value_mismatch |= var_24 != (unsigned short)13278;
    value_mismatch |= var_25 != 8685192338677903341LL;
    value_mismatch |= var_26 != (short)0;
    value_mismatch |= var_27 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_5, var_7, var_8, var_9, var_12, var_16, zero, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25, &var_26, &var_27);
  checksum();
  assert(!value_mismatch);
}
