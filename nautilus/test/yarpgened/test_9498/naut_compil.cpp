/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9498
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9498
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
void test(val<short> var_0, val<unsigned short> var_5, val<unsigned short> var_7, val<unsigned int> var_8, val<int> var_9, val<unsigned char> var_11, val<short> var_12, val<int> zero, val<unsigned char*> var_14, val<signed char*> var_15, val<unsigned short*> var_16, val<short*> var_17) {
    *var_14 = ((/* implicit */val<unsigned char>) var_8);
    *var_15 &= ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_12)) : (((/* implicit */val<int>) min((var_5), (((/* implicit */val<unsigned short>) var_11)))))));
    *var_16 = ((/* implicit */val<unsigned short>) max((*var_16), (((/* implicit */val<unsigned short>) (val<signed char>)95))));
    *var_17 = ((/* implicit */val<short>) min((var_9), (((/* implicit */val<int>) var_7))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31357;
unsigned short var_5 = (unsigned short)1015;
unsigned short var_7 = (unsigned short)32086;
unsigned int var_8 = 3663325417U;
int var_9 = -1573988306;
unsigned char var_11 = (unsigned char)150;
short var_12 = (short)-3074;
int zero = 0;
unsigned char var_14 = (unsigned char)194;
signed char var_15 = (signed char)-104;
unsigned short var_16 = (unsigned short)41529;
short var_17 = (short)22534;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)233;
    value_mismatch |= var_15 != (signed char)-104;
    value_mismatch |= var_16 != (unsigned short)41529;
    value_mismatch |= var_17 != (short)-10194;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_7, var_8, var_9, var_11, var_12, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
}
