/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4126
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4126
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
void test(val<unsigned short> var_0, val<short> var_1, val<short> var_2, val<int> var_4, val<int> var_6, val<long long int> var_8, val<short> var_9, val<unsigned char> var_10, val<long long int> var_11, val<signed char> var_14, val<unsigned short> var_15, val<unsigned long long int> var_16, val<unsigned short> var_17, val<int> zero, val<short*> var_19, val<short*> var_20, val<unsigned long long int*> var_21) {
    *var_19 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((var_8) + (((/* implicit */val<long long int>) var_6))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_10))) : (max((((/* implicit */val<unsigned long long int>) var_2)), (var_16)))))) ? (max((var_16), (var_16))) : (((/* implicit */val<unsigned long long int>) max((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_1)) || (((/* implicit */val<bool>) var_17))))), (((var_11) - (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_10))))))))));
    *var_20 = ((/* implicit */val<short>) min((*var_20), (((/* implicit */val<short>) var_10))));
    *var_21 = ((/* implicit */val<unsigned long long int>) (+(((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_0)) / (((/* implicit */val<int>) var_14))))) ? (max((((/* implicit */val<int>) var_17)), (var_4))) : (((((/* implicit */val<int>) var_15)) / (((/* implicit */val<int>) var_9))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)791;
short var_1 = (short)3140;
short var_2 = (short)563;
int var_4 = 606421419;
int var_6 = -1882717380;
long long int var_8 = -6490152217787572810LL;
short var_9 = (short)27697;
unsigned char var_10 = (unsigned char)220;
long long int var_11 = 2634106252497194732LL;
signed char var_14 = (signed char)-116;
unsigned short var_15 = (unsigned short)29227;
unsigned long long int var_16 = 5857243245671599968ULL;
unsigned short var_17 = (unsigned short)21556;
int zero = 0;
short var_19 = (short)1252;
short var_20 = (short)13124;
unsigned long long int var_21 = 16435291308978715668ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)-12448;
    value_mismatch |= var_20 != (short)220;
    value_mismatch |= var_21 != 606421419ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_6, var_8, var_9, var_10, var_11, var_14, var_15, var_16, var_17, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
