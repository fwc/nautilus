/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 10
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=10
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
void test(val<unsigned int> var_1, val<bool> var_3, val<signed char> var_5, val<int> var_7, val<int> var_8, val<short> var_10, val<unsigned long long int> var_11, val<long long int> var_12, val<unsigned short> var_13, val<signed char> var_14, val<unsigned int> var_15, val<unsigned char> var_18, val<unsigned int> var_19, val<int> zero, val<signed char*> var_20, val<unsigned char*> var_21, val<short*> var_22, val<int*> var_23) {
    *var_20 = ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) var_12))));
    *var_21 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<unsigned long long int>) (+(max((((/* implicit */val<unsigned int>) var_10)), (var_19)))))) & ((~(min((var_11), (((/* implicit */val<unsigned long long int>) var_1))))))));
    *var_22 -= ((/* implicit */val<short>) max((max((((/* implicit */val<int>) ((val<unsigned short>) var_19))), (((((/* implicit */val<bool>) var_19)) ? (var_7) : (((/* implicit */val<int>) var_3)))))), (var_8)));
    *var_23 = ((/* implicit */val<int>) max((((((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) var_5)), (var_19)))) ? (((/* implicit */val<long long int>) ((val<unsigned int>) var_11))) : (((val<long long int>) var_10)))), (((((/* implicit */val<bool>) ((val<unsigned int>) var_18))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_13)) & (((/* implicit */val<int>) var_14))))) : (max((((/* implicit */val<long long int>) var_15)), (var_12)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1809319038U;
bool var_3 = (bool)1;
signed char var_5 = (signed char)77;
int var_7 = -340221783;
int var_8 = -724286331;
short var_10 = (short)-3770;
unsigned long long int var_11 = 5823635645655048751ULL;
long long int var_12 = -3008568054108731627LL;
unsigned short var_13 = (unsigned short)24339;
signed char var_14 = (signed char)88;
unsigned int var_15 = 2431218470U;
unsigned char var_18 = (unsigned char)120;
unsigned int var_19 = 676059348U;
int zero = 0;
signed char var_20 = (signed char)-30;
unsigned char var_21 = (unsigned char)64;
short var_22 = (short)1482;
int var_23 = -30266301;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (signed char)0;
    value_mismatch |= var_21 != (unsigned char)0;
    value_mismatch |= var_22 != (short)11510;
    value_mismatch |= var_23 != -929930705;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_5, var_7, var_8, var_10, var_11, var_12, var_13, var_14, var_15, var_18, var_19, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
}
