/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4383
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4383
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
void test(val<signed char> var_0, val<unsigned int> var_3, val<bool> var_7, val<signed char> var_8, val<unsigned short> var_10, val<unsigned int> var_11, val<bool> var_13, val<unsigned int> var_14, val<int> zero, val<unsigned char*> var_19, val<bool*> var_20, val<signed char*> var_21) {
    *var_19 = ((/* implicit */val<unsigned char>) min((((/* implicit */val<long long int>) (val<short>)14517)), (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 6251966201406673894LL)) ? (((/* implicit */val<int>) (val<signed char>)92)) : (((/* implicit */val<int>) (val<bool>)0))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) max(((val<signed char>)-118), ((val<signed char>)(-127 - 1)))))) : (-1328810384224934702LL)))));
    *var_20 = ((/* implicit */val<bool>) (((-(var_14))) * (min((((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_10))) - (var_3))), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (val<short>)4838)) ? (((/* implicit */val<int>) (val<short>)-4830)) : (((/* implicit */val<int>) (val<signed char>)(-127 - 1))))))))));
    *var_21 = ((/* implicit */val<signed char>) min((min(((-(((/* implicit */val<int>) var_13)))), ((+(((/* implicit */val<int>) var_7)))))), (((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) var_8))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)105;
unsigned int var_3 = 3223043150U;
bool var_7 = (bool)0;
signed char var_8 = (signed char)-91;
unsigned short var_10 = (unsigned short)18375;
unsigned int var_11 = 2505736666U;
bool var_13 = (bool)0;
unsigned int var_14 = 3225363797U;
int zero = 0;
unsigned char var_19 = (unsigned char)7;
bool var_20 = (bool)0;
signed char var_21 = (signed char)-57;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)138;
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_7, var_8, var_10, var_11, var_13, var_14, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
