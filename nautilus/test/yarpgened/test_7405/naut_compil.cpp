/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7405
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7405
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
void test(val<bool> var_2, val<signed char> var_5, val<int> var_7, val<unsigned int> var_8, val<short> var_11, val<unsigned int> var_12, val<int> zero, val<int*> var_14, val<int*> var_15, val<int*> var_16, val<short*> var_17) {
    *var_14 += ((((/* implicit */val<bool>) ((min((var_12), (((/* implicit */val<unsigned int>) (val<short>)-23630)))) | (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5)))))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<short>)1))))) : (((/* implicit */val<int>) (val<short>)-22634)));
    *var_15 = ((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_11))) >= (var_8)));
    *var_16 -= ((/* implicit */val<int>) var_2);
    *var_17 &= ((/* implicit */val<short>) ((val<long long int>) var_7));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_2 = (bool)1;
signed char var_5 = (signed char)-63;
int var_7 = 689552401;
unsigned int var_8 = 4236716870U;
short var_11 = (short)8186;
unsigned int var_12 = 2361286439U;
int zero = 0;
int var_14 = 1838864578;
int var_15 = 1595834870;
int var_16 = -425712496;
short var_17 = (short)-3156;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 1838864578;
    value_mismatch |= var_15 != 0;
    value_mismatch |= var_16 != -425712497;
    value_mismatch |= var_17 != (short)-20480;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_7, var_8, var_11, var_12, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
