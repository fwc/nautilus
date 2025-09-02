/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7582
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7582
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
void test(val<unsigned int> var_4, val<unsigned long long int> var_6, val<int> var_7, val<signed char> var_8, val<int> zero, val<long long int*> var_11, val<long long int*> var_12, val<int*> var_13) {
    *var_11 = ((/* implicit */val<long long int>) max((*var_11), (((/* implicit */val<long long int>) var_7))));
    *var_12 += ((/* implicit */val<long long int>) var_7);
    *var_13 = ((/* implicit */val<int>) ((min((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_8))) >= (var_4)))), (var_6))) != (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_8)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1470031174U;
unsigned long long int var_6 = 14644838493462905758ULL;
int var_7 = 1778970773;
signed char var_8 = (signed char)-19;
int zero = 0;
long long int var_11 = -7561426477876720906LL;
long long int var_12 = -7339969812867746010LL;
int var_13 = 36483242;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 1778970773LL;
    value_mismatch |= var_12 != -7339969811088775237LL;
    value_mismatch |= var_13 != 1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_6, var_7, var_8, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
