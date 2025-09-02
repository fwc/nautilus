/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2685
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2685
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
void test(val<short> var_0, val<short> var_3, val<bool> var_5, val<long long int> var_7, val<short> var_8, val<unsigned int> var_9, val<short> var_10, val<int> zero, val<unsigned char*> var_11, val<long long int*> var_12, val<unsigned int*> var_13) {
    *var_11 = ((/* implicit */val<unsigned char>) var_8);
    *var_12 |= ((((/* implicit */val<bool>) (-(((((/* implicit */val<bool>) (val<unsigned short>)6782)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) (val<unsigned char>)127))))))) ? (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) (val<unsigned char>)127)) : (((/* implicit */val<int>) (val<bool>)1))))) ? (var_7) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_0))))) : (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) max((var_3), (((/* implicit */val<short>) (val<bool>)1))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5))) : (var_9)))));
    *var_13 = ((/* implicit */val<unsigned int>) 1651649685344664224ULL);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28368;
short var_3 = (short)-14073;
bool var_5 = (bool)0;
long long int var_7 = -1580252934207553801LL;
short var_8 = (short)-14397;
unsigned int var_9 = 3641413857U;
short var_10 = (short)-30332;
int zero = 0;
unsigned char var_11 = (unsigned char)83;
long long int var_12 = 722341114627359223LL;
unsigned int var_13 = 920133992U;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned char)195;
    value_mismatch |= var_12 != -1578558404118560777LL;
    value_mismatch |= var_13 != 1415232160U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_5, var_7, var_8, var_9, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
