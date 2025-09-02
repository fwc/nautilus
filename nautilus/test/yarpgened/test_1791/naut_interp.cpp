/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1791
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1791
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
void test(val<bool> var_16, val<int> zero, val<long long int*> var_20, val<long long int*> var_21) {
    *var_20 = ((/* implicit */val<long long int>) (val<signed char>)113);
    *var_21 = ((/* implicit */val<long long int>) var_16);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_16 = (bool)0;
int zero = 0;
long long int var_20 = 5373412478240969705LL;
long long int var_21 = 8052396677215475168LL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 113LL;
    value_mismatch |= var_21 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_16, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
