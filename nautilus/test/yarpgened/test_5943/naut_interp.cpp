/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5943
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5943
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
void test(val<int> var_0, val<long long int> var_2, val<bool> var_3, val<bool> var_5, val<signed char> var_6, val<unsigned long long int> var_7, val<int> var_10, val<unsigned short> var_11, val<int> zero, val<bool*> var_15, val<unsigned long long int*> var_16, val<long long int*> var_17, val<long long int*> var_18) {
    *var_15 = ((/* implicit */val<bool>) min((*var_15), (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<unsigned long long int>) ((var_10) | (2147483647)))) : (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<short>)(-32767 - 1))) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) (val<bool>)0))))) ? (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) (val<short>)-32757))))) : (min((18446744073709551615ULL), (((/* implicit */val<unsigned long long int>) (val<unsigned char>)240)))))))))));
    *var_16 = ((((/* implicit */val<bool>) (+(var_0)))) ? (((/* implicit */val<unsigned long long int>) (((val<bool>)0) ? (((var_2) * (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_5))))) : (((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_11)) * (((/* implicit */val<int>) var_6)))))))) : (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned char>)16)) ? (((/* implicit */val<int>) (val<short>)-32757)) : (((/* implicit */val<int>) var_5))))) ? (((/* implicit */val<unsigned long long int>) max((((/* implicit */val<unsigned int>) (val<unsigned char>)16)), (3078440292U)))) : (((var_7) / (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)-63))))))));
    *var_17 = ((/* implicit */val<long long int>) var_3);
    *var_18 = ((/* implicit */val<long long int>) var_11);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1014314696;
long long int var_2 = 7841803568933187024LL;
bool var_3 = (bool)1;
bool var_5 = (bool)0;
signed char var_6 = (signed char)56;
unsigned long long int var_7 = 2114802203432107484ULL;
int var_10 = -1864621755;
unsigned short var_11 = (unsigned short)31098;
int zero = 0;
bool var_15 = (bool)1;
unsigned long long int var_16 = 7720327675846526060ULL;
long long int var_17 = -6373561682567659037LL;
long long int var_18 = 1377309753583174824LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != 1741488ULL;
    value_mismatch |= var_17 != 1LL;
    value_mismatch |= var_18 != 31098LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_5, var_6, var_7, var_10, var_11, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
