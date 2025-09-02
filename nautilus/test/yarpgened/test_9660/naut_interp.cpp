/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9660
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9660
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
void test(val<unsigned long long int> var_0, val<bool> var_9, val<int> zero, val<bool*> var_16, val<unsigned long long int*> var_17) {
    *var_16 = ((/* implicit */val<bool>) (~(var_0)));
    *var_17 = ((/* implicit */val<unsigned long long int>) max((*var_17), (((/* implicit */val<unsigned long long int>) var_9))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11142985145887423324ULL;
bool var_9 = (bool)0;
int zero = 0;
bool var_16 = (bool)1;
unsigned long long int var_17 = 7478782802885196ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != 7478782802885196ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_9, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
