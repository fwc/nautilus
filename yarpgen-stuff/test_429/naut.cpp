/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 429
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=429
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
void test(val<bool> var_8, val<unsigned long long int> var_13, val<unsigned int> var_15, val<int> zero, val<bool*> var_16, val<short*> var_17) {
    *var_16 -= ((/* implicit */val<bool>) max((var_15), (((val<unsigned int>) var_13))));
    *var_17 = ((/* implicit */val<short>) ((val<unsigned int>) ((val<unsigned char>) var_8)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_8 = (bool)0;
unsigned long long int var_13 = 10819852433772196457ULL;
unsigned int var_15 = 1102878474U;
int zero = 0;
bool var_16 = (bool)1;
short var_17 = (short)-24240;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (bool)0;
    value_mismatch |= var_17 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_13, var_15, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
