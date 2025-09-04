/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8496
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8496
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
void test(val<int> zero, val<short*> var_11, val<unsigned short*> var_12, val<unsigned char*> var_13) {
    *var_11 = ((/* implicit */val<short>) (val<signed char>)108);
    *var_12 = (val<unsigned short>)65527;
    *var_13 = ((/* implicit */val<unsigned char>) max((*var_13), (((/* implicit */val<unsigned char>) (val<unsigned short>)65513))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
short var_11 = (short)-23363;
unsigned short var_12 = (unsigned short)64238;
unsigned char var_13 = (unsigned char)253;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (short)108;
    value_mismatch |= var_12 != (unsigned short)65527;
    value_mismatch |= var_13 != (unsigned char)253;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
