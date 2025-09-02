/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3870
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3870
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
void test(val<unsigned int> var_1, val<long long int> var_16, val<int> zero, val<unsigned char*> var_19, val<signed char*> var_20) {
    *var_19 = ((/* implicit */val<unsigned char>) var_16);
    *var_20 = ((/* implicit */val<signed char>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 755596051U;
long long int var_16 = 1918688166184396105LL;
int zero = 0;
unsigned char var_19 = (unsigned char)126;
signed char var_20 = (signed char)-78;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)73;
    value_mismatch |= var_20 != (signed char)19;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_16, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
