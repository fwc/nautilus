/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1770
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1770
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
void test(val<signed char> var_0, val<signed char> var_2, val<unsigned short> var_5, val<int> var_9, val<int> var_11, val<int> zero, val<long long int*> var_12, val<bool*> var_13, val<bool*> var_14, val<short*> var_15) {
    *var_12 &= ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (((!(((/* implicit */val<bool>) -2147483644)))) ? (max((((/* implicit */val<unsigned int>) var_5)), (4294967288U))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)65535)))))) ? (((/* implicit */val<int>) var_5)) : ((((!(((/* implicit */val<bool>) var_0)))) ? (((((/* implicit */val<bool>) -2147483644)) ? (((/* implicit */val<int>) (val<short>)15951)) : (((/* implicit */val<int>) var_0)))) : (((((/* implicit */val<int>) (val<short>)2047)) + (((/* implicit */val<int>) (val<unsigned char>)114))))))));
    *var_13 = ((/* implicit */val<bool>) ((((/* implicit */val<int>) var_2)) + (var_9)));
    *var_14 = ((/* implicit */val<bool>) min((min((((/* implicit */val<short>) var_0)), ((val<short>)-2044))), (((/* implicit */val<short>) min((((val<unsigned char>) (val<unsigned short>)55034)), (((/* implicit */val<unsigned char>) (val<bool>)0)))))));
    *var_15 = ((/* implicit */val<short>) var_11);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-40;
signed char var_2 = (signed char)-106;
unsigned short var_5 = (unsigned short)55902;
int var_9 = 4496746;
int var_11 = -1870485653;
int zero = 0;
long long int var_12 = 253484279998272891LL;
bool var_13 = (bool)1;
bool var_14 = (bool)0;
short var_15 = (short)-20668;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 20570LL;
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != (short)-22677;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_5, var_9, var_11, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
