/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2026
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2026
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
void test(val<short> var_3, val<unsigned long long int> var_4, val<int> zero, val<short*> var_13, val<unsigned int*> var_14, val<signed char*> var_15) {
    *var_13 -= ((/* implicit */val<short>) ((val<int>) 8755095167359946216LL));
    *var_14 = ((/* implicit */val<unsigned int>) var_4);
    *var_15 = ((/* implicit */val<signed char>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)747;
unsigned long long int var_4 = 15712331661979047643ULL;
int zero = 0;
short var_13 = (short)-28367;
unsigned int var_14 = 875747157U;
signed char var_15 = (signed char)123;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (short)841;
    value_mismatch |= var_14 != 694310619U;
    value_mismatch |= var_15 != (signed char)-21;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
