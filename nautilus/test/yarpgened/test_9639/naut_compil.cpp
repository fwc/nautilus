/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9639
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9639
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
void test(val<unsigned int> var_1, val<bool> var_2, val<unsigned char> var_3, val<long long int> var_6, val<short> var_8, val<bool> var_9, val<unsigned short> var_10, val<unsigned short> var_11, val<int> zero, val<unsigned int*> var_14, val<unsigned short*> var_15, val<unsigned int*> var_16) {
    *var_14 &= ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_3)) ? (var_6) : (2726325342318816250LL)))) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) (val<unsigned short>)65535))))) : (((((/* implicit */val<bool>) 2726325342318816250LL)) ? (1009866657U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_9)))))))) ? ((-(((/* implicit */val<int>) var_11)))) : ((~(((/* implicit */val<int>) var_10))))));
    *var_15 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) var_10)) : ((+(((/* implicit */val<int>) var_2))))));
    *var_16 = (((!(((/* implicit */val<bool>) var_3)))) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) (val<short>)8502)) >> (((4390143144035142550ULL) - (4390143144035142522ULL)))))) : ((((val<bool>)1) ? (var_1) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<bool>) (val<signed char>)(-127 - 1))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2576468516U;
bool var_2 = (bool)1;
unsigned char var_3 = (unsigned char)225;
long long int var_6 = 3010395148605327987LL;
short var_8 = (short)23541;
bool var_9 = (bool)0;
unsigned short var_10 = (unsigned short)53370;
unsigned short var_11 = (unsigned short)29617;
int zero = 0;
unsigned int var_14 = 2060608054U;
unsigned short var_15 = (unsigned short)48432;
unsigned int var_16 = 3283734478U;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 2060582918U;
    value_mismatch |= var_15 != (unsigned short)53370;
    value_mismatch |= var_16 != 2576468516U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_6, var_8, var_9, var_10, var_11, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
