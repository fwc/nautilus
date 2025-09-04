/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5480
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5480
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
void test(val<signed char> var_6, val<unsigned short> var_14, val<int> zero, val<unsigned int*> var_15, val<unsigned short*> var_16) {
    *var_15 = ((/* implicit */val<unsigned int>) var_14);
    *var_16 |= ((/* implicit */val<unsigned short>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)82;
unsigned short var_14 = (unsigned short)13963;
int zero = 0;
unsigned int var_15 = 269431833U;
unsigned short var_16 = (unsigned short)33076;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 13963U;
    value_mismatch |= var_16 != (unsigned short)33142;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_14, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
