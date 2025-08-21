/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 575
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=575
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
void test(val<short> var_2, val<signed char> var_4, val<unsigned short> var_9, val<unsigned long long int> var_10, val<unsigned char> var_11, val<int> zero, val<unsigned int*> var_14, val<signed char*> var_15, val<unsigned char*> var_16) {
    *var_14 |= ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2))) : (var_10)))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_11))) : (var_10)))) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) var_9))));
    *var_15 = ((/* implicit */val<signed char>) var_2);
    *var_16 = ((/* implicit */val<unsigned char>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-22381;
signed char var_4 = (signed char)-95;
unsigned short var_9 = (unsigned short)12749;
unsigned long long int var_10 = 15730823434705418443ULL;
unsigned char var_11 = (unsigned char)12;
int zero = 0;
unsigned int var_14 = 1730953652U;
signed char var_15 = (signed char)52;
unsigned char var_16 = (unsigned char)237;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 4294961591U;
    value_mismatch |= var_15 != (signed char)-109;
    value_mismatch |= var_16 != (unsigned char)147;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_9, var_10, var_11, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
