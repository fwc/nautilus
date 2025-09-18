/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3887
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3887
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
void test(val<short> var_0, val<int> var_6, val<short> var_7, val<short> var_9, val<short> var_11, val<short> var_13, val<int> zero, val<int*> var_16, val<short*> var_17) {
    *var_16 = ((val<int>) (+(((/* implicit */val<int>) var_9))));
    *var_17 += ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((((/* implicit */val<int>) var_11)), (-451628270)))) ? (((/* implicit */val<int>) min((var_7), (var_0)))) : (((/* implicit */val<int>) (val<short>)-2488))))) ? (max((((/* implicit */val<int>) var_13)), (((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_13)) : (((/* implicit */val<int>) (val<short>)2467)))))) : (var_6)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25545;
int var_6 = -409100061;
short var_7 = (short)-9161;
short var_9 = (short)-30774;
short var_11 = (short)25764;
short var_13 = (short)14144;
int zero = 0;
int var_16 = -1392091355;
short var_17 = (short)-28520;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != -30774;
    value_mismatch |= var_17 != (short)-14376;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, var_7, var_9, var_11, var_13, zero, &var_16, &var_17);
  checksum();
}
