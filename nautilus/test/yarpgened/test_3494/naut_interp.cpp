/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3494
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3494
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
void test(val<unsigned long long int> var_6, val<signed char> var_7, val<unsigned char> var_9, val<int> zero, val<unsigned char*> var_17, val<unsigned int*> var_18) {
    *var_17 = ((/* implicit */val<unsigned char>) max((*var_17), (((/* implicit */val<unsigned char>) var_6))));
    *var_18 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (+(((/* implicit */val<int>) (val<unsigned char>)172))))) ? (((/* implicit */val<int>) var_7)) : ((~(((/* implicit */val<int>) var_9))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 8702938865889398455ULL;
signed char var_7 = (signed char)-119;
unsigned char var_9 = (unsigned char)64;
int zero = 0;
unsigned char var_17 = (unsigned char)42;
unsigned int var_18 = 246168679U;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned char)183;
    value_mismatch |= var_18 != 4294967177U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_7, var_9, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
