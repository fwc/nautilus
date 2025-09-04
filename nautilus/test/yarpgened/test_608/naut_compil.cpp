/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 608
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=608
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
void test(val<short> var_1, val<unsigned int> var_4, val<unsigned short> var_17, val<int> zero, val<bool*> var_18, val<unsigned char*> var_19, val<unsigned int*> var_20, val<unsigned char*> var_21) {
    *var_18 = ((/* implicit */val<bool>) ((val<unsigned long long int>) var_17));
    *var_19 ^= ((/* implicit */val<unsigned char>) ((val<signed char>) ((val<unsigned short>) var_1)));
    *var_20 = var_4;
    *var_21 -= ((/* implicit */val<unsigned char>) ((val<unsigned short>) var_17));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-23565;
unsigned int var_4 = 2119802873U;
unsigned short var_17 = (unsigned short)37623;
int zero = 0;
bool var_18 = (bool)0;
unsigned char var_19 = (unsigned char)9;
unsigned int var_20 = 774189650U;
unsigned char var_21 = (unsigned char)164;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != (unsigned char)250;
    value_mismatch |= var_20 != 2119802873U;
    value_mismatch |= var_21 != (unsigned char)173;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_17, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
