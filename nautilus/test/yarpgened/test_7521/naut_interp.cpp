/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7521
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7521
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
void test(val<signed char> var_9, val<int> zero, val<unsigned int*> var_10, val<bool*> var_11) {
    *var_10 ^= ((/* implicit */val<unsigned int>) 1556025816);
    *var_11 ^= ((((/* implicit */val<bool>) max((max((-1556025816), (((/* implicit */val<int>) (val<bool>)1)))), (((/* implicit */val<int>) var_9))))) && ((!((val<bool>)1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)90;
int zero = 0;
unsigned int var_10 = 2173371800U;
bool var_11 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 3711177792U;
    value_mismatch |= var_11 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
