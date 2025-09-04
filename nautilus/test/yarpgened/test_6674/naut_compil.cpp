/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6674
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6674
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
void test(val<short> var_0, val<unsigned int> var_2, val<bool> var_3, val<unsigned int> var_4, val<int> var_5, val<bool> var_6, val<bool> var_7, val<unsigned short> var_8, val<unsigned int> var_9, val<unsigned int> var_10, val<int> zero, val<int*> var_11, val<unsigned int*> var_12, val<bool*> var_13) {
    if (((/* implicit */val<bool>) max((480U), (((/* implicit */val<unsigned int>) -749847067)))))
    {
        *var_11 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<unsigned int>) var_5)) : (((((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_0)) % (((/* implicit */val<int>) var_6))))) + (3191825197U)))));
        *var_12 = ((((/* implicit */val<bool>) (((((val<bool>)0) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)14569))) : (1912715480U))) & (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_8)))))) ? (max((var_4), (var_10))) : (((((/* implicit */val<bool>) ((var_7) ? (((/* implicit */val<int>) (val<unsigned short>)64687)) : (((/* implicit */val<int>) (val<short>)11785))))) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) 749847066)) ? (((/* implicit */val<int>) (val<unsigned short>)40880)) : (((/* implicit */val<int>) var_3))))) : ((~(var_10))))));
    }

    *var_13 = ((((/* implicit */val<bool>) var_2)) || (((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_0))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1298;
unsigned int var_2 = 1447746843U;
bool var_3 = (bool)1;
unsigned int var_4 = 3554239592U;
int var_5 = -1955307956;
bool var_6 = (bool)1;
bool var_7 = (bool)0;
unsigned short var_8 = (unsigned short)49265;
unsigned int var_9 = 2879002879U;
unsigned int var_10 = 2851443315U;
int zero = 0;
int var_11 = -1824180428;
unsigned int var_12 = 1073253853U;
bool var_13 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != -1955307956;
    value_mismatch |= var_12 != 3554239592U;
    value_mismatch |= var_13 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
