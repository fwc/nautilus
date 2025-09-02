/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5418
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5418
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
void test(val<unsigned long long int> var_12, val<int> zero, val<unsigned long long int*> var_19, val<long long int*> var_20) {
    *var_19 = var_12;
    *var_20 = ((/* implicit */val<long long int>) max((*var_20), (((/* implicit */val<long long int>) var_12))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_12 = 4070930126722704648ULL;
int zero = 0;
unsigned long long int var_19 = 13932293084722573712ULL;
long long int var_20 = -5368387002119787351LL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 4070930126722704648ULL;
    value_mismatch |= var_20 != 4070930126722704648LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_12, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
