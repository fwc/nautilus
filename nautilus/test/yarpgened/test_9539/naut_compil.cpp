/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9539
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9539
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
void test(val<unsigned short> var_0, val<int> var_2, val<short> var_3, val<long long int> var_4, val<unsigned short> var_6, val<unsigned long long int> var_9, val<unsigned char> var_10, val<int> zero, val<unsigned short*> var_11, val<short*> var_12, val<unsigned char*> var_13, val<int*> var_14, val<unsigned int*> var_15) {
    if (((max((((/* implicit */val<unsigned long long int>) min((((/* implicit */val<unsigned short>) var_3)), (var_0)))), (((((/* implicit */val<bool>) 4191198273298978414ULL)) ? (var_9) : (4191198273298978414ULL))))) > (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6)))))
    {
        *var_11 -= ((/* implicit */val<unsigned short>) var_2);
        *var_12 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) (-(((14255545800410573201ULL) - (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3)))))))) ? (min((14255545800410573201ULL), (((((/* implicit */val<bool>) (val<short>)0)) ? (0ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_10))))))) : (((/* implicit */val<unsigned long long int>) 1417000176U))));
        *var_13 *= ((/* implicit */val<unsigned char>) -2498506307716489139LL);
        *var_14 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) max((((((/* implicit */val<bool>) (val<unsigned char>)217)) ? (4191198273298978414ULL) : (12847396252470615136ULL))), (((((/* implicit */val<bool>) var_4)) ? (4191198273298978406ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_0)))))))) ? ((~(var_4))) : (var_4)));
    }

    *var_15 = (~(((((/* implicit */val<bool>) 18446744073709551615ULL)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) (val<unsigned short>)0)) >= (((/* implicit */val<int>) var_10)))))) : (((val<unsigned int>) (val<unsigned short>)16383)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63969;
int var_2 = -974799348;
short var_3 = (short)11591;
long long int var_4 = 4983807925353689749LL;
unsigned short var_6 = (unsigned short)22063;
unsigned long long int var_9 = 429424678833948159ULL;
unsigned char var_10 = (unsigned char)226;
int zero = 0;
unsigned short var_11 = (unsigned short)52966;
short var_12 = (short)-7128;
unsigned char var_13 = (unsigned char)253;
int var_14 = 77070767;
unsigned int var_15 = 2307307936U;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned short)4314;
    value_mismatch |= var_12 != (short)226;
    value_mismatch |= var_13 != (unsigned char)25;
    value_mismatch |= var_14 != -461091478;
    value_mismatch |= var_15 != 4294967295U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_6, var_9, var_10, zero, &var_11, &var_12, &var_13, &var_14, &var_15);
  checksum();
}
