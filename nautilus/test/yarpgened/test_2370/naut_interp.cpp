/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2370
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2370
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
void test(val<short> var_0, val<short> var_1, val<unsigned int> var_2, val<short> var_4, val<short> var_5, val<short> var_9, val<unsigned int> var_11, val<signed char> var_14, val<unsigned int> var_15, val<unsigned int> var_16, val<long long int> var_17, val<int> zero, val<short*> var_19, val<long long int*> var_20, val<unsigned long long int*> var_21, val<unsigned int*> var_22, val<long long int*> var_23, val<unsigned int*> var_24, val<unsigned int*> var_25, val<short*> var_26, val<signed char*> var_27) {
    *var_19 = ((/* implicit */val<short>) ((((/* implicit */val<unsigned long long int>) (-(((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)79))) - (var_16)))))) + (((3419469220884968493ULL) + (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4)))))));
    *var_20 = ((/* implicit */val<long long int>) var_2);
    if (((/* implicit */val<bool>) (val<signed char>)-1))
    {
        *var_21 = ((/* implicit */val<unsigned long long int>) var_1);
        *var_22 = ((/* implicit */val<unsigned int>) (~(((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)176))) | (var_17)))) & (((((/* implicit */val<bool>) (val<unsigned char>)176)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_14))) : (3419469220884968502ULL)))))));
        *var_23 = ((/* implicit */val<long long int>) var_14);
    }
    else
    {
        *var_24 = ((/* implicit */val<unsigned int>) (((-(((/* implicit */val<int>) var_5)))) >= ((((+(((/* implicit */val<int>) (val<unsigned char>)24)))) >> (((((/* implicit */val<int>) (val<unsigned char>)133)) - (109)))))));
        if (((/* implicit */val<bool>) var_11))
        {
            *var_25 = ((/* implicit */val<unsigned int>) var_9);
            *var_26 = ((/* implicit */val<short>) min((*var_26), (((/* implicit */val<short>) var_15))));
            *var_27 = ((/* implicit */val<signed char>) var_0);
        }

    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32643;
short var_1 = (short)-32241;
unsigned int var_2 = 3125502391U;
short var_4 = (short)19029;
short var_5 = (short)-5010;
short var_9 = (short)26835;
unsigned int var_11 = 1308363197U;
signed char var_14 = (signed char)-120;
unsigned int var_15 = 3582551314U;
unsigned int var_16 = 2576917065U;
long long int var_17 = 7494807622554262502LL;
int zero = 0;
short var_19 = (short)23402;
long long int var_20 = -1173909818303634200LL;
unsigned long long int var_21 = 17247007057134488914ULL;
unsigned int var_22 = 1545444505U;
long long int var_23 = -5462184911056507912LL;
unsigned int var_24 = 1938688913U;
unsigned int var_25 = 1804621123U;
short var_26 = (short)-21277;
signed char var_27 = (signed char)-105;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)-8068;
    value_mismatch |= var_20 != 3125502391LL;
    value_mismatch |= var_21 != 18446744073709519375ULL;
    value_mismatch |= var_22 != 767779967U;
    value_mismatch |= var_23 != -120LL;
    value_mismatch |= var_24 != 1938688913U;
    value_mismatch |= var_25 != 1804621123U;
    value_mismatch |= var_26 != (short)-21277;
    value_mismatch |= var_27 != (signed char)-105;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_5, var_9, var_11, var_14, var_15, var_16, var_17, zero, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25, &var_26, &var_27);
  checksum();
  assert(!value_mismatch);
}
