/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5696
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5696
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
void test(val<unsigned int> var_1, val<int> var_5, val<int> var_9, val<short> var_14, val<int> zero, val<unsigned int*> var_18, val<unsigned int*> var_19, val<bool*> var_20) {
    *var_18 = ((/* implicit */val<unsigned int>) ((val<int>) var_9));
    *var_19 = ((/* implicit */val<unsigned int>) (-(max((((/* implicit */val<int>) var_14)), (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) (val<short>)27263)) : (((/* implicit */val<int>) (val<bool>)1))))))));
    *var_20 = ((/* implicit */val<bool>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3401759144U;
int var_5 = -942565813;
int var_9 = -1334341174;
short var_14 = (short)-15242;
int zero = 0;
unsigned int var_18 = 4167287075U;
unsigned int var_19 = 3648738733U;
bool var_20 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 2960626122U;
    value_mismatch |= var_19 != 4294940033U;
    value_mismatch |= var_20 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_9, var_14, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
