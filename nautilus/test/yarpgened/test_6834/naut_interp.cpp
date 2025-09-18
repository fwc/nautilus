/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6834
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6834
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
void test(val<short> var_1, val<int> var_2, val<signed char> var_4, val<unsigned int> var_10, val<unsigned short> var_12, val<int> var_15, val<int> zero, val<bool*> var_17, val<unsigned int*> var_18, val<int*> var_19, val<int*> var_20) {
    *var_17 = ((/* implicit */val<bool>) min((*var_17), (((/* implicit */val<bool>) ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) ((var_15) ^ (((/* implicit */val<int>) (val<bool>)1))))), (min((var_10), (((/* implicit */val<unsigned int>) var_2))))))) ? (((((/* implicit */val<int>) var_1)) - (((/* implicit */val<int>) ((((/* implicit */val<int>) var_12)) == (((/* implicit */val<int>) (val<bool>)0))))))) : (((/* implicit */val<int>) (val<bool>)1)))))));
    *var_18 &= ((/* implicit */val<unsigned int>) (-(((((/* implicit */val<bool>) (val<unsigned char>)0)) ? ((+(((/* implicit */val<int>) var_4)))) : (((/* implicit */val<int>) (!((val<bool>)1))))))));
    *var_19 = ((/* implicit */val<int>) ((val<unsigned long long int>) (val<short>)32767));
    *var_20 &= (+(((((/* implicit */val<int>) var_4)) * (((((/* implicit */val<int>) (val<bool>)1)) + (((/* implicit */val<int>) (val<unsigned short>)4169)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-24120;
int var_2 = -898178750;
signed char var_4 = (signed char)-9;
unsigned int var_10 = 3958750024U;
unsigned short var_12 = (unsigned short)16987;
int var_15 = -2084477049;
int zero = 0;
bool var_17 = (bool)0;
unsigned int var_18 = 785535293U;
int var_19 = 674624955;
int var_20 = -1345237343;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (bool)0;
    value_mismatch |= var_18 != 0U;
    value_mismatch |= var_19 != 32767;
    value_mismatch |= var_20 != -1345237984;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_10, var_12, var_15, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
}
