/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8814
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8814
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
void test(val<bool> var_3, val<int> var_9, val<int> var_17, val<int> zero, val<bool*> var_20, val<int*> var_21, val<int*> var_22, val<bool*> var_23) {
    *var_20 = ((/* implicit */val<bool>) (-(((/* implicit */val<int>) ((var_3) && (((/* implicit */val<bool>) (+(((/* implicit */val<int>) (val<bool>)1))))))))));
    *var_21 = ((/* implicit */val<int>) (!(var_3)));
    *var_22 = ((/* implicit */val<int>) min((*var_22), ((-(((/* implicit */val<int>) (!(((var_17) > (((/* implicit */val<int>) (val<bool>)1)))))))))));
    *var_23 = ((/* implicit */val<bool>) (-(var_9)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_3 = (bool)1;
int var_9 = -2102597099;
int var_17 = 396942903;
int zero = 0;
bool var_20 = (bool)1;
int var_21 = -2116887762;
int var_22 = 92579629;
bool var_23 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != 0;
    value_mismatch |= var_22 != 0;
    value_mismatch |= var_23 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_9, var_17, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
