/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7331
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7331
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
void test(val<unsigned char> var_0, val<int> zero, val<unsigned int*> var_16, val<unsigned int*> var_17) {
    *var_16 |= ((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) (val<signed char>)62))));
    *var_17 = ((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) var_0))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)234;
int zero = 0;
unsigned int var_16 = 1008000391U;
unsigned int var_17 = 963501521U;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 4294967239U;
    value_mismatch |= var_17 != 234U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
