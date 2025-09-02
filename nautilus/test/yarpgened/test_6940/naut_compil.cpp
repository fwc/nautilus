/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6940
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6940
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
void test(val<bool> var_1, val<unsigned long long int> var_2, val<unsigned long long int> var_3, val<short> var_4, val<short> var_11, val<int> zero, val<signed char*> var_17, val<unsigned long long int*> var_18) {
    *var_17 = ((/* implicit */val<signed char>) (-((+(((((/* implicit */val<int>) var_11)) + (((/* implicit */val<int>) (val<bool>)1))))))));
    *var_18 = min((((min((var_2), (((/* implicit */val<unsigned long long int>) var_4)))) % (((val<unsigned long long int>) var_1)))), (var_3));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)1;
unsigned long long int var_2 = 2461393125409121476ULL;
unsigned long long int var_3 = 15495695400626899746ULL;
short var_4 = (short)-25253;
short var_11 = (short)-20022;
int zero = 0;
signed char var_17 = (signed char)-40;
unsigned long long int var_18 = 18048509480180050568ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (signed char)53;
    value_mismatch |= var_18 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_11, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
