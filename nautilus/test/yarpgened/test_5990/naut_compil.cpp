/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5990
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5990
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
void test(val<int> zero, val<unsigned int*> var_20, val<unsigned int*> var_21, val<unsigned int*> var_22) {
    *var_20 = ((/* implicit */val<unsigned int>) (val<bool>)1);
    *var_21 = ((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) (+(((/* implicit */val<int>) (!((val<bool>)1)))))))));
    *var_22 = ((/* implicit */val<unsigned int>) ((val<bool>) -2147483644));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned int var_20 = 939355996U;
unsigned int var_21 = 2256575151U;
unsigned int var_22 = 2478906295U;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 1U;
    value_mismatch |= var_21 != 1U;
    value_mismatch |= var_22 != 1U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_20, &var_21, &var_22);
  checksum();
}
