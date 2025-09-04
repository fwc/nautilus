/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8058
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8058
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
void test(val<unsigned int> var_3, val<unsigned int> var_5, val<unsigned int> var_9, val<unsigned long long int> var_10, val<unsigned int> var_14, val<unsigned long long int> var_15, val<unsigned long long int> var_17, val<int> zero, val<unsigned int*> var_19, val<unsigned short*> var_20, val<unsigned int*> var_21, val<signed char*> var_22, val<short*> var_23, val<int*> var_24) {
    *var_19 = var_14;
    *var_20 |= ((/* implicit */val<unsigned short>) var_5);
    *var_21 = ((/* implicit */val<unsigned int>) (+(max((((((/* implicit */val<bool>) 2558665723567200511ULL)) ? (var_10) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)8562))))), (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) (val<unsigned short>)10)))))))));
    *var_22 = ((/* implicit */val<signed char>) var_3);
    if (((/* implicit */val<bool>) (~(var_3))))
    {
        *var_23 = ((/* implicit */val<short>) var_15);
        *var_24 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)56984)) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_3)) || (((/* implicit */val<bool>) (val<unsigned short>)59702))))) : (((/* implicit */val<int>) (val<unsigned short>)56986))))) ? (var_9) : (((var_14) << ((((~(var_17))) - (15052931574100528214ULL)))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3105157209U;
unsigned int var_5 = 4145016173U;
unsigned int var_9 = 3647548805U;
unsigned long long int var_10 = 11691818626276969452ULL;
unsigned int var_14 = 2246971684U;
unsigned long long int var_15 = 6186060882094708104ULL;
unsigned long long int var_17 = 3393812499609023394ULL;
int zero = 0;
unsigned int var_19 = 4241301972U;
unsigned short var_20 = (unsigned short)26797;
unsigned int var_21 = 1285219871U;
signed char var_22 = (signed char)-67;
short var_23 = (short)27795;
int var_24 = -2005494490;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 2246971684U;
    value_mismatch |= var_20 != (unsigned short)60909;
    value_mismatch |= var_21 != 4294967285U;
    value_mismatch |= var_22 != (signed char)89;
    value_mismatch |= var_23 != (short)-10872;
    value_mismatch |= var_24 != -647418491;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_9, var_10, var_14, var_15, var_17, zero, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
  assert(!value_mismatch);
}
