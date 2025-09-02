/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3892
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3892
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
void test(val<unsigned long long int> var_0, val<unsigned int> var_2, val<short> var_4, val<short> var_5, val<unsigned short> var_6, val<bool> var_7, val<short> var_11, val<short> var_12, val<short> var_13, val<long long int> var_14, val<unsigned int> var_15, val<unsigned int> var_16, val<int> zero, val<short*> var_17, val<long long int*> var_18, val<unsigned char*> var_19, val<long long int*> var_20, val<unsigned int*> var_21, val<unsigned int*> var_22, val<unsigned short*> var_23) {
    *var_17 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_5))))) ? (((/* implicit */val<unsigned long long int>) (+(var_16)))) : (min((((/* implicit */val<unsigned long long int>) var_11)), (var_0)))))) && (var_7)));
    if (((/* implicit */val<bool>) ((val<unsigned short>) (+(((/* implicit */val<int>) var_6))))))
    {
        *var_18 += ((/* implicit */val<long long int>) var_4);
        *var_19 = ((/* implicit */val<unsigned char>) ((((max((var_2), (var_15))) & (((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) var_12))))))) * (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_13)))));
        *var_20 = ((/* implicit */val<long long int>) var_16);
        *var_21 = ((/* implicit */val<unsigned int>) (+(min((((((/* implicit */val<int>) (val<short>)4032)) / (((/* implicit */val<int>) (val<unsigned short>)58198)))), ((-(((/* implicit */val<int>) var_4))))))));
    }

    *var_22 = var_2;
    *var_23 &= ((/* implicit */val<unsigned short>) ((((((/* implicit */val<bool>) var_13)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_7))) : (((((/* implicit */val<bool>) var_13)) ? (var_0) : (((/* implicit */val<unsigned long long int>) var_14)))))) > (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_13)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10176763813875922646ULL;
unsigned int var_2 = 745451318U;
short var_4 = (short)18158;
short var_5 = (short)361;
unsigned short var_6 = (unsigned short)33872;
bool var_7 = (bool)1;
short var_11 = (short)-14287;
short var_12 = (short)2275;
short var_13 = (short)9013;
long long int var_14 = 4357092470389466547LL;
unsigned int var_15 = 168560195U;
unsigned int var_16 = 143849150U;
int zero = 0;
short var_17 = (short)-30842;
long long int var_18 = -7783397586510044643LL;
unsigned char var_19 = (unsigned char)239;
long long int var_20 = 2670814607254531078LL;
unsigned int var_21 = 3588432457U;
unsigned int var_22 = 228808441U;
unsigned short var_23 = (unsigned short)53790;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (short)1;
    value_mismatch |= var_18 != -7783397586510026485LL;
    value_mismatch |= var_19 != (unsigned char)36;
    value_mismatch |= var_20 != 143849150LL;
    value_mismatch |= var_21 != 4294949138U;
    value_mismatch |= var_22 != 745451318U;
    value_mismatch |= var_23 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_5, var_6, var_7, var_11, var_12, var_13, var_14, var_15, var_16, zero, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
