/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3078
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3078
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
void test(val<unsigned int> var_1, val<unsigned long long int> var_9, val<int> zero, val<short*> var_13, val<short*> var_14, val<bool*> var_15) {
    *var_13 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_1)) ? (var_9) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((val<bool>) (val<short>)4495)) || (((/* implicit */val<bool>) (val<short>)24193))))))));
    *var_14 = ((/* implicit */val<short>) var_9);
    *var_15 = ((/* implicit */val<bool>) max((*var_15), (((/* implicit */val<bool>) (val<unsigned short>)16296))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3802601010U;
unsigned long long int var_9 = 18427316172715123013ULL;
int zero = 0;
short var_13 = (short)11579;
short var_14 = (short)-29925;
bool var_15 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (short)-7867;
    value_mismatch |= var_14 != (short)-7867;
    value_mismatch |= var_15 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_9, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
