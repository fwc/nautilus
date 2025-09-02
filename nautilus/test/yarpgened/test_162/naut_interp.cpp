/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 162
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=162
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
void test(val<int> var_4, val<int> zero, val<int*> var_11, val<signed char*> var_12) {
    *var_11 = ((/* implicit */val<int>) ((val<unsigned int>) (+(var_4))));
    *var_12 ^= ((/* implicit */val<signed char>) -1895947395);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1092931868;
int zero = 0;
int var_11 = 1521406973;
signed char var_12 = (signed char)-17;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 1092931868;
    value_mismatch |= var_12 != (signed char)-110;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
