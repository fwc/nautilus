/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1707
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1707
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
void test(val<long long int> var_0, val<signed char> var_1, val<bool> var_9, val<int> zero, val<unsigned short*> var_10, val<unsigned short*> var_11) {
    *var_10 ^= ((/* implicit */val<unsigned short>) var_1);
    *var_11 = ((/* implicit */val<unsigned short>) (~(((/* implicit */val<int>) ((val<short>) max((((/* implicit */val<long long int>) var_9)), (var_0)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6736890593098924116LL;
signed char var_1 = (signed char)-92;
bool var_9 = (bool)0;
int zero = 0;
unsigned short var_10 = (unsigned short)36339;
unsigned short var_11 = (unsigned short)37725;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned short)29271;
    value_mismatch |= var_11 != (unsigned short)65451;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_9, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
