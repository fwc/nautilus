/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1962
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1962
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
void test(val<signed char> var_0, val<unsigned int> var_1, val<bool> var_2, val<signed char> var_4, val<bool> var_5, val<bool> var_6, val<unsigned int> var_7, val<signed char> var_8, val<unsigned int> var_9, val<int> zero, val<unsigned int*> var_10, val<bool*> var_11, val<signed char*> var_12, val<unsigned int*> var_13, val<signed char*> var_14) {
    *var_10 &= ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((var_0), ((val<signed char>)-13)))) ? (((val<unsigned int>) (val<bool>)1)) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) (val<signed char>)(-127 - 1))))))))) ? (var_9) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5))));
    *var_11 = ((/* implicit */val<bool>) min((*var_11), (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<signed char>)(-127 - 1))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_2))) : (var_1)))) ? (var_9) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) (val<signed char>)-81)) : (((/* implicit */val<int>) var_0)))))))) ? (((/* implicit */val<int>) max((var_8), (((/* implicit */val<signed char>) ((val<bool>) (val<signed char>)-103)))))) : (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_4)) ? (var_9) : (var_9)))) ? (((((/* implicit */val<bool>) (val<unsigned short>)65514)) ? (((/* implicit */val<int>) (val<signed char>)-9)) : (((/* implicit */val<int>) (val<signed char>)113)))) : (((/* implicit */val<int>) var_4)))))))));
    *var_12 |= var_0;
    *var_13 *= ((((/* implicit */val<bool>) min((((((/* implicit */val<bool>) (val<signed char>)-51)) ? (((/* implicit */val<int>) var_6)) : (((/* implicit */val<int>) (val<unsigned short>)17714)))), (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_1)))))))) ? (((val<unsigned int>) ((((/* implicit */val<bool>) 3334316486U)) ? (((/* implicit */val<int>) var_6)) : (((/* implicit */val<int>) var_4))))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_0))));
    *var_14 = ((/* implicit */val<signed char>) min((*var_14), (var_0)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-65;
unsigned int var_1 = 3141319013U;
bool var_2 = (bool)1;
signed char var_4 = (signed char)-125;
bool var_5 = (bool)1;
bool var_6 = (bool)1;
unsigned int var_7 = 2437261431U;
signed char var_8 = (signed char)33;
unsigned int var_9 = 2148271094U;
int zero = 0;
unsigned int var_10 = 1394584763U;
bool var_11 = (bool)0;
signed char var_12 = (signed char)-40;
unsigned int var_13 = 1049584999U;
signed char var_14 = (signed char)50;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 786610U;
    value_mismatch |= var_11 != (bool)0;
    value_mismatch |= var_12 != (signed char)-1;
    value_mismatch |= var_13 != 496451801U;
    value_mismatch |= var_14 != (signed char)-65;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_5, var_6, var_7, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
