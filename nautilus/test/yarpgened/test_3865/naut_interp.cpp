/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3865
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3865
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
void test(val<long long int> var_10, val<int> zero, val<unsigned long long int*> var_15, val<long long int*> var_16) {
    *var_15 = ((/* implicit */val<unsigned long long int>) max((*var_15), (((/* implicit */val<unsigned long long int>) (+(var_10))))));
    *var_16 = 3260970566830855665LL;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = 8369741383945402308LL;
int zero = 0;
unsigned long long int var_15 = 14694689995956064122ULL;
long long int var_16 = 3193615812867817034LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 14694689995956064122ULL;
    value_mismatch |= var_16 != 3260970566830855665LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_10, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
