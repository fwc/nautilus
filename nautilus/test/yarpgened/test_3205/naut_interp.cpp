/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3205
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3205
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
void test(val<signed char> var_0, val<int> var_1, val<signed char> var_2, val<signed char> var_3, val<bool> var_4, val<unsigned char> var_7, val<int> var_8, val<short> var_10, val<int> zero, val<unsigned char*> var_14, val<unsigned int*> var_15, val<bool*> var_16) {
    *var_14 = ((/* implicit */val<unsigned char>) var_1);
    *var_15 = ((/* implicit */val<unsigned int>) max((((/* implicit */val<short>) var_0)), (var_10)));
    *var_16 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) (+(((/* implicit */val<int>) (val<signed char>)-85))))) ? ((-((-(((/* implicit */val<int>) var_4)))))) : (((((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_2))))) ? (((/* implicit */val<int>) var_0)) : (((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) var_3))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-5;
int var_1 = -1010794107;
signed char var_2 = (signed char)-7;
signed char var_3 = (signed char)86;
bool var_4 = (bool)0;
unsigned char var_7 = (unsigned char)185;
int var_8 = -476766689;
short var_10 = (short)16255;
int zero = 0;
unsigned char var_14 = (unsigned char)6;
unsigned int var_15 = 1258263635U;
bool var_16 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)133;
    value_mismatch |= var_15 != 16255U;
    value_mismatch |= var_16 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_7, var_8, var_10, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
