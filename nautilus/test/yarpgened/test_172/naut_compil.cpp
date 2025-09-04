/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 172
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=172
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
void test(val<short> var_0, val<unsigned short> var_3, val<short> var_4, val<unsigned char> var_5, val<unsigned long long int> var_7, val<short> var_10, val<int> zero, val<int*> var_20, val<unsigned long long int*> var_21) {
    *var_20 = ((/* implicit */val<int>) max((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) var_0))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) max((((/* implicit */val<short>) var_5)), (var_10))))) : (min((var_7), (((/* implicit */val<unsigned long long int>) (val<unsigned short>)30373)))))), (((/* implicit */val<unsigned long long int>) var_3))));
    *var_21 = ((/* implicit */val<unsigned long long int>) ((val<int>) ((((/* implicit */val<bool>) max((1385984983U), (2908982318U)))) ? (((/* implicit */val<long long int>) 2908982288U)) : ((-9223372036854775807LL - 1LL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13355;
unsigned short var_3 = (unsigned short)23858;
short var_4 = (short)-4990;
unsigned char var_5 = (unsigned char)163;
unsigned long long int var_7 = 10811031750020805608ULL;
short var_10 = (short)18941;
int zero = 0;
int var_20 = -311725307;
unsigned long long int var_21 = 9310441003204314197ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 23858;
    value_mismatch |= var_21 != 18446744072323566608ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_5, var_7, var_10, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
