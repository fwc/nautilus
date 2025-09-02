/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 695
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=695
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
void test(val<unsigned char> var_3, val<signed char> var_7, val<unsigned short> var_9, val<unsigned short> var_12, val<int> zero, val<short*> var_15, val<int*> var_16, val<unsigned char*> var_17) {
    *var_15 += ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_12)) ? (max((650029544937440038ULL), (((/* implicit */val<unsigned long long int>) var_7)))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_7))))))))) && (((/* implicit */val<bool>) var_9))));
    *var_16 = ((/* implicit */val<int>) ((17796714528772111577ULL) <= (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)9)))));
    *var_17 = ((/* implicit */val<unsigned char>) max((*var_17), (var_3)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)121;
signed char var_7 = (signed char)-16;
unsigned short var_9 = (unsigned short)60462;
unsigned short var_12 = (unsigned short)11414;
int zero = 0;
short var_15 = (short)-21625;
int var_16 = 1740689105;
unsigned char var_17 = (unsigned char)122;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)-21624;
    value_mismatch |= var_16 != 0;
    value_mismatch |= var_17 != (unsigned char)122;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_7, var_9, var_12, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
