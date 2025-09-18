/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8093
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8093
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
void test(val<signed char> var_5, val<short> var_10, val<int> zero, val<int*> var_12, val<long long int*> var_13) {
    *var_12 = ((/* implicit */val<int>) var_5);
    *var_13 = ((/* implicit */val<long long int>) var_10);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-3;
short var_10 = (short)-25653;
int zero = 0;
int var_12 = 1545381928;
long long int var_13 = 141984520740765937LL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != -3;
    value_mismatch |= var_13 != -25653LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_10, zero, &var_12, &var_13);
  checksum();
}
