/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3950
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3950
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
void test(val<long long int> var_3, val<short> var_8, val<unsigned char> var_9, val<int> zero, val<unsigned int*> var_10, val<int*> var_11) {
    *var_10 &= ((/* implicit */val<unsigned int>) ((val<unsigned long long int>) ((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<long long int>) (~(((/* implicit */val<int>) var_9))))) : (var_3))));
    *var_11 = ((/* implicit */val<int>) min((*var_11), (((/* implicit */val<int>) var_8))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1173292610425869042LL;
short var_8 = (short)29042;
unsigned char var_9 = (unsigned char)187;
int zero = 0;
unsigned int var_10 = 219654131U;
int var_11 = 1655083648;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 219653952U;
    value_mismatch |= var_11 != 29042;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_8, var_9, zero, &var_10, &var_11);
  checksum();
}
