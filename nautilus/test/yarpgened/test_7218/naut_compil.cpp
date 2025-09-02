/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7218
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7218
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
void test(val<bool> var_8, val<int> zero, val<unsigned char*> var_10, val<bool*> var_11, val<unsigned char*> var_12) {
    *var_10 = ((/* implicit */val<unsigned char>) max((*var_10), (((/* implicit */val<unsigned char>) ((val<int>) (val<bool>)1)))));
    *var_11 |= ((/* implicit */val<bool>) 2147483647);
    *var_12 = ((/* implicit */val<unsigned char>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_8 = (bool)1;
int zero = 0;
unsigned char var_10 = (unsigned char)88;
bool var_11 = (bool)1;
unsigned char var_12 = (unsigned char)42;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned char)88;
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != (unsigned char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
