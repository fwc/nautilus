/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8661
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8661
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
void test(val<unsigned int> var_1, val<unsigned short> var_3, val<int> zero, val<bool*> var_13, val<unsigned char*> var_14, val<long long int*> var_15) {
    *var_13 += ((/* implicit */val<bool>) 143873564U);
    *var_14 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_3)) ? (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<bool>) 3298309073U)))) * (((val<unsigned long long int>) 3298309073U)))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)-77)))));
    *var_15 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((val<unsigned short>) var_1))) ? (((/* implicit */val<int>) (val<bool>)0)) : (((/* implicit */val<int>) ((val<unsigned char>) (val<signed char>)76)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3522731768U;
unsigned short var_3 = (unsigned short)61;
int zero = 0;
bool var_13 = (bool)1;
unsigned char var_14 = (unsigned char)74;
long long int var_15 = -8331494307358344329LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (unsigned char)209;
    value_mismatch |= var_15 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
