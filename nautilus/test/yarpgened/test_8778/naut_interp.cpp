/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8778
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8778
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
void test(val<signed char> var_6, val<unsigned int> var_8, val<signed char> var_10, val<unsigned char> var_14, val<int> zero, val<signed char*> var_16, val<unsigned int*> var_17, val<unsigned int*> var_18) {
    *var_16 = ((/* implicit */val<signed char>) var_14);
    *var_17 = max((((/* implicit */val<unsigned int>) (val<unsigned char>)181)), (((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)0))) : (var_8))));
    *var_18 = ((/* implicit */val<unsigned int>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-66;
unsigned int var_8 = 1605857031U;
signed char var_10 = (signed char)-15;
unsigned char var_14 = (unsigned char)126;
int zero = 0;
signed char var_16 = (signed char)26;
unsigned int var_17 = 3055408661U;
unsigned int var_18 = 303800025U;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (signed char)126;
    value_mismatch |= var_17 != 181U;
    value_mismatch |= var_18 != 4294967230U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_8, var_10, var_14, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
