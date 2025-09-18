/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8815
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8815
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
void test(val<short> var_1, val<bool> var_3, val<signed char> var_11, val<unsigned short> var_13, val<short> var_15, val<int> zero, val<int*> var_19, val<signed char*> var_20, val<unsigned short*> var_21) {
    *var_19 = ((/* implicit */val<int>) min((*var_19), ((~(((/* implicit */val<int>) var_1))))));
    *var_20 = ((/* implicit */val<signed char>) var_15);
    *var_21 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) 0U)) ? (((((/* implicit */val<bool>) 15U)) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) ((val<unsigned char>) var_13))))) : (((/* implicit */val<int>) var_3))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-3384;
bool var_3 = (bool)1;
signed char var_11 = (signed char)52;
unsigned short var_13 = (unsigned short)65232;
short var_15 = (short)-17659;
int zero = 0;
int var_19 = 510976378;
signed char var_20 = (signed char)-19;
unsigned short var_21 = (unsigned short)63910;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 3383;
    value_mismatch |= var_20 != (signed char)5;
    value_mismatch |= var_21 != (unsigned short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_11, var_13, var_15, zero, &var_19, &var_20, &var_21);
  checksum();
}
