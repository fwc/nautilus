/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9983
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9983
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
void test(val<bool> var_2, val<bool> var_10, val<bool> var_16, val<int> zero, val<bool*> var_17, val<bool*> var_18) {
    *var_17 = ((/* implicit */val<bool>) ((((/* implicit */val<int>) var_10)) % (((((val<bool>) var_16)) ? ((~(((/* implicit */val<int>) var_16)))) : (((/* implicit */val<int>) var_2))))));
    *var_18 &= var_10;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_2 = (bool)1;
bool var_10 = (bool)0;
bool var_16 = (bool)1;
int zero = 0;
bool var_17 = (bool)0;
bool var_18 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (bool)0;
    value_mismatch |= var_18 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_10, var_16, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
