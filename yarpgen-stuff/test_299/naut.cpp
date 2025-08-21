/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 299
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=299
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
void test(val<unsigned long long int> var_2, val<int> var_3, val<int> var_11, val<int> zero, val<long long int*> var_19, val<long long int*> var_20) {
    *var_19 |= ((/* implicit */val<long long int>) var_11);
    *var_20 = ((/* implicit */val<long long int>) ((((/* implicit */val<unsigned long long int>) var_3)) + ((-(var_2)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 266328060405882970ULL;
int var_3 = -593139877;
int var_11 = 1806589866;
int zero = 0;
long long int var_19 = 8250516772382020683LL;
long long int var_20 = 3672790984714088388LL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 8250516774135521259LL;
    value_mismatch |= var_20 != -266328060999022847LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_11, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
