/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8834
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8834
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
void test(val<signed char> var_1, val<signed char> var_9, val<int> zero, val<signed char*> var_11, val<signed char*> var_12, val<unsigned long long int*> var_13) {
    *var_11 = ((/* implicit */val<signed char>) max((*var_11), (((/* implicit */val<signed char>) (+(((/* implicit */val<int>) (val<signed char>)67)))))));
    *var_12 ^= var_1;
    *var_13 = ((/* implicit */val<unsigned long long int>) max((*var_13), (((/* implicit */val<unsigned long long int>) var_9))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)87;
signed char var_9 = (signed char)-80;
int zero = 0;
signed char var_11 = (signed char)-17;
signed char var_12 = (signed char)-89;
unsigned long long int var_13 = 14136154427900850025ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (signed char)67;
    value_mismatch |= var_12 != (signed char)-16;
    value_mismatch |= var_13 != 18446744073709551536ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_9, zero, &var_11, &var_12, &var_13);
  checksum();
}
