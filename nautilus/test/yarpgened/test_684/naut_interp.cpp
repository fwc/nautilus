/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 684
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=684
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
void test(val<unsigned short> var_1, val<unsigned char> var_2, val<unsigned long long int> var_15, val<short> var_17, val<short> var_18, val<int> zero, val<unsigned short*> var_20, val<signed char*> var_21, val<unsigned long long int*> var_22) {
    *var_20 &= ((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) (val<short>)0))));
    *var_21 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_18)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_17))) : (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 16803261421313682185ULL)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2))) : (1643482652395869408ULL)))) ? (((var_15) * (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) 1643482652395869398ULL)) || (((/* implicit */val<bool>) (val<short>)32763))))))))));
    *var_22 = (+(12159638869505271992ULL));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)45783;
unsigned char var_2 = (unsigned char)176;
unsigned long long int var_15 = 2640460026436962397ULL;
short var_17 = (short)18154;
short var_18 = (short)2169;
int zero = 0;
unsigned short var_20 = (unsigned short)18393;
signed char var_21 = (signed char)9;
unsigned long long int var_22 = 13153340419194488995ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned short)1;
    value_mismatch |= var_21 != (signed char)-22;
    value_mismatch |= var_22 != 12159638869505271992ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_15, var_17, var_18, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
