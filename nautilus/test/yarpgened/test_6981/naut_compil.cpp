/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6981
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6981
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
void test(val<int> var_1, val<signed char> var_6, val<short> var_9, val<long long int> var_11, val<unsigned short> var_12, val<int> zero, val<long long int*> var_13, val<long long int*> var_14, val<long long int*> var_15) {
    *var_13 += ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_6)) ? (((((/* implicit */val<bool>) (val<unsigned short>)25012)) ? (((/* implicit */val<int>) (!((val<bool>)1)))) : (((/* implicit */val<int>) ((((/* implicit */val<long long int>) 1469366193U)) > (var_11)))))) : ((+(((/* implicit */val<int>) var_6))))));
    *var_14 = ((/* implicit */val<long long int>) var_12);
    *var_15 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_9)) ? ((~(var_1))) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) -455597521)) && (((/* implicit */val<bool>) (val<unsigned short>)45392)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1582082925;
signed char var_6 = (signed char)125;
short var_9 = (short)-27892;
long long int var_11 = -6557846314296419189LL;
unsigned short var_12 = (unsigned short)30734;
int zero = 0;
long long int var_13 = -33427279515478886LL;
long long int var_14 = -7794532536063132186LL;
long long int var_15 = -7150635652511859121LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != -33427279515478886LL;
    value_mismatch |= var_14 != 30734LL;
    value_mismatch |= var_15 != -1582082926LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_6, var_9, var_11, var_12, zero, &var_13, &var_14, &var_15);
  checksum();
}
