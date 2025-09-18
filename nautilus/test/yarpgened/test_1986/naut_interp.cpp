/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1986
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1986
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
void test(val<unsigned char> var_5, val<unsigned char> var_6, val<unsigned char> var_7, val<unsigned short> var_11, val<int> zero, val<unsigned long long int*> var_12, val<short*> var_13, val<signed char*> var_14, val<signed char*> var_15, val<short*> var_16, val<unsigned long long int*> var_17, val<unsigned short*> var_18) {
    if (((/* implicit */val<bool>) var_11))
    {
        *var_12 = ((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) (val<unsigned char>)44))));
        *var_13 = ((/* implicit */val<short>) min((*var_13), (((/* implicit */val<short>) var_6))));
    }
    else
    {
        *var_14 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) min((8381534498076636115LL), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) var_5)))))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11))) : (min((((((/* implicit */val<bool>) 1174711226)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)58))) : (-8381534498076636116LL))), (((/* implicit */val<long long int>) min((((/* implicit */val<int>) (val<unsigned char>)47)), (185294245))))))));
        *var_15 = ((/* implicit */val<signed char>) var_5);
        *var_16 = ((/* implicit */val<short>) var_7);
    }

    *var_17 = ((/* implicit */val<unsigned long long int>) var_5);
    *var_18 += ((/* implicit */val<unsigned short>) (val<signed char>)-9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)252;
unsigned char var_6 = (unsigned char)227;
unsigned char var_7 = (unsigned char)29;
unsigned short var_11 = (unsigned short)59905;
int zero = 0;
unsigned long long int var_12 = 7441799892164870462ULL;
short var_13 = (short)-12254;
signed char var_14 = (signed char)77;
signed char var_15 = (signed char)-6;
short var_16 = (short)-23374;
unsigned long long int var_17 = 3200275267869110427ULL;
unsigned short var_18 = (unsigned short)9632;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 0ULL;
    value_mismatch |= var_13 != (short)-12254;
    value_mismatch |= var_14 != (signed char)77;
    value_mismatch |= var_15 != (signed char)-6;
    value_mismatch |= var_16 != (short)-23374;
    value_mismatch |= var_17 != 252ULL;
    value_mismatch |= var_18 != (unsigned short)9623;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_6, var_7, var_11, zero, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
}
