/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9950
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9950
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
void test(val<unsigned long long int> var_3, val<unsigned int> var_6, val<short> var_11, val<unsigned long long int> var_12, val<int> zero, val<unsigned short*> var_13, val<unsigned short*> var_14, val<unsigned long long int*> var_15, val<unsigned char*> var_16, val<short*> var_17) {
    *var_13 = ((/* implicit */val<unsigned short>) var_11);
    *var_14 -= ((/* implicit */val<unsigned short>) var_11);
    *var_15 = ((var_12) * (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<unsigned short>) ((val<unsigned short>) 3440645241U))))));
    *var_16 -= ((/* implicit */val<unsigned char>) var_3);
    *var_17 = ((/* implicit */val<short>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5471144831186753305ULL;
unsigned int var_6 = 3083729295U;
short var_11 = (short)-26889;
unsigned long long int var_12 = 17405614621707453013ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)33012;
unsigned short var_14 = (unsigned short)56980;
unsigned long long int var_15 = 16034635015918218460ULL;
unsigned char var_16 = (unsigned char)130;
short var_17 = (short)-6819;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)38647;
    value_mismatch |= var_14 != (unsigned short)18333;
    value_mismatch |= var_15 != 3676787875028500013ULL;
    value_mismatch |= var_16 != (unsigned char)105;
    value_mismatch |= var_17 != (short)-1649;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_6, var_11, var_12, zero, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
