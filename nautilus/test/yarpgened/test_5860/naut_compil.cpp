/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5860
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5860
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
void test(val<unsigned int> var_3, val<unsigned int> var_11, val<short> var_12, val<int> zero, val<short*> var_18, val<short*> var_19) {
    *var_18 -= ((/* implicit */val<short>) (-(min((((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1))) & (var_3))), (((/* implicit */val<unsigned int>) var_12))))));
    *var_19 = ((/* implicit */val<short>) min((*var_19), (((/* implicit */val<short>) var_11))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1628851424U;
unsigned int var_11 = 703231141U;
short var_12 = (short)-29843;
int zero = 0;
short var_18 = (short)-16970;
short var_19 = (short)10166;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)-16970;
    value_mismatch |= var_19 != (short)10166;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_11, var_12, zero, &var_18, &var_19);
  checksum();
}
