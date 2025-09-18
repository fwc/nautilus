/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3796
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3796
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
void test(val<short> var_3, val<unsigned int> var_4, val<unsigned long long int> var_5, val<unsigned int> var_11, val<int> zero, val<signed char*> var_12, val<unsigned int*> var_13, val<unsigned int*> var_14) {
    *var_12 = ((/* implicit */val<signed char>) var_5);
    *var_13 *= ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) max(((val<short>)-1), ((val<short>)-1)))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((var_11) < (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3))))))) : (min((0LL), (((/* implicit */val<long long int>) var_4))))));
    *var_14 += var_4;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-9841;
unsigned int var_4 = 3291619662U;
unsigned long long int var_5 = 3207760617887470264ULL;
unsigned int var_11 = 1334980308U;
int zero = 0;
signed char var_12 = (signed char)4;
unsigned int var_13 = 690590598U;
unsigned int var_14 = 3590612036U;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (signed char)-72;
    value_mismatch |= var_13 != 690590598U;
    value_mismatch |= var_14 != 2587264402U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_5, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
}
