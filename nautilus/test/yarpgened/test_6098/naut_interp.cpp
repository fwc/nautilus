/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6098
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6098
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
void test(val<short> var_0, val<unsigned char> var_1, val<int> var_2, val<int> var_3, val<short> var_9, val<int> var_11, val<signed char> var_13, val<int> zero, val<unsigned int*> var_14, val<short*> var_15, val<int*> var_16) {
    *var_14 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_13)) >= (var_11)));
    *var_15 = ((/* implicit */val<short>) var_2);
    *var_16 = ((((/* implicit */val<bool>) ((val<long long int>) var_1))) ? (((/* implicit */val<int>) min((((/* implicit */val<short>) ((((/* implicit */val<int>) var_1)) <= (((/* implicit */val<int>) var_9))))), (var_0)))) : (var_3));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5419;
unsigned char var_1 = (unsigned char)163;
int var_2 = -1790469760;
int var_3 = -475020820;
short var_9 = (short)18686;
int var_11 = -1076306938;
signed char var_13 = (signed char)-89;
int zero = 0;
unsigned int var_14 = 3537641596U;
short var_15 = (short)-19833;
int var_16 = 1738943384;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 1U;
    value_mismatch |= var_15 != (short)-26240;
    value_mismatch |= var_16 != -5419;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_9, var_11, var_13, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
