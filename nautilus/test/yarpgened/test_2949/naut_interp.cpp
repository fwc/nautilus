/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2949
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2949
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
void test(val<short> var_1, val<unsigned long long int> var_9, val<int> zero, val<short*> var_11, val<unsigned int*> var_12) {
    *var_11 = var_1;
    *var_12 = ((/* implicit */val<unsigned int>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)4253;
unsigned long long int var_9 = 11024121365782137642ULL;
int zero = 0;
short var_11 = (short)25914;
unsigned int var_12 = 333455861U;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (short)4253;
    value_mismatch |= var_12 != 1346177834U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_9, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
