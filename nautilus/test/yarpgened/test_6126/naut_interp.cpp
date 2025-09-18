/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6126
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6126
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
void test(val<unsigned char> var_10, val<unsigned long long int> var_13, val<int> zero, val<int*> var_20, val<long long int*> var_21, val<int*> var_22) {
    *var_20 = ((/* implicit */val<int>) var_13);
    *var_21 |= ((/* implicit */val<long long int>) var_10);
    *var_22 = ((/* implicit */val<int>) var_13);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_10 = (unsigned char)76;
unsigned long long int var_13 = 637259365469449357ULL;
int zero = 0;
int var_20 = 263174997;
long long int var_21 = 5370916283394928165LL;
int var_22 = 2081442979;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 1016654989;
    value_mismatch |= var_21 != 5370916283394928237LL;
    value_mismatch |= var_22 != 1016654989;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_10, var_13, zero, &var_20, &var_21, &var_22);
  checksum();
}
