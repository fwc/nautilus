/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4289
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4289
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
void test(val<signed char> var_0, val<short> var_1, val<unsigned long long int> var_2, val<unsigned short> var_3, val<unsigned int> var_4, val<unsigned long long int> var_5, val<long long int> var_6, val<signed char> var_8, val<unsigned int> var_9, val<unsigned long long int> var_10, val<int> zero, val<long long int*> var_13, val<unsigned short*> var_14, val<short*> var_15, val<int*> var_16, val<short*> var_17, val<short*> var_18) {
    if (((/* implicit */val<bool>) (-(var_5))))
    {
        *var_13 &= ((/* implicit */val<long long int>) ((((/* implicit */val<int>) ((((((/* implicit */val<unsigned long long int>) 262143U)) + (18446744073709551615ULL))) != (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<short>) (val<unsigned short>)64646))))))) % ((-((+(((/* implicit */val<int>) (val<unsigned short>)47932))))))));
        *var_14 = ((/* implicit */val<unsigned short>) max((*var_14), (((/* implicit */val<unsigned short>) var_4))));
        *var_15 = ((/* implicit */val<short>) ((val<unsigned short>) (-(((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) (val<short>)10231)) : (((/* implicit */val<int>) var_8)))))));
    }

    *var_16 = ((/* implicit */val<int>) ((var_10) == (((((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)8689))) : (var_10))) / (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_0)) || (((/* implicit */val<bool>) var_0))))))))));
    *var_17 = ((/* implicit */val<short>) ((((val<unsigned long long int>) (!(((/* implicit */val<bool>) var_6))))) + (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<unsigned short>) var_9)))) ^ (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3))) / (var_9))))))));
    *var_18 &= ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_2)) || (((/* implicit */val<bool>) ((((val<unsigned int>) var_4)) / (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_1))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-21;
short var_1 = (short)-14174;
unsigned long long int var_2 = 9769068293155500266ULL;
unsigned short var_3 = (unsigned short)4304;
unsigned int var_4 = 3917420639U;
unsigned long long int var_5 = 15182992176230988122ULL;
long long int var_6 = -5471071810121563018LL;
signed char var_8 = (signed char)119;
unsigned int var_9 = 2742094420U;
unsigned long long int var_10 = 14058804460084796470ULL;
int zero = 0;
long long int var_13 = -8383975982274420143LL;
unsigned short var_14 = (unsigned short)14793;
short var_15 = (short)-7985;
int var_16 = 881409759;
short var_17 = (short)16536;
short var_18 = (short)-9815;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 1LL;
    value_mismatch |= var_14 != (unsigned short)14793;
    value_mismatch |= var_15 != (short)-10231;
    value_mismatch |= var_16 != 0;
    value_mismatch |= var_17 != (short)2644;
    value_mismatch |= var_18 != (short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_8, var_9, var_10, zero, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
