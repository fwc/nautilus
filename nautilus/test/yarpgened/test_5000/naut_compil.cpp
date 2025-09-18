/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5000
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5000
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
void test(val<unsigned long long int> var_0, val<signed char> var_1, val<bool> var_3, val<unsigned long long int> var_8, val<bool> var_9, val<int> zero, val<signed char*> var_12, val<bool*> var_13) {
    *var_12 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) min(((~(((/* implicit */val<int>) var_9)))), (((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) (val<signed char>)26)) : (((/* implicit */val<int>) var_1))))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3))) : ((~(var_8)))));
    *var_13 = ((/* implicit */val<bool>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8894956524866118065ULL;
signed char var_1 = (signed char)-80;
bool var_3 = (bool)1;
unsigned long long int var_8 = 5783079719641351785ULL;
bool var_9 = (bool)0;
int zero = 0;
signed char var_12 = (signed char)77;
bool var_13 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (signed char)1;
    value_mismatch |= var_13 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_8, var_9, zero, &var_12, &var_13);
  checksum();
}
