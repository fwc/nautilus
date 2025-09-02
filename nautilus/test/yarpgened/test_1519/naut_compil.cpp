/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1519
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1519
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
void test(val<short> var_1, val<long long int> var_11, val<short> var_13, val<long long int> var_14, val<unsigned short> var_15, val<short> var_16, val<unsigned short> var_18, val<int> zero, val<unsigned short*> var_19, val<short*> var_20) {
    *var_19 -= ((/* implicit */val<unsigned short>) var_16);
    *var_20 ^= ((/* implicit */val<short>) ((((((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_13)))))) == (var_14))) ? ((~(min((var_11), (((/* implicit */val<long long int>) var_18)))))) : (((/* implicit */val<long long int>) max((((((/* implicit */val<bool>) (val<short>)-20764)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_1)))), (((((/* implicit */val<bool>) var_15)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_15)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-20568;
long long int var_11 = 4021816136559648579LL;
short var_13 = (short)14091;
long long int var_14 = 9134887394970499258LL;
unsigned short var_15 = (unsigned short)35805;
short var_16 = (short)-30908;
unsigned short var_18 = (unsigned short)3034;
int zero = 0;
unsigned short var_19 = (unsigned short)17195;
short var_20 = (short)2360;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)48103;
    value_mismatch |= var_20 != (short)-22896;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_11, var_13, var_14, var_15, var_16, var_18, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
