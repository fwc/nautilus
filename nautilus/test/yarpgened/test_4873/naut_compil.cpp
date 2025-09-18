/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4873
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4873
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
void test(val<bool> var_2, val<bool> var_7, val<bool> var_17, val<int> zero, val<bool*> var_18, val<bool*> var_19, val<bool*> var_20, val<bool*> var_21, val<bool*> var_22) {
    *var_18 = (val<bool>)0;
    *var_19 = var_17;
    *var_20 = ((/* implicit */val<bool>) ((var_2) ? (((/* implicit */val<int>) (!((val<bool>)1)))) : (((/* implicit */val<int>) (val<bool>)1))));
    *var_21 = (!((val<bool>)1));
    *var_22 = ((/* implicit */val<bool>) max(((((val<bool>)1) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<bool>)1)))), (((/* implicit */val<int>) var_7))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_2 = (bool)1;
bool var_7 = (bool)1;
bool var_17 = (bool)0;
int zero = 0;
bool var_18 = (bool)0;
bool var_19 = (bool)0;
bool var_20 = (bool)0;
bool var_21 = (bool)1;
bool var_22 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (bool)0;
    value_mismatch |= var_19 != (bool)0;
    value_mismatch |= var_20 != (bool)0;
    value_mismatch |= var_21 != (bool)0;
    value_mismatch |= var_22 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_7, var_17, zero, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
