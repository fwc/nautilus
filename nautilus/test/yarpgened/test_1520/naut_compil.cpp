/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1520
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1520
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
void test(val<unsigned int> var_10, val<int> zero, val<unsigned char*> var_16, val<unsigned char*> var_17) {
    *var_16 |= ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) 2587409361U)) ? (((/* implicit */val<int>) (val<short>)10554)) : (((/* implicit */val<int>) (val<signed char>)-56))));
    *var_17 = ((/* implicit */val<unsigned char>) var_10);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_10 = 131921643U;
int zero = 0;
unsigned char var_16 = (unsigned char)135;
unsigned char var_17 = (unsigned char)147;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned char)191;
    value_mismatch |= var_17 != (unsigned char)235;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_10, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
