/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1049
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1049
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
void test(val<unsigned int> var_1, val<int> zero, val<unsigned int*> var_20, val<signed char*> var_21) {
    *var_20 = var_1;
    *var_21 = ((/* implicit */val<signed char>) max((2596392411U), (((/* implicit */val<unsigned int>) (val<signed char>)61))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4178197480U;
int zero = 0;
unsigned int var_20 = 1386670234U;
signed char var_21 = (signed char)50;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 4178197480U;
    value_mismatch |= var_21 != (signed char)-37;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, zero, &var_20, &var_21);
  checksum();
}
