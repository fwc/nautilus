/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9882
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9882
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
void test(val<signed char> var_5, val<int> zero, val<unsigned long long int*> var_15, val<unsigned short*> var_16, val<int*> var_17) {
    *var_15 = ((/* implicit */val<unsigned long long int>) (val<unsigned short>)3546);
    *var_16 = ((/* implicit */val<unsigned short>) (-(((val<int>) (val<unsigned short>)19388))));
    *var_17 = ((/* implicit */val<int>) (((val<bool>)1) && (((/* implicit */val<bool>) var_5))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-62;
int zero = 0;
unsigned long long int var_15 = 15307531556608546229ULL;
unsigned short var_16 = (unsigned short)39469;
int var_17 = 1356555386;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 3546ULL;
    value_mismatch |= var_16 != (unsigned short)46148;
    value_mismatch |= var_17 != 1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
