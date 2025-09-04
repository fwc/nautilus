/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8390
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8390
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
void test(val<unsigned long long int> var_1, val<unsigned char> var_5, val<unsigned short> var_6, val<int> var_7, val<unsigned long long int> var_9, val<unsigned short> var_10, val<short> var_11, val<int> zero, val<unsigned char*> var_12, val<unsigned long long int*> var_13, val<unsigned short*> var_14) {
    *var_12 += ((/* implicit */val<unsigned char>) (+(((val<long long int>) (+(((/* implicit */val<int>) (val<signed char>)-1)))))));
    *var_13 ^= ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_6)) + (((/* implicit */val<int>) var_5))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_10))) : (((val<long long int>) (val<signed char>)13))))) ? (((var_9) + (min((((/* implicit */val<unsigned long long int>) (val<signed char>)1)), (var_9))))) : (((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11))) : (-8355454794933107747LL))) + (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) (val<short>)15)) : (((/* implicit */val<int>) (val<unsigned short>)20012)))))))));
    *var_14 += ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((val<unsigned int>) ((val<unsigned char>) (val<short>)3)))) ? (((/* implicit */val<unsigned long long int>) var_7)) : (var_1)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9839184286018930386ULL;
unsigned char var_5 = (unsigned char)130;
unsigned short var_6 = (unsigned short)17279;
int var_7 = 846585548;
unsigned long long int var_9 = 9386115074822961950ULL;
unsigned short var_10 = (unsigned short)37667;
short var_11 = (short)18947;
int zero = 0;
unsigned char var_12 = (unsigned char)224;
unsigned long long int var_13 = 8521360693750558031ULL;
unsigned short var_14 = (unsigned short)44149;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned char)223;
    value_mismatch |= var_13 != 17583136554333279824ULL;
    value_mismatch |= var_14 != (unsigned short)35649;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_6, var_7, var_9, var_10, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
