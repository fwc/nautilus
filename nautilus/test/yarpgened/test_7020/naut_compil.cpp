/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7020
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7020
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
void test(val<unsigned long long int> var_1, val<int> var_7, val<unsigned short> var_9, val<int> zero, val<signed char*> var_20, val<unsigned long long int*> var_21) {
    *var_20 ^= ((/* implicit */val<signed char>) max((((/* implicit */val<unsigned long long int>) var_9)), (var_1)));
    *var_21 = ((/* implicit */val<unsigned long long int>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13873908462999929493ULL;
int var_7 = 990938023;
unsigned short var_9 = (unsigned short)42416;
int zero = 0;
signed char var_20 = (signed char)-104;
unsigned long long int var_21 = 11177512865979628753ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (signed char)13;
    value_mismatch |= var_21 != 990938023ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_7, var_9, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
