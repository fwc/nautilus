/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4839
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4839
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
void test(val<unsigned int> var_2, val<long long int> var_3, val<long long int> var_4, val<unsigned char> var_8, val<bool> var_9, val<unsigned short> var_12, val<unsigned char> var_13, val<bool> var_15, val<int> zero, val<short*> var_18, val<bool*> var_19, val<short*> var_20, val<bool*> var_21, val<long long int*> var_22) {
    *var_18 = ((/* implicit */val<short>) (+(((((/* implicit */val<bool>) (val<unsigned char>)87)) ? ((-(1213324530353704793LL))) : (((/* implicit */val<long long int>) var_2))))));
    *var_19 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 4294967295U)) ? (((/* implicit */val<int>) var_9)) : ((((val<bool>)1) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) var_12))))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_15))) : (-2902348299924955456LL)));
    *var_20 = ((/* implicit */val<short>) (+(var_4)));
    *var_21 = ((/* implicit */val<bool>) (val<unsigned char>)255);
    *var_22 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_3)) ? (var_2) : (((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) var_13)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3796940662U;
long long int var_3 = -772970026694504953LL;
long long int var_4 = -496824066302464387LL;
unsigned char var_8 = (unsigned char)121;
bool var_9 = (bool)0;
unsigned short var_12 = (unsigned short)24418;
unsigned char var_13 = (unsigned char)249;
bool var_15 = (bool)0;
int zero = 0;
short var_18 = (short)27818;
bool var_19 = (bool)1;
short var_20 = (short)-96;
bool var_21 = (bool)0;
long long int var_22 = -8514713396547859277LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)-3929;
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != (short)11901;
    value_mismatch |= var_21 != (bool)1;
    value_mismatch |= var_22 != 3796940662LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_8, var_9, var_12, var_13, var_15, zero, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
