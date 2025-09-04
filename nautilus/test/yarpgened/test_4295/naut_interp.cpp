/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4295
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4295
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
void test(val<unsigned char> var_3, val<short> var_5, val<short> var_6, val<signed char> var_8, val<unsigned char> var_12, val<int> zero, val<unsigned int*> var_14, val<int*> var_15) {
    *var_14 = ((/* implicit */val<unsigned int>) max((((/* implicit */val<int>) var_12)), (((((/* implicit */val<bool>) (val<signed char>)103)) ? (((/* implicit */val<int>) var_6)) : (((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) (val<unsigned short>)65533)) : (((/* implicit */val<int>) var_5))))))));
    *var_15 ^= ((/* implicit */val<int>) ((val<unsigned short>) (+(((((/* implicit */val<int>) var_3)) >> (((((/* implicit */val<int>) (val<unsigned char>)134)) - (120))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)243;
short var_5 = (short)-20989;
short var_6 = (short)-3332;
signed char var_8 = (signed char)92;
unsigned char var_12 = (unsigned char)216;
int zero = 0;
unsigned int var_14 = 212926335U;
int var_15 = -328152187;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 216U;
    value_mismatch |= var_15 != -328152187;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_6, var_8, var_12, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
