/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6697
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6697
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
void test(val<int> var_2, val<short> var_15, val<int> zero, val<short*> var_17, val<signed char*> var_18, val<unsigned char*> var_19) {
    *var_17 = var_15;
    *var_18 ^= ((/* implicit */val<signed char>) var_2);
    *var_19 = ((/* implicit */val<unsigned char>) (val<short>)-18535);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 916520233;
short var_15 = (short)-30444;
int zero = 0;
short var_17 = (short)-3739;
signed char var_18 = (signed char)116;
unsigned char var_19 = (unsigned char)143;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (short)-30444;
    value_mismatch |= var_18 != (signed char)93;
    value_mismatch |= var_19 != (unsigned char)153;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_15, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
