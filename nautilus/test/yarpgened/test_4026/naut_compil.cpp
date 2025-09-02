/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4026
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4026
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
void test(val<short> var_0, val<unsigned short> var_1, val<unsigned char> var_2, val<signed char> var_12, val<int> zero, val<short*> var_20, val<unsigned long long int*> var_21, val<short*> var_22, val<signed char*> var_23, val<unsigned int*> var_24) {
    *var_20 = ((/* implicit */val<short>) (~(((/* implicit */val<int>) ((val<signed char>) var_0)))));
    *var_21 = ((/* implicit */val<unsigned long long int>) ((val<unsigned int>) (-(((/* implicit */val<int>) (val<unsigned char>)249)))));
    *var_22 = ((/* implicit */val<short>) ((val<unsigned int>) var_2));
    *var_23 = ((/* implicit */val<signed char>) (+(((/* implicit */val<int>) var_12))));
    *var_24 = ((/* implicit */val<unsigned int>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24454;
unsigned short var_1 = (unsigned short)60184;
unsigned char var_2 = (unsigned char)24;
signed char var_12 = (signed char)-69;
int zero = 0;
short var_20 = (short)27169;
unsigned long long int var_21 = 1680718488045391375ULL;
short var_22 = (short)22871;
signed char var_23 = (signed char)-21;
unsigned int var_24 = 394844605U;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (short)-123;
    value_mismatch |= var_21 != 4294967047ULL;
    value_mismatch |= var_22 != (short)24;
    value_mismatch |= var_23 != (signed char)-69;
    value_mismatch |= var_24 != 60184U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_12, zero, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
  assert(!value_mismatch);
}
