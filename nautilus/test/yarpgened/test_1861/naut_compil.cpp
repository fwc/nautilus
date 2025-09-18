/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1861
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1861
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
void test(val<signed char> var_3, val<signed char> var_7, val<int> zero, val<short*> var_14, val<unsigned long long int*> var_15) {
    *var_14 = ((/* implicit */val<short>) ((val<unsigned int>) var_7));
    *var_15 = ((/* implicit */val<unsigned long long int>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-34;
signed char var_7 = (signed char)(-127 - 1);
int zero = 0;
short var_14 = (short)4600;
unsigned long long int var_15 = 2635599450023634258ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (short)-128;
    value_mismatch |= var_15 != 18446744073709551582ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_7, zero, &var_14, &var_15);
  checksum();
}
