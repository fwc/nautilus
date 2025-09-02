/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1246
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1246
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
void test(val<unsigned int> var_3, val<short> var_6, val<short> var_10, val<unsigned long long int> var_11, val<int> zero, val<unsigned long long int*> var_14, val<int*> var_15) {
    *var_14 = ((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<bool>) (-(((/* implicit */val<int>) (val<unsigned short>)59403))))) || (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_11)) ? (var_3) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_10)))))))) ? (((/* implicit */val<int>) max((var_6), (var_10)))) : (((/* implicit */val<int>) (val<signed char>)-1))));
    *var_15 = ((/* implicit */val<int>) max((((/* implicit */val<long long int>) 3045652282U)), ((+(min((4503599627368448LL), (((/* implicit */val<long long int>) 592415586U))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1365853183U;
short var_6 = (short)-24538;
short var_10 = (short)-28191;
unsigned long long int var_11 = 5681419398328363301ULL;
int zero = 0;
unsigned long long int var_14 = 2353415427385554796ULL;
int var_15 = 2144902738;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 18446744073709527078ULL;
    value_mismatch |= var_15 != -1249315014;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_6, var_10, var_11, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
