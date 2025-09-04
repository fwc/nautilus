/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8431
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8431
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
void test(val<bool> var_9, val<unsigned short> var_12, val<int> zero, val<long long int*> var_18, val<unsigned long long int*> var_19) {
    *var_18 = ((/* implicit */val<long long int>) var_12);
    *var_19 = ((/* implicit */val<unsigned long long int>) max((*var_19), (((/* implicit */val<unsigned long long int>) ((val<bool>) var_9)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_9 = (bool)1;
unsigned short var_12 = (unsigned short)15831;
int zero = 0;
long long int var_18 = -8522400483148903226LL;
unsigned long long int var_19 = 6473599730979635847ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 15831LL;
    value_mismatch |= var_19 != 6473599730979635847ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, var_12, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
