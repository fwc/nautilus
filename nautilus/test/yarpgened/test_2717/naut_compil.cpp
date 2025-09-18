/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2717
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2717
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
void test(val<int> zero, val<bool*> var_15, val<long long int*> var_16) {
    *var_15 = ((/* implicit */val<bool>) (+(((((/* implicit */val<bool>) 1813649830)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)(-32767 - 1)))) : (28869304U)))));
    *var_16 |= ((/* implicit */val<long long int>) (+(((/* implicit */val<int>) (val<signed char>)-8))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
bool var_15 = (bool)0;
long long int var_16 = 7209621791016631551LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != -1LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_15, &var_16);
  checksum();
}
