/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7245
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7245
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
void test(val<signed char> var_0, val<unsigned short> var_5, val<unsigned char> var_10, val<int> zero, val<long long int*> var_20, val<long long int*> var_21, val<short*> var_22) {
    *var_20 &= ((/* implicit */val<long long int>) var_5);
    *var_21 = ((/* implicit */val<long long int>) (-(((/* implicit */val<int>) var_0))));
    *var_22 = ((/* implicit */val<short>) ((((/* implicit */val<int>) var_10)) / (((-720753057) - (((/* implicit */val<int>) (val<signed char>)51))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-35;
unsigned short var_5 = (unsigned short)24023;
unsigned char var_10 = (unsigned char)176;
int zero = 0;
long long int var_20 = -5904591961874138504LL;
long long int var_21 = -8708058453705828LL;
short var_22 = (short)-20391;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 22608LL;
    value_mismatch |= var_21 != 35LL;
    value_mismatch |= var_22 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_10, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
