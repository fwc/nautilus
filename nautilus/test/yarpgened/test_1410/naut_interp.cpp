/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1410
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1410
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
void test(val<unsigned int> var_0, val<bool> var_1, val<unsigned int> var_2, val<unsigned char> var_3, val<unsigned char> var_5, val<long long int> var_8, val<long long int> var_10, val<int> zero, val<unsigned short*> var_12, val<unsigned char*> var_13, val<bool*> var_14, val<unsigned char*> var_15, val<unsigned char*> var_16, val<long long int*> var_17) {
    *var_12 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_2)) ? (((((val<bool>) -3949533760241660909LL)) ? (((((/* implicit */val<bool>) var_3)) ? (3949533760241660908LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_5))))) : (((var_8) & (var_8))))) : (-3949533760241660909LL)));
    *var_13 = ((/* implicit */val<unsigned char>) min((((/* implicit */val<long long int>) (-(((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_3)))))))), (min((min((((/* implicit */val<long long int>) var_0)), (-9140621819684419340LL))), (((var_1) ? (-3949533760241660928LL) : (var_10)))))));
    *var_14 = ((/* implicit */val<bool>) 9223372036854775807LL);
    if (((/* implicit */val<bool>) var_10))
    {
        *var_15 = ((/* implicit */val<unsigned char>) ((val<bool>) ((val<bool>) (!(((/* implicit */val<bool>) var_2))))));
        *var_16 += ((/* implicit */val<unsigned char>) (-((~(((/* implicit */val<int>) var_1))))));
        *var_17 = ((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) ((var_1) ? (((val<long long int>) var_2)) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) (val<bool>)0)) > (((/* implicit */val<int>) (val<bool>)1)))))))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3936454973U;
bool var_1 = (bool)0;
unsigned int var_2 = 1415332155U;
unsigned char var_3 = (unsigned char)201;
unsigned char var_5 = (unsigned char)226;
long long int var_8 = 3440328596533247754LL;
long long int var_10 = -2716141998117858121LL;
int zero = 0;
unsigned short var_12 = (unsigned short)56371;
unsigned char var_13 = (unsigned char)67;
bool var_14 = (bool)1;
unsigned char var_15 = (unsigned char)165;
unsigned char var_16 = (unsigned char)120;
long long int var_17 = 8486812002204353825LL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)62444;
    value_mismatch |= var_13 != (unsigned char)244;
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != (unsigned char)0;
    value_mismatch |= var_16 != (unsigned char)121;
    value_mismatch |= var_17 != 1LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_5, var_8, var_10, zero, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
