/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2552
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2552
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
void test(val<unsigned long long int> var_7, val<short> var_11, val<int> zero, val<short*> var_12, val<signed char*> var_13, val<unsigned long long int*> var_14) {
    *var_12 = var_11;
    *var_13 = ((/* implicit */val<signed char>) var_7);
    *var_14 += ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)-70))) * (13484897930050738689ULL));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 15263846877235018297ULL;
short var_11 = (short)6668;
int zero = 0;
short var_12 = (short)-17588;
signed char var_13 = (signed char)-101;
unsigned long long int var_14 = 3740124954882127781ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (short)6668;
    value_mismatch |= var_13 != (signed char)57;
    value_mismatch |= var_14 != 581217610517551967ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
