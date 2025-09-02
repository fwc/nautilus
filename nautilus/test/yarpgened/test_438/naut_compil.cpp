/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 438
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=438
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
void test(val<int> var_0, val<int> var_3, val<unsigned int> var_9, val<bool> var_13, val<int> zero, val<signed char*> var_15, val<unsigned char*> var_16) {
    *var_15 = ((/* implicit */val<signed char>) var_13);
    *var_16 = ((/* implicit */val<unsigned char>) max((*var_16), (((/* implicit */val<unsigned char>) ((max((var_9), (((/* implicit */val<unsigned int>) ((var_0) != (var_0)))))) & (((/* implicit */val<unsigned int>) var_3)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -595348453;
int var_3 = -110683154;
unsigned int var_9 = 3376835660U;
bool var_13 = (bool)0;
int zero = 0;
signed char var_15 = (signed char)-101;
unsigned char var_16 = (unsigned char)1;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)0;
    value_mismatch |= var_16 != (unsigned char)76;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_9, var_13, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
