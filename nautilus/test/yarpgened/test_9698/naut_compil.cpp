/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9698
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9698
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
void test(val<int> var_0, val<unsigned char> var_3, val<long long int> var_7, val<int> zero, val<signed char*> var_14, val<unsigned long long int*> var_15, val<unsigned int*> var_16) {
    *var_14 = ((/* implicit */val<signed char>) -9212846009651407004LL);
    *var_15 = ((/* implicit */val<unsigned long long int>) max((*var_15), (((/* implicit */val<unsigned long long int>) var_3))));
    *var_16 = ((/* implicit */val<unsigned int>) ((var_7) >= (((((/* implicit */val<long long int>) var_0)) * (((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<long long int>) -1372294552)) : (9223372036854775807LL)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1622245065;
unsigned char var_3 = (unsigned char)131;
long long int var_7 = 5446250116726141206LL;
int zero = 0;
signed char var_14 = (signed char)-102;
unsigned long long int var_15 = 15522841953480912165ULL;
unsigned int var_16 = 134781070U;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (signed char)100;
    value_mismatch |= var_15 != 15522841953480912165ULL;
    value_mismatch |= var_16 != 1U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_7, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
