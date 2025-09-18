/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3090
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3090
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
void test(val<short> var_4, val<int> zero, val<long long int*> var_19, val<signed char*> var_20, val<unsigned long long int*> var_21) {
    *var_19 |= ((/* implicit */val<long long int>) var_4);
    *var_20 |= ((/* implicit */val<signed char>) 13ULL);
    *var_21 = ((/* implicit */val<unsigned long long int>) (val<bool>)1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)5823;
int zero = 0;
long long int var_19 = 3494643017356920788LL;
signed char var_20 = (signed char)90;
unsigned long long int var_21 = 4267021526122058738ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 3494643017356924927LL;
    value_mismatch |= var_20 != (signed char)95;
    value_mismatch |= var_21 != 1ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, zero, &var_19, &var_20, &var_21);
  checksum();
}
