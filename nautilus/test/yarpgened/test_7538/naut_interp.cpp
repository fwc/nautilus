/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7538
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7538
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
void test(val<short> var_9, val<short> var_15, val<int> zero, val<unsigned int*> var_20, val<signed char*> var_21, val<unsigned char*> var_22, val<unsigned int*> var_23) {
    *var_20 = ((/* implicit */val<unsigned int>) var_9);
    *var_21 = ((/* implicit */val<signed char>) max((*var_21), (((/* implicit */val<signed char>) var_15))));
    *var_22 -= ((/* implicit */val<unsigned char>) var_15);
    *var_23 = 3867842475U;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)243;
short var_15 = (short)-11307;
int zero = 0;
unsigned int var_20 = 1974310693U;
signed char var_21 = (signed char)-1;
unsigned char var_22 = (unsigned char)239;
unsigned int var_23 = 3140858887U;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 243U;
    value_mismatch |= var_21 != (signed char)-1;
    value_mismatch |= var_22 != (unsigned char)26;
    value_mismatch |= var_23 != 3867842475U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, var_15, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
}
