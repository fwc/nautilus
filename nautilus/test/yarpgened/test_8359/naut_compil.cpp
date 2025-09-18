/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8359
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8359
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
void test(val<bool> var_0, val<int> var_5, val<short> var_9, val<unsigned int> var_10, val<unsigned int> var_12, val<bool> var_13, val<unsigned short> var_16, val<int> zero, val<short*> var_19, val<signed char*> var_20, val<signed char*> var_21) {
    *var_19 |= ((/* implicit */val<short>) ((var_0) ? ((+((+(((/* implicit */val<int>) var_9)))))) : (((/* implicit */val<int>) (val<unsigned char>)179))));
    *var_20 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_5)) ? (((((/* implicit */val<bool>) 7172902588424576059LL)) ? (((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_9))) : (var_10))) : (((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) var_13))))))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_16)))));
    *var_21 &= ((/* implicit */val<signed char>) ((val<unsigned char>) (~(var_12))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
int var_5 = 2071626433;
short var_9 = (short)28082;
unsigned int var_10 = 3319905194U;
unsigned int var_12 = 726744487U;
bool var_13 = (bool)0;
unsigned short var_16 = (unsigned short)21963;
int zero = 0;
short var_19 = (short)-11356;
signed char var_20 = (signed char)85;
signed char var_21 = (signed char)14;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)-11337;
    value_mismatch |= var_20 != (signed char)-78;
    value_mismatch |= var_21 != (signed char)8;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_9, var_10, var_12, var_13, var_16, zero, &var_19, &var_20, &var_21);
  checksum();
}
