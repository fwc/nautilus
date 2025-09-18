/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5150
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5150
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
void test(val<int> var_2, val<long long int> var_4, val<unsigned int> var_10, val<short> var_13, val<unsigned int> var_14, val<int> zero, val<signed char*> var_19, val<long long int*> var_20) {
    *var_19 = ((/* implicit */val<signed char>) ((((((/* implicit */val<bool>) var_4)) ? (((3793064603U) + (((/* implicit */val<unsigned int>) var_2)))) : ((-(var_10))))) >> (((((/* implicit */val<int>) var_13)) + (19154)))));
    *var_20 = ((/* implicit */val<long long int>) var_14);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 918643203;
long long int var_4 = 2252739696310991152LL;
unsigned int var_10 = 1172456295U;
short var_13 = (short)-19127;
unsigned int var_14 = 1458193136U;
int zero = 0;
signed char var_19 = (signed char)-4;
long long int var_20 = 4197230430350130958LL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)3;
    value_mismatch |= var_20 != 1458193136LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_10, var_13, var_14, zero, &var_19, &var_20);
  checksum();
}
