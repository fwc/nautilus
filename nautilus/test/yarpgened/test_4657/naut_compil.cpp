/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4657
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4657
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
void test(val<signed char> var_2, val<signed char> var_6, val<unsigned char> var_10, val<signed char> var_13, val<int> zero, val<bool*> var_15, val<signed char*> var_16) {
    *var_15 = ((/* implicit */val<bool>) var_6);
    *var_16 |= ((/* implicit */val<signed char>) (((!(((((/* implicit */val<int>) var_10)) != (((/* implicit */val<int>) var_13)))))) || (((/* implicit */val<bool>) var_2))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)83;
signed char var_6 = (signed char)-40;
unsigned char var_10 = (unsigned char)135;
signed char var_13 = (signed char)-52;
int zero = 0;
bool var_15 = (bool)0;
signed char var_16 = (signed char)-73;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != (signed char)-73;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_6, var_10, var_13, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
