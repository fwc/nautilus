/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5359
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5359
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
void test(val<bool> var_0, val<long long int> var_2, val<unsigned short> var_3, val<unsigned int> var_4, val<unsigned short> var_5, val<signed char> var_6, val<unsigned short> var_7, val<unsigned int> var_8, val<signed char> var_9, val<unsigned short> var_14, val<unsigned char> var_16, val<int> zero, val<unsigned int*> var_17, val<unsigned char*> var_18, val<signed char*> var_19, val<long long int*> var_20, val<bool*> var_21) {
    *var_17 ^= ((((/* implicit */val<bool>) ((max((var_2), (((/* implicit */val<long long int>) var_16)))) >> (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_9)) && (((/* implicit */val<bool>) var_7)))))))) ? (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) var_6)) : (((/* implicit */val<int>) var_9))))) ? ((+(var_4))) : (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_7))) ^ (var_8))))) : (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_14)))))) * (var_8))));
    *var_18 = ((/* implicit */val<unsigned char>) var_0);
    *var_19 = ((/* implicit */val<signed char>) (-(min((((/* implicit */val<long long int>) max((((/* implicit */val<unsigned int>) var_5)), (var_4)))), (var_2)))));
    *var_20 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (~(var_2)))) && (((/* implicit */val<bool>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1))) | (-4062414848447163717LL))))));
    *var_21 = ((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_14))) - (((((/* implicit */val<bool>) min((var_8), (((/* implicit */val<unsigned int>) var_3))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) (val<unsigned char>)102)), ((val<unsigned short>)17028))))) : (((0U) & (0U)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
long long int var_2 = 1544430157938039257LL;
unsigned short var_3 = (unsigned short)29437;
unsigned int var_4 = 1969632682U;
unsigned short var_5 = (unsigned short)9545;
signed char var_6 = (signed char)124;
unsigned short var_7 = (unsigned short)36729;
unsigned int var_8 = 1186927601U;
signed char var_9 = (signed char)86;
unsigned short var_14 = (unsigned short)10144;
unsigned char var_16 = (unsigned char)72;
int zero = 0;
unsigned int var_17 = 1634609741U;
unsigned char var_18 = (unsigned char)49;
signed char var_19 = (signed char)60;
long long int var_20 = 5174184116377164363LL;
bool var_21 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 336076775U;
    value_mismatch |= var_18 != (unsigned char)1;
    value_mismatch |= var_19 != (signed char)86;
    value_mismatch |= var_20 != 1LL;
    value_mismatch |= var_21 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_14, var_16, zero, &var_17, &var_18, &var_19, &var_20, &var_21);
  checksum();
}
