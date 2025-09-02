/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9625
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9625
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
void test(val<short> var_1, val<unsigned int> var_2, val<short> var_3, val<unsigned long long int> var_4, val<int> var_6, val<long long int> var_7, val<long long int> var_8, val<long long int> var_9, val<int> zero, val<short*> var_10, val<unsigned int*> var_11, val<unsigned int*> var_12, val<long long int*> var_13, val<bool*> var_14) {
    *var_10 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) (val<unsigned short>)43783)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<bool>)1))));
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) 0)) / (2689524000020876828ULL)))) ? (((/* implicit */val<unsigned long long int>) var_7)) : (((((/* implicit */val<bool>) var_2)) ? (var_4) : (17081855275856380837ULL)))))) ? (((/* implicit */val<long long int>) ((val<int>) var_6))) : (var_8))))
    {
        *var_11 = ((/* implicit */val<unsigned int>) (+(((var_9) + (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)509)))))));
        *var_12 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)241))) : (1446582939U)))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((min((var_4), (((/* implicit */val<unsigned long long int>) 106325002U)))) >= (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<unsigned short>)43783)) ? (var_2) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)64)))))))))) : (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) var_3))))) ? (((((/* implicit */val<bool>) (val<short>)14746)) ? (-1529289133286123899LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)116))))) : (((/* implicit */val<long long int>) var_2))))));
    }

    *var_13 -= var_9;
    *var_14 -= ((max((var_7), (((((/* implicit */val<bool>) (val<short>)31)) ? (var_8) : (1048768563121105776LL))))) != (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) (val<signed char>)50)) <= (((/* implicit */val<int>) (val<unsigned char>)78)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1686;
unsigned int var_2 = 2360993110U;
short var_3 = (short)9399;
unsigned long long int var_4 = 1401119109932425919ULL;
int var_6 = -1814586073;
long long int var_7 = 8116187948899682687LL;
long long int var_8 = -2542581986572357563LL;
long long int var_9 = -3397343580463370479LL;
int zero = 0;
short var_10 = (short)-19773;
unsigned int var_11 = 2447096716U;
unsigned int var_12 = 2405708850U;
long long int var_13 = -5991819146726873354LL;
bool var_14 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)1;
    value_mismatch |= var_11 != 1921446158U;
    value_mismatch |= var_12 != 0U;
    value_mismatch |= var_13 != -2594475566263502875LL;
    value_mismatch |= var_14 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_6, var_7, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
