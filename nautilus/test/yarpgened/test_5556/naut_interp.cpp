/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5556
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5556
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
void test(val<unsigned int> var_6, val<long long int> var_14, val<int> zero, val<bool*> var_15, val<bool*> var_16) {
    *var_15 = ((/* implicit */val<bool>) min((*var_15), (((/* implicit */val<bool>) var_14))));
    *var_16 = ((/* implicit */val<bool>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1639707439U;
long long int var_14 = 8849586576957796316LL;
int zero = 0;
bool var_15 = (bool)0;
bool var_16 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (bool)0;
    value_mismatch |= var_16 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_14, zero, &var_15, &var_16);
  checksum();
}
