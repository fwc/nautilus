/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5123
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5123
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
void test(val<int> var_11, val<int> zero, val<int*> var_17, val<int*> var_18) {
    *var_17 = var_11;
    *var_18 = ((val<int>) ((((/* implicit */val<bool>) -1)) ? (((((/* implicit */val<bool>) (-2147483647 - 1))) ? (-1995315852) : (1995315852))) : (254)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_11 = 350699831;
int zero = 0;
int var_17 = -778922393;
int var_18 = -1041564874;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 350699831;
    value_mismatch |= var_18 != -1995315852;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_11, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
