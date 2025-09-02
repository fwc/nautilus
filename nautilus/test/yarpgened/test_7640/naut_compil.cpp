/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7640
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7640
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
void test(val<signed char> var_10, val<bool> var_13, val<int> zero, val<long long int*> var_16, val<int*> var_17, val<signed char*> var_18) {
    *var_16 = ((/* implicit */val<long long int>) (((val<bool>)1) || ((val<bool>)1)));
    *var_17 = ((/* implicit */val<int>) ((val<bool>) var_13));
    *var_18 = ((/* implicit */val<signed char>) ((((/* implicit */val<int>) var_10)) ^ (((/* implicit */val<int>) (val<bool>)1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_10 = (signed char)13;
bool var_13 = (bool)0;
int zero = 0;
long long int var_16 = 6659802120133900613LL;
int var_17 = 1534303861;
signed char var_18 = (signed char)-16;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 1LL;
    value_mismatch |= var_17 != 0;
    value_mismatch |= var_18 != (signed char)12;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_10, var_13, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
