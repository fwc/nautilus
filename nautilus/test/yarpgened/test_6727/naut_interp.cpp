/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6727
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6727
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
void test(val<signed char> var_0, val<unsigned short> var_1, val<unsigned int> var_3, val<bool> var_5, val<unsigned short> var_6, val<unsigned int> var_7, val<int> var_8, val<unsigned short> var_9, val<short> var_10, val<short> var_11, val<bool> var_12, val<unsigned int> var_15, val<int> zero, val<unsigned int*> var_16, val<long long int*> var_17, val<signed char*> var_18, val<long long int*> var_19) {
    *var_16 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) (val<unsigned short>)14)), (var_7)))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) 7269477617364099295ULL))))) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) 4294967295U)) && (((/* implicit */val<bool>) (val<unsigned char>)61)))))))) && (((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (val<unsigned short>)24013)) ? (((/* implicit */val<int>) (val<unsigned short>)10746)) : (var_8)))), (((((/* implicit */val<bool>) var_15)) ? (27U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_6))))))))));
    *var_17 = ((/* implicit */val<long long int>) ((val<unsigned int>) max(((-(((/* implicit */val<int>) var_10)))), (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_1)) && (((/* implicit */val<bool>) (val<signed char>)-89))))))));
    *var_18 = ((/* implicit */val<signed char>) min((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) min((var_3), (((/* implicit */val<unsigned int>) (val<bool>)1))))) ? (((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) var_11)), (var_1)))) : (((/* implicit */val<int>) ((var_5) && (var_12))))))), (((((/* implicit */val<bool>) min((-6291183572169020527LL), (((/* implicit */val<long long int>) (val<unsigned char>)0))))) ? (min((((/* implicit */val<unsigned int>) var_0)), (1365855322U))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_9)))))));
    *var_19 = ((/* implicit */val<long long int>) ((val<unsigned char>) (-(((/* implicit */val<int>) (val<short>)-4395)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-91;
unsigned short var_1 = (unsigned short)63390;
unsigned int var_3 = 1501283659U;
bool var_5 = (bool)1;
unsigned short var_6 = (unsigned short)20730;
unsigned int var_7 = 1910014632U;
int var_8 = 164728220;
unsigned short var_9 = (unsigned short)53051;
short var_10 = (short)-26459;
short var_11 = (short)-3318;
bool var_12 = (bool)0;
unsigned int var_15 = 4175481210U;
int zero = 0;
unsigned int var_16 = 4033281668U;
long long int var_17 = 714779163720223895LL;
signed char var_18 = (signed char)88;
long long int var_19 = -8238064090055865452LL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 0U;
    value_mismatch |= var_17 != 26459LL;
    value_mismatch |= var_18 != (signed char)-98;
    value_mismatch |= var_19 != 43LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_15, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
}
