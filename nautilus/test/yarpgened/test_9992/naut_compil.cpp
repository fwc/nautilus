/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9992
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9992
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
void test(val<unsigned int> var_10, val<unsigned short> var_15, val<int> zero, val<unsigned int*> var_16, val<unsigned short*> var_17, val<long long int*> var_18) {
    *var_16 = ((/* implicit */val<unsigned int>) var_15);
    *var_17 += ((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) (((val<bool>)0) ? (((/* implicit */val<int>) (val<signed char>)-1)) : (((/* implicit */val<int>) (val<unsigned char>)78)))))));
    *var_18 = ((/* implicit */val<long long int>) var_10);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_10 = 3056807615U;
unsigned short var_15 = (unsigned short)2524;
int zero = 0;
unsigned int var_16 = 274020784U;
unsigned short var_17 = (unsigned short)33565;
long long int var_18 = -1220025615801585443LL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 2524U;
    value_mismatch |= var_17 != (unsigned short)33565;
    value_mismatch |= var_18 != 3056807615LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_10, var_15, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
