/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9275
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9275
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
void test(val<signed char> var_5, val<unsigned int> var_6, val<unsigned char> var_7, val<unsigned int> var_10, val<short> var_11, val<unsigned int> var_14, val<int> zero, val<unsigned char*> var_15, val<unsigned int*> var_16, val<bool*> var_17, val<unsigned char*> var_18) {
    *var_15 &= ((/* implicit */val<unsigned char>) var_11);
    *var_16 -= var_14;
    *var_17 = ((/* implicit */val<bool>) min((min((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) (val<signed char>)-15)) * (((/* implicit */val<int>) var_5))))), (((val<unsigned long long int>) var_5)))), (((/* implicit */val<unsigned long long int>) max((var_10), (var_14))))));
    *var_18 = max((((/* implicit */val<unsigned char>) (((!(((/* implicit */val<bool>) var_7)))) && (((/* implicit */val<bool>) min((var_7), (((/* implicit */val<unsigned char>) (val<signed char>)124)))))))), (min((((val<unsigned char>) 731398557U)), (((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) var_6))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)49;
unsigned int var_6 = 3038436737U;
unsigned char var_7 = (unsigned char)52;
unsigned int var_10 = 4146858725U;
short var_11 = (short)-31207;
unsigned int var_14 = 3403681725U;
int zero = 0;
unsigned char var_15 = (unsigned char)12;
unsigned int var_16 = 4023734934U;
bool var_17 = (bool)1;
unsigned char var_18 = (unsigned char)2;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned char)8;
    value_mismatch |= var_16 != 620053209U;
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_6, var_7, var_10, var_11, var_14, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
