/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9257
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9257
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
void test(val<int> var_0, val<short> var_3, val<short> var_12, val<unsigned int> var_13, val<int> zero, val<short*> var_14, val<short*> var_15, val<unsigned short*> var_16) {
    *var_14 = ((/* implicit */val<short>) (~(var_13)));
    *var_15 = ((/* implicit */val<short>) (~(((/* implicit */val<int>) (val<bool>)1))));
    *var_16 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) (val<short>)32767))))) ? (((/* implicit */val<int>) ((val<short>) -153496695))) : (var_0)))) ? (((val<int>) min((4294967295U), (1U)))) : ((-(((/* implicit */val<int>) var_3))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1766715356;
short var_3 = (short)-28779;
short var_12 = (short)8615;
unsigned int var_13 = 701481806U;
int zero = 0;
short var_14 = (short)20732;
short var_15 = (short)4200;
unsigned short var_16 = (unsigned short)42798;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (short)15537;
    value_mismatch |= var_15 != (short)-2;
    value_mismatch |= var_16 != (unsigned short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_12, var_13, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
