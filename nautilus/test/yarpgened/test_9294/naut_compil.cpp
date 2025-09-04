/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9294
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9294
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
void test(val<bool> var_0, val<unsigned int> var_3, val<long long int> var_9, val<long long int> var_10, val<int> zero, val<signed char*> var_11, val<unsigned short*> var_12) {
    *var_11 = ((/* implicit */val<signed char>) max((((/* implicit */val<long long int>) (~(var_3)))), (min((((((/* implicit */val<bool>) var_10)) ? (var_9) : (((/* implicit */val<long long int>) var_3)))), (((/* implicit */val<long long int>) var_0))))));
    *var_12 = ((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) ((val<long long int>) ((((/* implicit */val<long long int>) 1397610308U)) - (var_10)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
unsigned int var_3 = 2597783096U;
long long int var_9 = -3673567697317229671LL;
long long int var_10 = 1113556110336203349LL;
int zero = 0;
signed char var_11 = (signed char)96;
unsigned short var_12 = (unsigned short)26322;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (signed char)-57;
    value_mismatch |= var_12 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_9, var_10, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
