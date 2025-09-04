/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3340
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3340
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
void test(val<short> var_2, val<unsigned char> var_8, val<short> var_9, val<long long int> var_13, val<int> zero, val<unsigned char*> var_17, val<unsigned int*> var_18, val<bool*> var_19, val<int*> var_20) {
    *var_17 = ((/* implicit */val<unsigned char>) var_2);
    *var_18 = ((/* implicit */val<unsigned int>) 18446744073709551615ULL);
    *var_19 = ((/* implicit */val<bool>) var_2);
    *var_20 -= ((/* implicit */val<int>) (-(((((var_13) & (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9))))) << ((((~(((/* implicit */val<int>) var_8)))) + (100)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)14475;
unsigned char var_8 = (unsigned char)59;
short var_9 = (short)21208;
long long int var_13 = -7919950698176570586LL;
int zero = 0;
unsigned char var_17 = (unsigned char)137;
unsigned int var_18 = 962516265U;
bool var_19 = (bool)1;
int var_20 = 1548181482;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned char)139;
    value_mismatch |= var_18 != 4294967295U;
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != 1548181482;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_8, var_9, var_13, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
