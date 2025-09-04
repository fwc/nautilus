/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8519
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8519
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
void test(val<signed char> var_11, val<bool> var_12, val<int> zero, val<signed char*> var_15, val<int*> var_16) {
    *var_15 = ((/* implicit */val<signed char>) min((((((/* implicit */val<int>) ((val<bool>) (val<short>)-15593))) ^ (((/* implicit */val<int>) var_12)))), (((/* implicit */val<int>) var_11))));
    *var_16 = ((/* implicit */val<int>) (val<bool>)1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_11 = (signed char)52;
bool var_12 = (bool)1;
int zero = 0;
signed char var_15 = (signed char)-127;
int var_16 = -1026340661;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)0;
    value_mismatch |= var_16 != 1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_11, var_12, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
