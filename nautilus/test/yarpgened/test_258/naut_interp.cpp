/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 258
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=258
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
void test(val<short> var_5, val<short> var_7, val<unsigned long long int> var_10, val<unsigned int> var_13, val<int> zero, val<int*> var_14, val<short*> var_15) {
    *var_14 = ((/* implicit */val<int>) var_5);
    *var_15 = ((/* implicit */val<short>) ((val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<short>)-4780)) ? (((/* implicit */val<long long int>) var_13)) : (9223372036854775807LL)))) ? (((var_10) & (((/* implicit */val<unsigned long long int>) 6)))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_7))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)22307;
short var_7 = (short)-23254;
unsigned long long int var_10 = 15610907864987868195ULL;
unsigned int var_13 = 1661441705U;
int zero = 0;
int var_14 = 922616881;
short var_15 = (short)12813;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 22307;
    value_mismatch |= var_15 != (short)2;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_7, var_10, var_13, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
