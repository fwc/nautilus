/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2420
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2420
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
void test(val<unsigned char> var_2, val<unsigned char> var_8, val<unsigned char> var_10, val<int> zero, val<signed char*> var_15, val<bool*> var_16, val<bool*> var_17) {
    *var_15 = ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) var_2))));
    *var_16 = ((/* implicit */val<bool>) var_10);
    *var_17 = ((/* implicit */val<bool>) ((val<unsigned char>) ((val<signed char>) var_8)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)47;
unsigned char var_8 = (unsigned char)208;
unsigned char var_10 = (unsigned char)141;
int zero = 0;
signed char var_15 = (signed char)18;
bool var_16 = (bool)1;
bool var_17 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)0;
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_8, var_10, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
