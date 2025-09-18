/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5624
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5624
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
void test(val<signed char> var_0, val<short> var_2, val<bool> var_6, val<long long int> var_9, val<unsigned short> var_12, val<short> var_13, val<int> var_14, val<int> zero, val<short*> var_20, val<unsigned char*> var_21, val<unsigned char*> var_22) {
    *var_20 = ((/* implicit */val<short>) ((var_6) ? (((val<int>) ((((/* implicit */val<bool>) 0ULL)) ? (1164166139U) : (16777215U)))) : (var_14)));
    *var_21 &= ((/* implicit */val<unsigned char>) max((((/* implicit */val<unsigned int>) (!(((((/* implicit */val<int>) (val<unsigned char>)33)) < (((/* implicit */val<int>) (val<bool>)1))))))), (2385391387U)));
    *var_22 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) max((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_13)) || (((/* implicit */val<bool>) var_2))))), (-2845533447088758528LL)))) ? (((((/* implicit */val<bool>) (val<signed char>)0)) ? (var_9) : (((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_0)) * (((/* implicit */val<int>) (val<bool>)1))))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_12)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)14;
short var_2 = (short)-1849;
bool var_6 = (bool)0;
long long int var_9 = 4522856576372938266LL;
unsigned short var_12 = (unsigned short)49028;
short var_13 = (short)7961;
int var_14 = -43968149;
int zero = 0;
short var_20 = (short)6620;
unsigned char var_21 = (unsigned char)37;
unsigned char var_22 = (unsigned char)78;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (short)6507;
    value_mismatch |= var_21 != (unsigned char)1;
    value_mismatch |= var_22 != (unsigned char)14;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_6, var_9, var_12, var_13, var_14, zero, &var_20, &var_21, &var_22);
  checksum();
}
