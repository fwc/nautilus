/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8973
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8973
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
void test(val<unsigned int> var_5, val<int> zero, val<short*> var_10, val<int*> var_11) {
    *var_10 = ((/* implicit */val<short>) (~((-((-(547517199)))))));
    *var_11 = ((/* implicit */val<int>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 329113733U;
int zero = 0;
short var_10 = (short)18812;
int var_11 = 1172786280;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)-29456;
    value_mismatch |= var_11 != 329113733;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, zero, &var_10, &var_11);
  checksum();
}
