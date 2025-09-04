/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6317
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6317
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
void test(val<signed char> var_1, val<short> var_2, val<short> var_7, val<unsigned char> var_14, val<int> zero, val<bool*> var_16, val<unsigned short*> var_17) {
    *var_16 = ((/* implicit */val<bool>) var_2);
    *var_17 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_14))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)80;
short var_2 = (short)-15729;
short var_7 = (short)-16120;
unsigned char var_14 = (unsigned char)250;
int zero = 0;
bool var_16 = (bool)0;
unsigned short var_17 = (unsigned short)57729;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != (unsigned short)80;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_7, var_14, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
