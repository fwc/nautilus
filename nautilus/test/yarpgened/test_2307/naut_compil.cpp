/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2307
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2307
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
void test(val<unsigned char> var_0, val<unsigned char> var_5, val<signed char> var_7, val<bool> var_8, val<unsigned short> var_11, val<signed char> var_12, val<unsigned short> var_13, val<int> var_15, val<short> var_16, val<unsigned int> var_17, val<signed char> var_18, val<int> zero, val<signed char*> var_19, val<unsigned char*> var_20, val<signed char*> var_21, val<unsigned short*> var_22, val<bool*> var_23) {
    *var_19 = ((/* implicit */val<signed char>) min((max((((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7))) / (-5586664329193790383LL))), (((/* implicit */val<long long int>) min((var_11), (var_13)))))), (((/* implicit */val<long long int>) (+((+(((/* implicit */val<int>) var_0)))))))));
    *var_20 = ((/* implicit */val<unsigned char>) min((min((((/* implicit */val<short>) (!(((/* implicit */val<bool>) var_18))))), (max((var_16), (((/* implicit */val<short>) var_18)))))), (min((((/* implicit */val<short>) min((((/* implicit */val<signed char>) var_8)), (var_12)))), (min((((/* implicit */val<short>) var_0)), ((val<short>)28524)))))));
    *var_21 = ((/* implicit */val<signed char>) max((*var_21), (((/* implicit */val<signed char>) (+((((~(((/* implicit */val<int>) (val<short>)-2)))) ^ ((~(((/* implicit */val<int>) var_0)))))))))));
    *var_22 ^= ((/* implicit */val<unsigned short>) max((((((/* implicit */val<int>) min(((val<short>)-2), (((/* implicit */val<short>) var_5))))) - (((/* implicit */val<int>) max((((/* implicit */val<signed char>) (val<bool>)1)), ((val<signed char>)38)))))), (max(((+(((/* implicit */val<int>) (val<bool>)1)))), (min((((/* implicit */val<int>) var_13)), (var_15)))))));
    *var_23 = ((/* implicit */val<bool>) max((max((((/* implicit */val<long long int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)-3))) / (var_17)))), ((+(-3191473069270014425LL))))), (((/* implicit */val<long long int>) (-(((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) (val<short>)7)), ((val<unsigned short>)26346)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)119;
unsigned char var_5 = (unsigned char)232;
signed char var_7 = (signed char)-39;
bool var_8 = (bool)1;
unsigned short var_11 = (unsigned short)52701;
signed char var_12 = (signed char)3;
unsigned short var_13 = (unsigned short)18188;
int var_15 = -2019323144;
short var_16 = (short)-31209;
unsigned int var_17 = 15507053U;
signed char var_18 = (signed char)67;
int zero = 0;
signed char var_19 = (signed char)16;
unsigned char var_20 = (unsigned char)33;
signed char var_21 = (signed char)116;
unsigned short var_22 = (unsigned short)56238;
bool var_23 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)119;
    value_mismatch |= var_20 != (unsigned char)0;
    value_mismatch |= var_21 != (signed char)116;
    value_mismatch |= var_22 != (unsigned short)56239;
    value_mismatch |= var_23 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_7, var_8, var_11, var_12, var_13, var_15, var_16, var_17, var_18, zero, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
