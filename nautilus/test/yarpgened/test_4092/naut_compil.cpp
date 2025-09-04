/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4092
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4092
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
void test(val<int> var_13, val<int> zero, val<unsigned int*> var_18, val<signed char*> var_19) {
    *var_18 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (val<unsigned short>)3)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<unsigned short>)16128))));
    *var_19 -= ((/* implicit */val<signed char>) min((((/* implicit */val<int>) (val<unsigned short>)22425)), (var_13)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_13 = -971226171;
int zero = 0;
unsigned int var_18 = 1542449345U;
signed char var_19 = (signed char)64;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 1U;
    value_mismatch |= var_19 != (signed char)123;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_13, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
