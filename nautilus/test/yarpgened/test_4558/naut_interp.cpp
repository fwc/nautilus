/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4558
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4558
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
void test(val<unsigned int> var_2, val<unsigned char> var_4, val<signed char> var_8, val<int> zero, val<unsigned int*> var_17, val<signed char*> var_18, val<signed char*> var_19) {
    *var_17 = ((/* implicit */val<unsigned int>) var_4);
    *var_18 *= ((/* implicit */val<signed char>) max((926870025U), (((/* implicit */val<unsigned int>) var_8))));
    *var_19 = ((/* implicit */val<signed char>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2596299212U;
unsigned char var_4 = (unsigned char)119;
signed char var_8 = (signed char)35;
int zero = 0;
unsigned int var_17 = 1810873763U;
signed char var_18 = (signed char)-107;
signed char var_19 = (signed char)7;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 119U;
    value_mismatch |= var_18 != (signed char)61;
    value_mismatch |= var_19 != (signed char)-52;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_8, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
