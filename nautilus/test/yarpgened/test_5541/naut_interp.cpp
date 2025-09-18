/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5541
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5541
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
void test(val<unsigned int> var_4, val<short> var_9, val<long long int> var_10, val<unsigned int> var_12, val<int> zero, val<short*> var_13, val<long long int*> var_14, val<short*> var_15, val<signed char*> var_16) {
    *var_13 = ((/* implicit */val<short>) ((3344057729797980501LL) >= (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<short>) ((((/* implicit */val<bool>) (val<short>)-18341)) ? (((/* implicit */val<int>) (val<signed char>)-16)) : (((/* implicit */val<int>) (val<short>)0)))))))));
    *var_14 -= ((/* implicit */val<long long int>) (-(((/* implicit */val<int>) (val<signed char>)-63))));
    *var_15 = ((/* implicit */val<short>) (~(max((((/* implicit */val<long long int>) var_4)), (((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<long long int>) var_12)) : (var_10)))))));
    *var_16 = ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) -7LL))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2751910674U;
short var_9 = (short)-14819;
long long int var_10 = 9217406697165876155LL;
unsigned int var_12 = 3000073038U;
int zero = 0;
short var_13 = (short)27277;
long long int var_14 = -7309925869834989252LL;
short var_15 = (short)-19907;
signed char var_16 = (signed char)95;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (short)1;
    value_mismatch |= var_14 != -7309925869834989315LL;
    value_mismatch |= var_15 != (short)-31567;
    value_mismatch |= var_16 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_9, var_10, var_12, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
}
