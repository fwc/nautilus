/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6792
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6792
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
void test(val<signed char> var_10, val<unsigned long long int> var_11, val<signed char> var_12, val<int> var_13, val<int> zero, val<unsigned int*> var_15, val<unsigned char*> var_16, val<bool*> var_17) {
    *var_15 = ((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) var_12))));
    *var_16 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) var_13)) > (((((/* implicit */val<bool>) (val<short>)18271)) ? (var_11) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)141)))))))) - (((((/* implicit */val<int>) var_10)) + (((((/* implicit */val<bool>) 9223372036854775807LL)) ? (((/* implicit */val<int>) (val<bool>)0)) : (((/* implicit */val<int>) (val<unsigned char>)37))))))));
    *var_17 -= ((/* implicit */val<bool>) (val<unsigned char>)49);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_10 = (signed char)-30;
unsigned long long int var_11 = 6641899256996235302ULL;
signed char var_12 = (signed char)114;
int var_13 = -307899780;
int zero = 0;
unsigned int var_15 = 2275171541U;
unsigned char var_16 = (unsigned char)170;
bool var_17 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 4294967182U;
    value_mismatch |= var_16 != (unsigned char)31;
    value_mismatch |= var_17 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_10, var_11, var_12, var_13, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
