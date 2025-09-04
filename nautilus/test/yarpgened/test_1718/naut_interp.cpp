/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1718
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1718
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
void test(val<unsigned int> var_1, val<int> var_2, val<int> zero, val<unsigned long long int*> var_13, val<int*> var_14) {
    *var_13 |= ((/* implicit */val<unsigned long long int>) (-((+(((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_1)))))))));
    *var_14 = ((/* implicit */val<int>) ((val<unsigned short>) var_2));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1589255794U;
int var_2 = -868605683;
int zero = 0;
unsigned long long int var_13 = 11755512749022612831ULL;
int var_14 = 2080979160;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 11755512749022612831ULL;
    value_mismatch |= var_14 != 8461;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
