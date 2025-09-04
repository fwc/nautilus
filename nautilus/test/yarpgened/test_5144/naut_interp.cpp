/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5144
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5144
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
void test(val<bool> var_3, val<unsigned short> var_9, val<int> zero, val<unsigned int*> var_10, val<unsigned int*> var_11) {
    *var_10 = ((/* implicit */val<unsigned int>) var_3);
    *var_11 = ((/* implicit */val<unsigned int>) min((*var_11), (((/* implicit */val<unsigned int>) var_9))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_3 = (bool)1;
unsigned short var_9 = (unsigned short)46041;
int zero = 0;
unsigned int var_10 = 1233569762U;
unsigned int var_11 = 1405474120U;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 1U;
    value_mismatch |= var_11 != 46041U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_9, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
