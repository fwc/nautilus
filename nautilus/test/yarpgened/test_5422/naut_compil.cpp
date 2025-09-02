/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5422
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5422
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
void test(val<bool> var_0, val<signed char> var_1, val<unsigned char> var_2, val<bool> var_3, val<int> var_4, val<int> var_7, val<unsigned short> var_9, val<short> var_10, val<unsigned short> var_11, val<unsigned short> var_13, val<short> var_14, val<unsigned int> var_15, val<unsigned int> var_16, val<bool> var_17, val<int> zero, val<unsigned short*> var_19, val<unsigned int*> var_20, val<long long int*> var_21) {
    *var_19 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<unsigned int>) ((((((/* implicit */val<bool>) -2051652247)) ? (var_7) : (((/* implicit */val<int>) var_14)))) - (((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) var_9))))))) - (((((var_15) - (((/* implicit */val<unsigned int>) 1237805605)))) + (((4294967295U) - (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_1)))))))));
    *var_20 = ((((/* implicit */val<bool>) ((((((/* implicit */val<int>) var_13)) * (((/* implicit */val<int>) var_9)))) / (((((/* implicit */val<int>) var_14)) * (((/* implicit */val<int>) (val<short>)12680))))))) ? (((((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)32758))) * (var_16))) * (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_0)) / (((/* implicit */val<int>) (val<short>)-12680))))))) : (((/* implicit */val<unsigned int>) ((((((/* implicit */val<bool>) 13U)) ? (((/* implicit */val<int>) var_2)) : (1810126071))) / (((((/* implicit */val<int>) var_11)) / (((/* implicit */val<int>) var_14))))))));
    *var_21 = ((/* implicit */val<long long int>) ((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((var_0) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) var_13))))) ? (((((/* implicit */val<int>) var_17)) / (((/* implicit */val<int>) var_17)))) : (((((/* implicit */val<bool>) var_16)) ? (((/* implicit */val<int>) (val<unsigned short>)46329)) : (var_4)))))) / (((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<unsigned short>)47764)) / (((/* implicit */val<int>) var_11))))) ? (((var_15) / (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_10))))) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (val<unsigned char>)22)) ? (var_7) : (((/* implicit */val<int>) var_17)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
signed char var_1 = (signed char)-106;
unsigned char var_2 = (unsigned char)108;
bool var_3 = (bool)0;
int var_4 = 1332870967;
int var_7 = 1676159574;
unsigned short var_9 = (unsigned short)8571;
short var_10 = (short)-3041;
unsigned short var_11 = (unsigned short)53128;
unsigned short var_13 = (unsigned short)54638;
short var_14 = (short)-29719;
unsigned int var_15 = 481029932U;
unsigned int var_16 = 538397454U;
bool var_17 = (bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)61859;
unsigned int var_20 = 543956299U;
long long int var_21 = -6886271817599633178LL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)42214;
    value_mismatch |= var_20 != 0U;
    value_mismatch |= var_21 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_7, var_9, var_10, var_11, var_13, var_14, var_15, var_16, var_17, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
