/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2734
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2734
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
void test(val<unsigned char> var_11, val<int> zero, val<signed char*> var_18, val<signed char*> var_19) {
    *var_18 = ((/* implicit */val<signed char>) var_11);
    *var_19 ^= ((/* implicit */val<signed char>) (~(((/* implicit */val<int>) (val<short>)-7792))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_11 = (unsigned char)34;
int zero = 0;
signed char var_18 = (signed char)-85;
signed char var_19 = (signed char)-29;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)34;
    value_mismatch |= var_19 != (signed char)-116;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_11, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
