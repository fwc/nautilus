/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 819
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=819
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
void test(val<unsigned int> var_2, val<unsigned char> var_8, val<int> zero, val<bool*> var_13, val<unsigned char*> var_14, val<bool*> var_15) {
    *var_13 |= ((/* implicit */val<bool>) var_2);
    *var_14 -= ((/* implicit */val<unsigned char>) var_2);
    *var_15 |= ((/* implicit */val<bool>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 802186624U;
unsigned char var_8 = (unsigned char)203;
int zero = 0;
bool var_13 = (bool)0;
unsigned char var_14 = (unsigned char)60;
bool var_15 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (unsigned char)188;
    value_mismatch |= var_15 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_8, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
