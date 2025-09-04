/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4774
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4774
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
void test(val<short> var_2, val<int> var_8, val<unsigned int> var_9, val<int> zero, val<unsigned long long int*> var_12, val<int*> var_13, val<signed char*> var_14) {
    *var_12 = ((/* implicit */val<unsigned long long int>) var_2);
    *var_13 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) (((~(var_9))) ^ (max((((/* implicit */val<unsigned int>) var_2)), (var_9)))))) || (((/* implicit */val<bool>) 512665230U))));
    *var_14 = ((/* implicit */val<signed char>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)18392;
int var_8 = 1566483558;
unsigned int var_9 = 2316359107U;
int zero = 0;
unsigned long long int var_12 = 6779121174036093933ULL;
int var_13 = 749438293;
signed char var_14 = (signed char)-38;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 18392ULL;
    value_mismatch |= var_13 != 1;
    value_mismatch |= var_14 != (signed char)102;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_8, var_9, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
