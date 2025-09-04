/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8776
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8776
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
void test(val<unsigned char> var_13, val<unsigned char> var_17, val<int> zero, val<unsigned int*> var_18, val<unsigned char*> var_19) {
    *var_18 = ((/* implicit */val<unsigned int>) var_13);
    *var_19 = var_17;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_13 = (unsigned char)66;
unsigned char var_17 = (unsigned char)144;
int zero = 0;
unsigned int var_18 = 2020924342U;
unsigned char var_19 = (unsigned char)97;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 66U;
    value_mismatch |= var_19 != (unsigned char)144;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_13, var_17, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
