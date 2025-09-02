/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9733
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9733
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
void test(val<bool> var_3, val<unsigned short> var_4, val<signed char> var_7, val<int> zero, val<unsigned char*> var_12, val<unsigned int*> var_13, val<unsigned int*> var_14) {
    *var_12 = ((/* implicit */val<unsigned char>) (-(((/* implicit */val<int>) ((val<unsigned char>) ((var_3) || (((/* implicit */val<bool>) var_7))))))));
    *var_13 = ((/* implicit */val<unsigned int>) var_4);
    *var_14 -= ((522895767U) & (522895780U));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_3 = (bool)0;
unsigned short var_4 = (unsigned short)28026;
signed char var_7 = (signed char)-29;
int zero = 0;
unsigned char var_12 = (unsigned char)90;
unsigned int var_13 = 3088049775U;
unsigned int var_14 = 3855150907U;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned char)255;
    value_mismatch |= var_13 != 28026U;
    value_mismatch |= var_14 != 3332255159U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_7, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
