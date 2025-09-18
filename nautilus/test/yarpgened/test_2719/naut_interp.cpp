/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2719
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2719
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
void test(val<long long int> var_2, val<bool> var_11, val<long long int> var_14, val<unsigned int> var_16, val<short> var_18, val<int> zero, val<unsigned int*> var_20, val<short*> var_21) {
    *var_20 -= ((/* implicit */val<unsigned int>) (((+(var_2))) * (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) -1110985764)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_11))) : (var_16))))));
    *var_21 = ((/* implicit */val<short>) ((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<int>) (val<short>)4417)) : (((/* implicit */val<int>) var_18))))) ? (((/* implicit */val<int>) min((((/* implicit */val<short>) (val<bool>)0)), ((val<short>)14429)))) : ((~(((/* implicit */val<int>) var_18)))))) <= ((+(((/* implicit */val<int>) (val<bool>)0))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -873633221262629009LL;
bool var_11 = (bool)0;
long long int var_14 = 394668378544674606LL;
unsigned int var_16 = 35527390U;
short var_18 = (short)23346;
int zero = 0;
unsigned int var_20 = 3010920122U;
short var_21 = (short)4049;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 3010920122U;
    value_mismatch |= var_21 != (short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_11, var_14, var_16, var_18, zero, &var_20, &var_21);
  checksum();
}
