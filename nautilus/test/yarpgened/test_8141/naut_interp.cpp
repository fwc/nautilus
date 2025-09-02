/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8141
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8141
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
void test(val<int> var_4, val<long long int> var_12, val<int> zero, val<short*> var_20, val<bool*> var_21) {
    *var_20 = ((/* implicit */val<short>) var_12);
    *var_21 |= (!(((/* implicit */val<bool>) (~(var_4)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1292118060;
long long int var_12 = 8953813616991875401LL;
int zero = 0;
short var_20 = (short)6792;
bool var_21 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (short)12617;
    value_mismatch |= var_21 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_12, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
