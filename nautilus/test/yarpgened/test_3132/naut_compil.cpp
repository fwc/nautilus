/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3132
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3132
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
void test(val<signed char> var_0, val<bool> var_13, val<int> zero, val<signed char*> var_17, val<int*> var_18) {
    *var_17 = ((/* implicit */val<signed char>) var_13);
    *var_18 = ((/* implicit */val<int>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-8;
bool var_13 = (bool)1;
int zero = 0;
signed char var_17 = (signed char)-49;
int var_18 = -1575362537;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (signed char)1;
    value_mismatch |= var_18 != -8;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_13, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
