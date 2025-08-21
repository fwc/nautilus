/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 268
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=268
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
void test(val<unsigned long long int> var_0, val<unsigned long long int> var_1, val<unsigned long long int> var_3, val<unsigned int> var_5, val<unsigned short> var_12, val<bool> var_13, val<unsigned short> var_14, val<unsigned long long int> var_15, val<int> var_17, val<int> var_19, val<int> zero, val<int*> var_20, val<signed char*> var_21, val<unsigned long long int*> var_22, val<unsigned int*> var_23) {
    *var_20 += ((((((/* implicit */val<bool>) max((var_1), (((/* implicit */val<unsigned long long int>) (val<bool>)0))))) ? (((var_19) | (((/* implicit */val<int>) (val<bool>)1)))) : (((/* implicit */val<int>) (val<bool>)1)))) / (max((max((-1461016644), (((/* implicit */val<int>) (val<short>)15661)))), (((/* implicit */val<int>) var_12)))));
    *var_21 = ((/* implicit */val<signed char>) ((((/* implicit */val<int>) min((((var_15) != (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_14))))), (min(((val<bool>)1), (var_13)))))) >> (((/* implicit */val<int>) (val<bool>)1))));
    *var_22 = ((/* implicit */val<unsigned long long int>) max((*var_22), (((((/* implicit */val<bool>) ((((((/* implicit */val<bool>) 4294967295U)) ? (((/* implicit */val<int>) (val<short>)15661)) : (((/* implicit */val<int>) var_13)))) + ((+(((/* implicit */val<int>) (val<signed char>)-123))))))) ? (var_0) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_3)) ? (min((var_5), (((/* implicit */val<unsigned int>) (val<bool>)1)))) : (((/* implicit */val<unsigned int>) var_17)))))))));
    *var_23 = ((/* implicit */val<unsigned int>) var_13);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7479388181130983448ULL;
unsigned long long int var_1 = 472354986972297418ULL;
unsigned long long int var_3 = 9486223443008349505ULL;
unsigned int var_5 = 3819737694U;
unsigned short var_12 = (unsigned short)9127;
bool var_13 = (bool)0;
unsigned short var_14 = (unsigned short)38852;
unsigned long long int var_15 = 11631282293813184755ULL;
int var_17 = -1248967513;
int var_19 = -108821317;
int zero = 0;
int var_20 = 191076384;
signed char var_21 = (signed char)43;
unsigned long long int var_22 = 12121490699235992555ULL;
unsigned int var_23 = 2033150639U;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 191069436;
    value_mismatch |= var_21 != (signed char)0;
    value_mismatch |= var_22 != 12121490699235992555ULL;
    value_mismatch |= var_23 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_5, var_12, var_13, var_14, var_15, var_17, var_19, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
