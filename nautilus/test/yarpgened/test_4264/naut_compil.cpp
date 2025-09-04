/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4264
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4264
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
void test(val<short> var_1, val<unsigned short> var_8, val<int> var_12, val<int> zero, val<int*> var_15, val<int*> var_16) {
    *var_15 = (+(((/* implicit */val<int>) ((((/* implicit */val<bool>) var_8)) || (((/* implicit */val<bool>) var_12))))));
    *var_16 = ((/* implicit */val<int>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26345;
unsigned short var_8 = (unsigned short)32116;
int var_12 = -1609199392;
int zero = 0;
int var_15 = 58710513;
int var_16 = 2143758258;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 1;
    value_mismatch |= var_16 != -26345;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_8, var_12, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
