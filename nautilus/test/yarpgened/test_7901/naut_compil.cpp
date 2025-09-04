/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7901
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7901
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
void test(val<bool> var_9, val<bool> var_11, val<int> zero, val<unsigned short*> var_16, val<signed char*> var_17) {
    *var_16 |= ((/* implicit */val<unsigned short>) var_9);
    *var_17 = ((/* implicit */val<signed char>) var_11);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_9 = (bool)0;
bool var_11 = (bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)25642;
signed char var_17 = (signed char)-32;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned short)25642;
    value_mismatch |= var_17 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, var_11, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
