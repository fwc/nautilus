/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3119
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3119
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
void test(val<int> var_4, val<unsigned char> var_5, val<signed char> var_9, val<unsigned int> var_11, val<long long int> var_13, val<int> zero, val<short*> var_14, val<short*> var_15) {
    *var_14 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((var_13) ^ (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)-19504)))))) ? (((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) 402080668U)) ? (var_4) : (((/* implicit */val<int>) var_5))))) & (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_9))) ^ (var_11))))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)65039)))));
    *var_15 -= ((/* implicit */val<short>) 2787463973U);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -558076083;
unsigned char var_5 = (unsigned char)247;
signed char var_9 = (signed char)-96;
unsigned int var_11 = 1147263773U;
long long int var_13 = -5690104318401646210LL;
int zero = 0;
short var_14 = (short)-6516;
short var_15 = (short)-17594;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (short)9229;
    value_mismatch |= var_15 != (short)26657;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_9, var_11, var_13, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
