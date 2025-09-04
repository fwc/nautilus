/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4935
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4935
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
void test(val<signed char> var_0, val<short> var_1, val<bool> var_7, val<unsigned short> var_9, val<unsigned short> var_15, val<int> zero, val<unsigned int*> var_16, val<unsigned int*> var_17, val<long long int*> var_18) {
    *var_16 = ((/* implicit */val<unsigned int>) min((*var_16), (((/* implicit */val<unsigned int>) max((((/* implicit */val<unsigned short>) var_0)), (var_15))))));
    *var_17 = ((/* implicit */val<unsigned int>) var_1);
    *var_18 |= ((((((val<long long int>) (~(((/* implicit */val<int>) var_9))))) + (9223372036854775807LL))) >> (((((/* implicit */val<int>) var_7)) >> (((7516192768ULL) - (7516192744ULL))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-24;
short var_1 = (short)4645;
bool var_7 = (bool)0;
unsigned short var_9 = (unsigned short)6201;
unsigned short var_15 = (unsigned short)46760;
int zero = 0;
unsigned int var_16 = 2380123481U;
unsigned int var_17 = 2063817044U;
long long int var_18 = 2612206982964255733LL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 65512U;
    value_mismatch |= var_17 != 4645U;
    value_mismatch |= var_18 != 9223372036854775797LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_7, var_9, var_15, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
