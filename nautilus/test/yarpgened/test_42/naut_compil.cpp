/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 42
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=42
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
void test(val<bool> var_0, val<unsigned int> var_2, val<unsigned long long int> var_4, val<unsigned int> var_6, val<bool> var_7, val<short> var_8, val<bool> var_9, val<unsigned int> var_10, val<long long int> var_14, val<int> zero, val<bool*> var_15, val<int*> var_16, val<short*> var_17) {
    *var_15 = ((/* implicit */val<bool>) (((((val<bool>)0) ? (((((/* implicit */val<unsigned int>) -19643782)) / (var_2))) : (min((3039078479U), (((/* implicit */val<unsigned int>) (val<unsigned char>)196)))))) * (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<signed char>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_8))) : (var_4))))))));
    *var_16 = ((((/* implicit */val<bool>) min((((/* implicit */val<long long int>) (val<unsigned short>)32768)), (((var_0) ? (((/* implicit */val<long long int>) var_6)) : (var_14)))))) ? (max((((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) (val<signed char>)3)))), (((((/* implicit */val<bool>) (val<unsigned short>)32741)) ? (((/* implicit */val<int>) (val<unsigned short>)32767)) : (((/* implicit */val<int>) (val<unsigned short>)32737)))))) : (((((/* implicit */val<bool>) var_10)) ? ((~(((/* implicit */val<int>) (val<unsigned short>)32784)))) : (((/* implicit */val<int>) ((((/* implicit */val<int>) var_9)) < (((/* implicit */val<int>) var_0))))))));
    *var_17 = ((/* implicit */val<short>) max((*var_17), (((/* implicit */val<short>) var_4))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
unsigned int var_2 = 1626802043U;
unsigned long long int var_4 = 9269729325668373967ULL;
unsigned int var_6 = 752722413U;
bool var_7 = (bool)0;
short var_8 = (short)-20235;
bool var_9 = (bool)0;
unsigned int var_10 = 1100424554U;
long long int var_14 = 2806493809972749540LL;
int zero = 0;
bool var_15 = (bool)0;
int var_16 = -1180608170;
short var_17 = (short)-4414;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != 32767;
    value_mismatch |= var_17 != (short)5583;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_6, var_7, var_8, var_9, var_10, var_14, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
