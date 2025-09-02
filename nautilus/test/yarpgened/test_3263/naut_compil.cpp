/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3263
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3263
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
void test(val<short> var_2, val<short> var_4, val<int> zero, val<short*> var_18, val<short*> var_19) {
    *var_18 &= ((/* implicit */val<short>) (~(((/* implicit */val<int>) ((val<short>) var_2)))));
    *var_19 = var_4;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)11637;
short var_4 = (short)17996;
int zero = 0;
short var_18 = (short)5332;
short var_19 = (short)-4558;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)4224;
    value_mismatch |= var_19 != (short)17996;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
