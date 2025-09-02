/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7278
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7278
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
void test(val<unsigned char> var_0, val<unsigned long long int> var_2, val<unsigned long long int> var_6, val<unsigned long long int> var_8, val<int> var_9, val<signed char> var_11, val<long long int> var_14, val<bool> var_17, val<int> zero, val<short*> var_18, val<signed char*> var_19, val<unsigned int*> var_20, val<unsigned char*> var_21) {
    *var_18 = ((/* implicit */val<short>) (~((+(((((/* implicit */val<bool>) var_2)) ? (var_8) : (((/* implicit */val<unsigned long long int>) var_9))))))));
    *var_19 = ((/* implicit */val<signed char>) min((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) -830521503716225060LL)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)0))) : (-830521503716225060LL)))), (((((/* implicit */val<bool>) var_6)) ? (((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_11))) : (var_8))) : (((/* implicit */val<unsigned long long int>) var_14))))));
    *var_20 = ((/* implicit */val<unsigned int>) var_0);
    *var_21 = ((/* implicit */val<unsigned char>) (((-(((var_17) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)22252))) : (var_8))))) < (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 830521503716225045LL)) ? ((+(1526929949U))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)58536))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)145;
unsigned long long int var_2 = 2258570503637204183ULL;
unsigned long long int var_6 = 6582888257466312056ULL;
unsigned long long int var_8 = 1447444249314131366ULL;
int var_9 = 1043782844;
signed char var_11 = (signed char)70;
long long int var_14 = 6099618408523846686LL;
bool var_17 = (bool)1;
int zero = 0;
short var_18 = (short)-22150;
signed char var_19 = (signed char)74;
unsigned int var_20 = 660287200U;
unsigned char var_21 = (unsigned char)123;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)601;
    value_mismatch |= var_19 != (signed char)0;
    value_mismatch |= var_20 != 145U;
    value_mismatch |= var_21 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_6, var_8, var_9, var_11, var_14, var_17, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
