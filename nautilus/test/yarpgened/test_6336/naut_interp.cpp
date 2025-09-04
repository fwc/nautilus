/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6336
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6336
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
void test(val<unsigned int> var_7, val<bool> var_11, val<int> zero, val<unsigned char*> var_12, val<long long int*> var_13, val<unsigned char*> var_14) {
    *var_12 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) -1092043369)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)23))) : (-9223372036854775805LL)));
    *var_13 ^= ((/* implicit */val<long long int>) ((var_7) > (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)0)))));
    *var_14 -= ((/* implicit */val<unsigned char>) var_11);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 3485043672U;
bool var_11 = (bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)174;
long long int var_13 = 7459268331372567135LL;
unsigned char var_14 = (unsigned char)102;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned char)23;
    value_mismatch |= var_13 != 7459268331372567134LL;
    value_mismatch |= var_14 != (unsigned char)101;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
