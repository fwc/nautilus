/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7770
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7770
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
void test(val<bool> var_4, val<bool> var_5, val<bool> var_7, val<bool> var_9, val<bool> var_14, val<int> zero, val<bool*> var_16, val<bool*> var_17) {
    *var_16 = ((/* implicit */val<bool>) ((((((/* implicit */val<int>) (val<bool>)1)) == ((+(((/* implicit */val<int>) var_9)))))) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) ((val<bool>) min(((val<bool>)1), (var_14)))))));
    *var_17 = ((/* implicit */val<bool>) min((*var_17), (((/* implicit */val<bool>) (+(max((((var_4) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) var_5)))), (((/* implicit */val<int>) (val<bool>)1)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_4 = (bool)0;
bool var_5 = (bool)1;
bool var_7 = (bool)0;
bool var_9 = (bool)1;
bool var_14 = (bool)1;
int zero = 0;
bool var_16 = (bool)0;
bool var_17 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (bool)0;
    value_mismatch |= var_17 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_7, var_9, var_14, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
