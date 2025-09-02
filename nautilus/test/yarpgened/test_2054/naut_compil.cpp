/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2054
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2054
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
void test(val<int> var_2, val<long long int> var_9, val<int> zero, val<unsigned char*> var_11, val<bool*> var_12) {
    *var_11 = ((/* implicit */val<unsigned char>) var_9);
    *var_12 = ((/* implicit */val<bool>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 898107437;
long long int var_9 = -7259187732257066045LL;
int zero = 0;
unsigned char var_11 = (unsigned char)167;
bool var_12 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned char)195;
    value_mismatch |= var_12 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_9, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
