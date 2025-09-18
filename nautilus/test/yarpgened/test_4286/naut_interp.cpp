/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4286
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4286
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
void test(val<int> var_2, val<unsigned char> var_3, val<unsigned short> var_9, val<unsigned short> var_11, val<int> var_12, val<signed char> var_13, val<int> zero, val<int*> var_14, val<unsigned char*> var_15, val<unsigned short*> var_16) {
    *var_14 ^= var_2;
    *var_15 = ((/* implicit */val<unsigned char>) (val<signed char>)-126);
    *var_16 += ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<int>) var_3)) : (((((/* implicit */val<int>) (val<unsigned short>)8192)) >> (((((/* implicit */val<int>) var_11)) - (6341)))))))) ? (((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<int>) var_13)) : (((/* implicit */val<int>) var_9)))) : (((/* implicit */val<int>) var_9))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1930689243;
unsigned char var_3 = (unsigned char)154;
unsigned short var_9 = (unsigned short)52471;
unsigned short var_11 = (unsigned short)6356;
int var_12 = -1072067767;
signed char var_13 = (signed char)-24;
int zero = 0;
int var_14 = -1448735991;
unsigned char var_15 = (unsigned char)5;
unsigned short var_16 = (unsigned short)44714;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != -625610286;
    value_mismatch |= var_15 != (unsigned char)130;
    value_mismatch |= var_16 != (unsigned short)44690;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_9, var_11, var_12, var_13, zero, &var_14, &var_15, &var_16);
  checksum();
}
