/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4951
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4951
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
void test(val<short> var_2, val<unsigned int> var_8, val<unsigned short> var_12, val<short> var_13, val<int> zero, val<short*> var_15, val<long long int*> var_16) {
    *var_15 = ((/* implicit */val<short>) var_8);
    *var_16 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_12)) ? (max(((+(((/* implicit */val<int>) var_2)))), ((~(((/* implicit */val<int>) var_13)))))) : (((/* implicit */val<int>) var_13))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)2537;
unsigned int var_8 = 1167357095U;
unsigned short var_12 = (unsigned short)26256;
short var_13 = (short)29094;
int zero = 0;
short var_15 = (short)-30531;
long long int var_16 = 6958172394525690374LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)29863;
    value_mismatch |= var_16 != 2537LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_8, var_12, var_13, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
