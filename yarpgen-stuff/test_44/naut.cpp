/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 44
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=44
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
void test(val<signed char> var_5, val<bool> var_6, val<int> zero, val<signed char*> var_10, val<long long int*> var_11) {
    *var_10 = ((val<signed char>) max((268435455LL), (((/* implicit */val<long long int>) var_6))));
    *var_11 = ((/* implicit */val<long long int>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)54;
bool var_6 = (bool)1;
int zero = 0;
signed char var_10 = (signed char)22;
long long int var_11 = 5883589507158553935LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (signed char)-1;
    value_mismatch |= var_11 != 54LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_6, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
