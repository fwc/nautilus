/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5620
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5620
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
void test(val<signed char> var_0, val<signed char> var_2, val<unsigned int> var_6, val<int> zero, val<unsigned short*> var_13, val<unsigned char*> var_14, val<short*> var_15) {
    *var_13 ^= ((/* implicit */val<unsigned short>) var_0);
    *var_14 = ((/* implicit */val<unsigned char>) var_6);
    *var_15 &= ((/* implicit */val<short>) (!(((/* implicit */val<bool>) (~(min((((/* implicit */val<unsigned int>) var_2)), (var_6))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-127;
signed char var_2 = (signed char)8;
unsigned int var_6 = 745149852U;
int zero = 0;
unsigned short var_13 = (unsigned short)9612;
unsigned char var_14 = (unsigned char)237;
short var_15 = (short)-14042;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)55821;
    value_mismatch |= var_14 != (unsigned char)156;
    value_mismatch |= var_15 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_6, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
