/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 221
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=221
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
void test(val<signed char> var_2, val<int> var_3, val<short> var_5, val<bool> var_6, val<signed char> var_7, val<unsigned short> var_11, val<unsigned short> var_12, val<int> zero, val<short*> var_13, val<unsigned int*> var_14, val<signed char*> var_15) {
    *var_13 = ((/* implicit */val<short>) min((*var_13), (((/* implicit */val<short>) 9009138384440182207ULL))));
    *var_14 -= ((/* implicit */val<unsigned int>) (~(((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) var_5)) : (2117251892)))) ? (((/* implicit */val<int>) var_12)) : (((/* implicit */val<int>) var_7))))));
    *var_15 = ((/* implicit */val<signed char>) max(((((!(((/* implicit */val<bool>) var_3)))) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) ((val<short>) (val<unsigned short>)62052))))), (((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6))) == (((664095478485096088ULL) * (((/* implicit */val<unsigned long long int>) 1825167484U)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)99;
int var_3 = -810447423;
short var_5 = (short)24719;
bool var_6 = (bool)1;
signed char var_7 = (signed char)65;
unsigned short var_11 = (unsigned short)727;
unsigned short var_12 = (unsigned short)54947;
int zero = 0;
short var_13 = (short)15877;
unsigned int var_14 = 3159686332U;
signed char var_15 = (signed char)36;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (short)-14913;
    value_mismatch |= var_14 != 3159741280U;
    value_mismatch |= var_15 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_5, var_6, var_7, var_11, var_12, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
