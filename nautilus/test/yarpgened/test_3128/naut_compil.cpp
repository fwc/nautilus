/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3128
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3128
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
void test(val<signed char> var_9, val<int> var_10, val<int> zero, val<unsigned int*> var_13, val<unsigned short*> var_14, val<unsigned short*> var_15, val<unsigned char*> var_16) {
    *var_13 = ((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) ((val<unsigned char>) var_10)))));
    *var_14 = ((/* implicit */val<unsigned short>) -920960421517105895LL);
    *var_15 = ((/* implicit */val<unsigned short>) var_9);
    *var_16 += ((/* implicit */val<unsigned char>) (-(((/* implicit */val<int>) (val<short>)(-32767 - 1)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)54;
int var_10 = -954760392;
int zero = 0;
unsigned int var_13 = 4123386842U;
unsigned short var_14 = (unsigned short)22501;
unsigned short var_15 = (unsigned short)7203;
unsigned char var_16 = (unsigned char)75;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 4294967240U;
    value_mismatch |= var_14 != (unsigned short)25881;
    value_mismatch |= var_15 != (unsigned short)54;
    value_mismatch |= var_16 != (unsigned char)75;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, var_10, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
}
