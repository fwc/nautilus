/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 799
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=799
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
void test(val<unsigned char> var_5, val<int> zero, val<unsigned long long int*> var_10, val<int*> var_11) {
    *var_10 = ((/* implicit */val<unsigned long long int>) max((((/* implicit */val<int>) (val<signed char>)-1)), (2147483647)));
    *var_11 = ((/* implicit */val<int>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)13;
int zero = 0;
unsigned long long int var_10 = 2560879066199018117ULL;
int var_11 = 839178310;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 2147483647ULL;
    value_mismatch |= var_11 != 13;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
