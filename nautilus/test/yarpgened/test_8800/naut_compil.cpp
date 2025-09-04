/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8800
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8800
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
void test(val<signed char> var_2, val<unsigned char> var_3, val<signed char> var_5, val<int> zero, val<unsigned char*> var_15, val<unsigned char*> var_16) {
    *var_15 -= ((/* implicit */val<unsigned char>) var_5);
    *var_16 = ((/* implicit */val<unsigned char>) (((-(((/* implicit */val<int>) ((val<unsigned char>) (val<unsigned char>)105))))) * ((((+(((/* implicit */val<int>) var_3)))) * (((/* implicit */val<int>) var_2))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)87;
unsigned char var_3 = (unsigned char)244;
signed char var_5 = (signed char)84;
int zero = 0;
unsigned char var_15 = (unsigned char)122;
unsigned char var_16 = (unsigned char)43;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned char)38;
    value_mismatch |= var_16 != (unsigned char)52;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_5, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
