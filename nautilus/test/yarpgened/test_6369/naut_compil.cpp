/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6369
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6369
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
void test(val<signed char> var_1, val<int> var_10, val<int> zero, val<int*> var_17, val<unsigned short*> var_18) {
    *var_17 = min((((/* implicit */val<int>) var_1)), (var_10));
    *var_18 = ((/* implicit */val<unsigned short>) (val<signed char>)-76);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)50;
int var_10 = -1467279526;
int zero = 0;
int var_17 = -1868028871;
unsigned short var_18 = (unsigned short)47002;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != -1467279526;
    value_mismatch |= var_18 != (unsigned short)65460;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_10, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
