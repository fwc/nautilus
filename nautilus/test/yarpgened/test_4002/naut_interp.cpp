/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4002
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4002
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
void test(val<signed char> var_1, val<unsigned short> var_2, val<int> zero, val<unsigned int*> var_10, val<short*> var_11) {
    *var_10 ^= ((/* implicit */val<unsigned int>) var_2);
    *var_11 = ((/* implicit */val<short>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)91;
unsigned short var_2 = (unsigned short)9637;
int zero = 0;
unsigned int var_10 = 1731090891U;
short var_11 = (short)-22680;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 1731099758U;
    value_mismatch |= var_11 != (short)91;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
