/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1819
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1819
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
void test(val<bool> var_6, val<int> zero, val<unsigned int*> var_12, val<int*> var_13) {
    *var_12 |= ((/* implicit */val<unsigned int>) var_6);
    *var_13 = -2089156008;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_6 = (bool)0;
int zero = 0;
unsigned int var_12 = 3986821723U;
int var_13 = -1421455175;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 3986821723U;
    value_mismatch |= var_13 != -2089156008;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
