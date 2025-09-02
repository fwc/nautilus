/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9623
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9623
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
void test(val<unsigned int> var_11, val<int> zero, val<unsigned int*> var_19, val<int*> var_20) {
    *var_19 = ((/* implicit */val<unsigned int>) (val<signed char>)-115);
    *var_20 = ((/* implicit */val<int>) var_11);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_11 = 2415320006U;
int zero = 0;
unsigned int var_19 = 38936910U;
int var_20 = 1138528720;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 4294967181U;
    value_mismatch |= var_20 != -1879647290;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_11, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
