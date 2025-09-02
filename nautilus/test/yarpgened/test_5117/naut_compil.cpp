/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5117
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5117
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
void test(val<signed char> var_4, val<unsigned char> var_5, val<unsigned int> var_10, val<int> zero, val<unsigned char*> var_11, val<unsigned int*> var_12, val<unsigned int*> var_13) {
    *var_11 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) (((-(((/* implicit */val<int>) (val<unsigned short>)24352)))) ^ (((((/* implicit */val<int>) var_5)) ^ (((/* implicit */val<int>) var_5))))))) ? ((-(9075362467171951540LL))) : (((/* implicit */val<long long int>) max((((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4))) : (var_10))), (((/* implicit */val<unsigned int>) ((val<unsigned short>) -9075362467171951539LL))))))));
    *var_12 |= ((/* implicit */val<unsigned int>) var_5);
    *var_13 = ((/* implicit */val<unsigned int>) (val<unsigned short>)39334);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-67;
unsigned char var_5 = (unsigned char)155;
unsigned int var_10 = 2921262979U;
int zero = 0;
unsigned char var_11 = (unsigned char)4;
unsigned int var_12 = 370187323U;
unsigned int var_13 = 3298407440U;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned char)76;
    value_mismatch |= var_12 != 370187451U;
    value_mismatch |= var_13 != 39334U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
