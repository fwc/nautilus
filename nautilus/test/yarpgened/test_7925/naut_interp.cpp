/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7925
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7925
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
void test(val<signed char> var_4, val<signed char> var_8, val<unsigned int> var_11, val<int> zero, val<short*> var_16, val<unsigned int*> var_17) {
    *var_16 = ((/* implicit */val<short>) ((val<unsigned char>) ((((/* implicit */val<bool>) var_4)) ? (((var_11) & (var_11))) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) var_4))))))));
    *var_17 = ((/* implicit */val<unsigned int>) var_4);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)116;
signed char var_8 = (signed char)-74;
unsigned int var_11 = 1510898882U;
int zero = 0;
short var_16 = (short)22369;
unsigned int var_17 = 2077542036U;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (short)194;
    value_mismatch |= var_17 != 116U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_8, var_11, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
