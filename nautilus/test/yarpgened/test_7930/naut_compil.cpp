/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7930
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7930
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
void test(val<unsigned long long int> var_1, val<bool> var_5, val<short> var_12, val<int> zero, val<short*> var_13, val<bool*> var_14, val<bool*> var_15) {
    *var_13 = ((/* implicit */val<short>) var_5);
    *var_14 = ((/* implicit */val<bool>) var_1);
    *var_15 = ((/* implicit */val<bool>) min((*var_15), (((/* implicit */val<bool>) var_12))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2238062100835702579ULL;
bool var_5 = (bool)1;
short var_12 = (short)29319;
int zero = 0;
short var_13 = (short)15740;
bool var_14 = (bool)1;
bool var_15 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (short)1;
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_12, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
