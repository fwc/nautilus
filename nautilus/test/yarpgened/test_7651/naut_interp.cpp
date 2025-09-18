/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7651
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7651
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
void test(val<signed char> var_1, val<unsigned int> var_9, val<short> var_13, val<long long int> var_14, val<unsigned int> var_17, val<unsigned int> var_18, val<short> var_19, val<int> zero, val<long long int*> var_20, val<int*> var_21, val<bool*> var_22, val<int*> var_23) {
    *var_20 = ((/* implicit */val<long long int>) max((max((((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_13)) & (((/* implicit */val<int>) (val<signed char>)-80))))), (min((((/* implicit */val<unsigned int>) (val<signed char>)81)), (var_17))))), (((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_19))))) ? (max((var_9), (var_17))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_19)))))));
    *var_21 = ((/* implicit */val<int>) (+(var_18)));
    *var_22 = ((/* implicit */val<bool>) max((((((/* implicit */val<bool>) min((var_14), (((/* implicit */val<long long int>) (val<signed char>)-99))))) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) (val<signed char>)4)))), (((/* implicit */val<int>) var_1))));
    *var_23 = ((/* implicit */val<int>) (val<signed char>)-99);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-31;
unsigned int var_9 = 2938985136U;
short var_13 = (short)-31030;
long long int var_14 = -9094786488107917251LL;
unsigned int var_17 = 2002710777U;
unsigned int var_18 = 2194830653U;
short var_19 = (short)-22742;
int zero = 0;
long long int var_20 = -1854491799773077365LL;
int var_21 = 1544797112;
bool var_22 = (bool)1;
int var_23 = -480831504;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 4294936192LL;
    value_mismatch |= var_21 != -2100136643;
    value_mismatch |= var_22 != (bool)1;
    value_mismatch |= var_23 != -99;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_9, var_13, var_14, var_17, var_18, var_19, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
}
