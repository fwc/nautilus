/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2589
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2589
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
void test(val<bool> var_0, val<unsigned int> var_1, val<unsigned int> var_5, val<int> zero, val<long long int*> var_15, val<unsigned char*> var_16) {
    *var_15 ^= ((/* implicit */val<long long int>) ((var_0) ? (((((((/* implicit */val<bool>) (val<unsigned short>)24172)) ? (((/* implicit */val<unsigned int>) 2147483632)) : (745578517U))) - ((+(var_1))))) : (var_5)));
    *var_16 = ((/* implicit */val<unsigned char>) (val<short>)17340);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
unsigned int var_1 = 928138125U;
unsigned int var_5 = 2610834453U;
int zero = 0;
long long int var_15 = 4219489511740158949LL;
unsigned char var_16 = (unsigned char)132;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 4219489510526783366LL;
    value_mismatch |= var_16 != (unsigned char)188;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_5, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
