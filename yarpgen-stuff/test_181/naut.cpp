/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 181
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=181
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
void test(val<int> var_0, val<unsigned long long int> var_1, val<signed char> var_2, val<unsigned short> var_3, val<int> var_5, val<unsigned long long int> var_6, val<unsigned long long int> var_8, val<bool> var_9, val<unsigned int> var_12, val<unsigned int> var_13, val<long long int> var_14, val<int> zero, val<short*> var_15, val<unsigned int*> var_16, val<unsigned char*> var_17, val<unsigned long long int*> var_18, val<unsigned short*> var_19) {
    *var_15 = ((/* implicit */val<short>) min((((/* implicit */val<unsigned long long int>) var_3)), (((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<short>)24514)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)11335))) : (var_14)))) * (min((((/* implicit */val<unsigned long long int>) (val<short>)-24127)), (var_8)))))));
    *var_16 = ((/* implicit */val<unsigned int>) min((*var_16), (((/* implicit */val<unsigned int>) min((((/* implicit */val<unsigned long long int>) min((var_13), (((((/* implicit */val<bool>) (val<short>)-19417)) ? (((/* implicit */val<unsigned int>) var_0)) : (var_12)))))), (min((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_12)) || ((val<bool>)1)))), (min((var_1), (((/* implicit */val<unsigned long long int>) (val<short>)-24515)))))))))));
    *var_17 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((var_6) * (((/* implicit */val<unsigned long long int>) (~(var_12))))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((((/* implicit */val<bool>) var_1)) ? (var_14) : ((-9223372036854775807LL - 1LL)))) > (((/* implicit */val<long long int>) max((var_13), (((/* implicit */val<unsigned int>) var_5))))))))) : (((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<unsigned short>)1)) ? (((/* implicit */val<int>) (val<short>)24488)) : (var_5)))) & (((((/* implicit */val<bool>) var_12)) ? (4530129635030111429ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3)))))))));
    *var_18 = ((/* implicit */val<unsigned long long int>) var_9);
    *var_19 = ((/* implicit */val<unsigned short>) (-(((((/* implicit */val<bool>) max((((/* implicit */val<int>) var_2)), (var_0)))) ? (((/* implicit */val<unsigned long long int>) (~(9223372036854775807LL)))) : ((~(var_8)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -480809225;
unsigned long long int var_1 = 13275039153315627217ULL;
signed char var_2 = (signed char)91;
unsigned short var_3 = (unsigned short)63250;
int var_5 = -1427987669;
unsigned long long int var_6 = 12965744585725313040ULL;
unsigned long long int var_8 = 10137376933522525543ULL;
bool var_9 = (bool)1;
unsigned int var_12 = 1009585330U;
unsigned int var_13 = 1372892379U;
long long int var_14 = 7272289105138415LL;
int zero = 0;
short var_15 = (short)18866;
unsigned int var_16 = 910328786U;
unsigned char var_17 = (unsigned char)97;
unsigned long long int var_18 = 13211857676662583434ULL;
unsigned short var_19 = (unsigned short)37800;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)-2286;
    value_mismatch |= var_16 != 1U;
    value_mismatch |= var_17 != (unsigned char)1;
    value_mismatch |= var_18 != 1ULL;
    value_mismatch |= var_19 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_5, var_6, var_8, var_9, var_12, var_13, var_14, zero, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
