/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3835
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3835
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
void test(val<short> var_5, val<short> var_6, val<unsigned short> var_9, val<int> zero, val<int*> var_10, val<bool*> var_11, val<unsigned int*> var_12, val<unsigned int*> var_13) {
    *var_10 = ((/* implicit */val<int>) 4294967284U);
    *var_11 += ((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) var_6)), ((-((-(4294967284U)))))));
    *var_12 += ((/* implicit */val<unsigned int>) var_9);
    *var_13 = ((/* implicit */val<unsigned int>) max((*var_13), (((/* implicit */val<unsigned int>) ((val<unsigned long long int>) var_5)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-4002;
short var_6 = (short)-4641;
unsigned short var_9 = (unsigned short)20157;
int zero = 0;
int var_10 = 838001308;
bool var_11 = (bool)0;
unsigned int var_12 = 1242939499U;
unsigned int var_13 = 2985300867U;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != -12;
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != 1242959656U;
    value_mismatch |= var_13 != 4294963294U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_6, var_9, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
