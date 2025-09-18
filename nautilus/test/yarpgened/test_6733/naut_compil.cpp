/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6733
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6733
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
void test(val<long long int> var_0, val<unsigned long long int> var_7, val<int> zero, val<bool*> var_15, val<bool*> var_16) {
    *var_15 = ((/* implicit */val<bool>) max((*var_15), (((/* implicit */val<bool>) var_7))));
    *var_16 = ((/* implicit */val<bool>) ((val<short>) max((((/* implicit */val<long long int>) ((val<signed char>) (val<bool>)0))), (min((var_0), (864691128455135232LL))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9030505009414855756LL;
unsigned long long int var_7 = 14749662684335605063ULL;
int zero = 0;
bool var_15 = (bool)0;
bool var_16 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_7, zero, &var_15, &var_16);
  checksum();
}
