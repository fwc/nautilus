/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8539
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8539
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
void test(val<short> var_0, val<short> var_7, val<unsigned short> var_8, val<unsigned int> var_12, val<bool> var_13, val<int> zero, val<unsigned short*> var_15, val<unsigned int*> var_16, val<bool*> var_17) {
    *var_15 = ((/* implicit */val<unsigned short>) min((*var_15), (((/* implicit */val<unsigned short>) ((((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) var_13)), ((val<unsigned short>)60737))))) : ((~(2743405910U))))) << ((((((~(((/* implicit */val<int>) (val<short>)930)))) & (((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) (val<unsigned short>)60727)))))) + (18436))))))));
    *var_16 |= (-(((((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_13))) ^ (var_12))) | (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_7))) + (1551561395U))))));
    *var_17 = ((((/* implicit */val<bool>) max((1551561368U), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) 2743405908U)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) var_8)))))))) && (((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) (((val<bool>)0) ? (((/* implicit */val<int>) (val<unsigned short>)60728)) : (((/* implicit */val<int>) (val<unsigned short>)4799))))), ((((val<bool>)1) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)16040))) : (1910322448U)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17777;
short var_7 = (short)8909;
unsigned short var_8 = (unsigned short)34876;
unsigned int var_12 = 283203274U;
bool var_13 = (bool)0;
int zero = 0;
unsigned short var_15 = (unsigned short)44445;
unsigned int var_16 = 2552003710U;
bool var_17 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned short)0;
    value_mismatch |= var_16 != 3139239038U;
    value_mismatch |= var_17 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_7, var_8, var_12, var_13, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
