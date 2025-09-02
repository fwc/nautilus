/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5165
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5165
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
void test(val<unsigned char> var_0, val<unsigned int> var_1, val<unsigned int> var_5, val<signed char> var_10, val<unsigned int> var_11, val<signed char> var_12, val<unsigned long long int> var_13, val<int> var_14, val<unsigned int> var_18, val<int> zero, val<short*> var_19, val<bool*> var_20, val<unsigned char*> var_21) {
    *var_19 = ((/* implicit */val<short>) min((((((/* implicit */val<bool>) var_1)) ? (((3981452351U) - (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_0))))) : (((535822336U) % (2744575081U))))), (((/* implicit */val<unsigned int>) var_10))));
    *var_20 = ((/* implicit */val<bool>) min((*var_20), (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((2840073598U) >= (var_18))))) - (var_13)))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<unsigned int>) var_14)) : (max((var_11), (((/* implicit */val<unsigned int>) var_12))))))) : (min((((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) (val<unsigned short>)44720))))), (((6243698597541500516ULL) & (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)44720))))))))))));
    *var_21 = ((/* implicit */val<unsigned char>) max((*var_21), (var_0)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)136;
unsigned int var_1 = 3783991467U;
unsigned int var_5 = 591305847U;
signed char var_10 = (signed char)-1;
unsigned int var_11 = 2031312146U;
signed char var_12 = (signed char)-43;
unsigned long long int var_13 = 9571344674193717199ULL;
int var_14 = 309459505;
unsigned int var_18 = 2836931486U;
int zero = 0;
short var_19 = (short)-1340;
bool var_20 = (bool)0;
unsigned char var_21 = (unsigned char)75;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)9143;
    value_mismatch |= var_20 != (bool)0;
    value_mismatch |= var_21 != (unsigned char)136;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_5, var_10, var_11, var_12, var_13, var_14, var_18, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
