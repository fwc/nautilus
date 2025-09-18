/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7307
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7307
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
void test(val<short> var_3, val<unsigned short> var_4, val<unsigned int> var_5, val<signed char> var_7, val<unsigned short> var_8, val<int> var_9, val<int> var_10, val<unsigned short> var_11, val<unsigned short> var_12, val<short> var_15, val<int> zero, val<long long int*> var_18, val<int*> var_19, val<bool*> var_20, val<short*> var_21, val<signed char*> var_22) {
    *var_18 &= ((/* implicit */val<long long int>) var_3);
    *var_19 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) (((!(((/* implicit */val<bool>) var_7)))) ? (((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)118))) >= (2707268888U)))) : (((((/* implicit */val<bool>) (val<short>)196)) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) (val<unsigned char>)2))))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_12))) : (var_5)));
    *var_20 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) (val<unsigned char>)29))))), ((val<unsigned char>)197)))) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) (val<signed char>)15))));
    *var_21 = ((/* implicit */val<short>) (((~(((/* implicit */val<int>) (val<signed char>)0)))) | (((((/* implicit */val<bool>) (val<unsigned char>)24)) ? (((/* implicit */val<int>) (val<unsigned char>)249)) : (((/* implicit */val<int>) (val<unsigned short>)43896))))));
    *var_22 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_4)) ? (min((max((12695518630028538889ULL), (((/* implicit */val<unsigned long long int>) 4756676875916070693LL)))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<unsigned char>)14)) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) (val<signed char>)-119))))))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) ((val<unsigned short>) var_12))) : (((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) var_15)) : (var_9))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)30570;
unsigned short var_4 = (unsigned short)35882;
unsigned int var_5 = 1053595905U;
signed char var_7 = (signed char)-57;
unsigned short var_8 = (unsigned short)53915;
int var_9 = 1463391947;
int var_10 = 2009726606;
unsigned short var_11 = (unsigned short)17855;
unsigned short var_12 = (unsigned short)23899;
short var_15 = (short)28984;
int zero = 0;
long long int var_18 = -8487809585522076434LL;
int var_19 = -1005707007;
bool var_20 = (bool)0;
short var_21 = (short)15822;
signed char var_22 = (signed char)39;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 5226LL;
    value_mismatch |= var_19 != 23899;
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != (short)-1;
    value_mismatch |= var_22 != (signed char)-101;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_5, var_7, var_8, var_9, var_10, var_11, var_12, var_15, zero, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
