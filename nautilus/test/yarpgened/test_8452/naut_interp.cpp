/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8452
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8452
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
void test(val<bool> var_0, val<bool> var_1, val<unsigned char> var_2, val<signed char> var_3, val<short> var_4, val<unsigned int> var_6, val<signed char> var_7, val<int> zero, val<bool*> var_10, val<unsigned short*> var_11, val<int*> var_12) {
    *var_10 &= ((/* implicit */val<bool>) ((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) (val<unsigned short>)3)) : (((/* implicit */val<int>) var_3))))) || (((/* implicit */val<bool>) min((((/* implicit */val<short>) (val<unsigned char>)255)), (var_4)))))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((val<signed char>) (val<unsigned char>)233)))))) : (((((/* implicit */val<bool>) (((val<bool>)0) ? (((/* implicit */val<int>) var_7)) : (1104610611)))) ? (((/* implicit */val<int>) (val<signed char>)-23)) : (((var_1) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) var_2))))))));
    *var_11 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) var_4))));
    *var_12 = ((/* implicit */val<int>) ((max((((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)22))) & (70314518U))), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) (val<signed char>)-23)) : (((/* implicit */val<int>) var_1))))))) / (max((((/* implicit */val<unsigned int>) var_3)), (max((var_6), (var_6)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
bool var_1 = (bool)0;
unsigned char var_2 = (unsigned char)58;
signed char var_3 = (signed char)30;
short var_4 = (short)32491;
unsigned int var_6 = 4033128617U;
signed char var_7 = (signed char)-86;
int zero = 0;
bool var_10 = (bool)1;
unsigned short var_11 = (unsigned short)30063;
int var_12 = 1160678970;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (bool)0;
    value_mismatch |= var_11 != (unsigned short)32491;
    value_mismatch |= var_12 != 1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_6, var_7, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
