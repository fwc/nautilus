/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9634
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9634
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
void test(val<unsigned int> var_9, val<bool> var_13, val<unsigned long long int> var_15, val<int> zero, val<signed char*> var_17, val<bool*> var_18) {
    *var_17 = ((/* implicit */val<signed char>) max((((/* implicit */val<long long int>) (~(1053188300U)))), (min((((((/* implicit */val<bool>) var_15)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_13))) : (67100672LL))), (((/* implicit */val<long long int>) (~((-2147483647 - 1)))))))));
    *var_18 = ((/* implicit */val<bool>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 1574467156U;
bool var_13 = (bool)1;
unsigned long long int var_15 = 4443501819948302483ULL;
int zero = 0;
signed char var_17 = (signed char)-104;
bool var_18 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (signed char)51;
    value_mismatch |= var_18 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, var_13, var_15, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
