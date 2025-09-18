/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4970
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4970
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
void test(val<int> var_0, val<bool> var_1, val<short> var_2, val<short> var_3, val<short> var_5, val<unsigned int> var_7, val<unsigned int> var_8, val<unsigned long long int> var_10, val<unsigned int> var_11, val<short> var_15, val<int> var_17, val<int> zero, val<unsigned int*> var_19, val<unsigned long long int*> var_20, val<int*> var_21, val<short*> var_22, val<bool*> var_23) {
    *var_19 = ((/* implicit */val<unsigned int>) min((*var_19), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) ((val<short>) (!(((/* implicit */val<bool>) (val<short>)32767)))))) : (((/* implicit */val<int>) var_3)))))));
    *var_20 = ((/* implicit */val<unsigned long long int>) min((var_2), (((/* implicit */val<short>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((4294967295U) == (((/* implicit */val<unsigned int>) var_17)))))) == (max((343967753U), (343967753U))))))));
    *var_21 = ((/* implicit */val<int>) max((*var_21), (((((/* implicit */val<bool>) (~(((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) var_0)) < (var_11))))))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<short>)-32764))))) : (((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) var_15)) : (var_0)))))));
    *var_22 += ((/* implicit */val<short>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_11)) ? (var_7) : (4137282291U)))))))) != (((((((/* implicit */val<bool>) (val<short>)(-32767 - 1))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)(-32767 - 1)))) : (0U))) | (((((/* implicit */val<bool>) var_5)) ? (526535977U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)240)))))))));
    *var_23 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((((((/* implicit */val<int>) (val<short>)(-32767 - 1))) - (((/* implicit */val<int>) (val<bool>)1)))), (((/* implicit */val<int>) ((val<short>) var_0)))))) ? (((((/* implicit */val<bool>) min((var_11), (4294967272U)))) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) var_1)))) : ((~(((val<int>) var_7))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1876520768;
bool var_1 = (bool)0;
short var_2 = (short)-14267;
short var_3 = (short)-20572;
short var_5 = (short)19351;
unsigned int var_7 = 1146537675U;
unsigned int var_8 = 3167360880U;
unsigned long long int var_10 = 7234408182972679745ULL;
unsigned int var_11 = 3986898557U;
short var_15 = (short)13125;
int var_17 = 1605264449;
int zero = 0;
unsigned int var_19 = 1656590017U;
unsigned long long int var_20 = 14156500953145498417ULL;
int var_21 = 687165575;
short var_22 = (short)3784;
bool var_23 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 0U;
    value_mismatch |= var_20 != 18446744073709537349ULL;
    value_mismatch |= var_21 != 687165575;
    value_mismatch |= var_22 != (short)3785;
    value_mismatch |= var_23 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_5, var_7, var_8, var_10, var_11, var_15, var_17, zero, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
}
