/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9668
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9668
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
void test(val<unsigned char> var_3, val<unsigned int> var_8, val<unsigned short> var_9, val<int> zero, val<int*> var_12, val<unsigned int*> var_13, val<unsigned char*> var_14, val<int*> var_15) {
    *var_12 = ((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_9))) * ((-((+(var_8)))))));
    *var_13 = ((/* implicit */val<unsigned int>) (-(2147483647)));
    *var_14 = ((/* implicit */val<unsigned char>) 3183300793U);
    *var_15 = ((/* implicit */val<int>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)188;
unsigned int var_8 = 1648693388U;
unsigned short var_9 = (unsigned short)49054;
int zero = 0;
int var_12 = 1177892885;
unsigned int var_13 = 2110442958U;
unsigned char var_14 = (unsigned char)187;
int var_15 = 36280822;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != -771271272;
    value_mismatch |= var_13 != 2147483649U;
    value_mismatch |= var_14 != (unsigned char)185;
    value_mismatch |= var_15 != 188;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_8, var_9, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
