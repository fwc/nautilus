/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2842
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2842
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
void test(val<int> zero, val<unsigned short*> var_14, val<unsigned int*> var_15, val<unsigned short*> var_16) {
    *var_14 = ((/* implicit */val<unsigned short>) 6249126219433094351LL);
    *var_15 = ((/* implicit */val<unsigned int>) -6249126219433094352LL);
    *var_16 = ((/* implicit */val<unsigned short>) max((((/* implicit */val<long long int>) (val<bool>)1)), (-6249126219433094351LL)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned short var_14 = (unsigned short)54846;
unsigned int var_15 = 2905242366U;
unsigned short var_16 = (unsigned short)15885;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned short)44239;
    value_mismatch |= var_15 != 236737328U;
    value_mismatch |= var_16 != (unsigned short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
