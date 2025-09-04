/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2318
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2318
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
void test(val<bool> var_9, val<bool> var_15, val<int> zero, val<signed char*> var_17, val<unsigned int*> var_18) {
    *var_17 = ((/* implicit */val<signed char>) var_9);
    *var_18 = ((3586762384U) + (((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) ((val<unsigned char>) var_15)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_9 = (bool)0;
bool var_15 = (bool)1;
int zero = 0;
signed char var_17 = (signed char)-65;
unsigned int var_18 = 569009728U;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (signed char)0;
    value_mismatch |= var_18 != 3586762383U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, var_15, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
