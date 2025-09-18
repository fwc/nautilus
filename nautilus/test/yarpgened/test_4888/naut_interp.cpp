/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4888
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4888
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
void test(val<bool> var_1, val<int> var_4, val<int> var_6, val<int> zero, val<int*> var_13, val<unsigned int*> var_14, val<bool*> var_15) {
    *var_13 = ((/* implicit */val<int>) var_1);
    *var_14 = ((/* implicit */val<unsigned int>) var_6);
    *var_15 = ((/* implicit */val<bool>) (+(var_4)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)1;
int var_4 = -610183712;
int var_6 = 41198606;
int zero = 0;
int var_13 = -121499215;
unsigned int var_14 = 3744325916U;
bool var_15 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 1;
    value_mismatch |= var_14 != 41198606U;
    value_mismatch |= var_15 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_6, zero, &var_13, &var_14, &var_15);
  checksum();
}
