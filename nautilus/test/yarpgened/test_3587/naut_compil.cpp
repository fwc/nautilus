/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3587
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3587
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
void test(val<int> var_4, val<int> zero, val<unsigned int*> var_13, val<unsigned char*> var_14) {
    *var_13 = ((/* implicit */val<unsigned int>) (!((val<bool>)0)));
    *var_14 = ((/* implicit */val<unsigned char>) var_4);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 166152186;
int zero = 0;
unsigned int var_13 = 3459092818U;
unsigned char var_14 = (unsigned char)28;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 1U;
    value_mismatch |= var_14 != (unsigned char)250;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
