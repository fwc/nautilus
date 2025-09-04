/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6403
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6403
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
void test(val<long long int> var_0, val<bool> var_3, val<unsigned short> var_4, val<unsigned int> var_5, val<unsigned short> var_6, val<int> var_7, val<int> var_10, val<int> zero, val<unsigned short*> var_11, val<short*> var_12, val<long long int*> var_13) {
    *var_11 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_6)) & (((/* implicit */val<int>) var_6))))) ? (((val<unsigned int>) (val<bool>)0)) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3)))))) ? (var_5) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) (val<short>)22158)) > (((((var_10) + (2147483647))) << (((var_0) - (3125301508711053915LL)))))))))));
    if (((/* implicit */val<bool>) (val<short>)(-32767 - 1)))
    {
        *var_12 = ((/* implicit */val<short>) ((var_3) ? (((/* implicit */val<int>) var_4)) : (((((var_7) + (2147483647))) >> ((((-(var_10))) - (1166483207)))))));
        *var_13 = ((/* implicit */val<long long int>) var_6);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3125301508711053915LL;
bool var_3 = (bool)0;
unsigned short var_4 = (unsigned short)32610;
unsigned int var_5 = 4089877309U;
unsigned short var_6 = (unsigned short)29861;
int var_7 = -1467423093;
int var_10 = -1166483210;
int zero = 0;
unsigned short var_11 = (unsigned short)3666;
short var_12 = (short)-14654;
long long int var_13 = 7328436192199253683LL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned short)0;
    value_mismatch |= var_12 != (short)7377;
    value_mismatch |= var_13 != 29861LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_5, var_6, var_7, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
