/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6886
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6886
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
void test(val<bool> var_3, val<short> var_5, val<unsigned short> var_8, val<int> zero, val<bool*> var_13, val<bool*> var_14, val<int*> var_15) {
    *var_13 = ((/* implicit */val<bool>) (-(((/* implicit */val<int>) (val<bool>)1))));
    *var_14 = (!(((/* implicit */val<bool>) (-(min((10115479184343767311ULL), (10115479184343767311ULL)))))));
    *var_15 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) ((((/* implicit */val<int>) var_5)) >= (((/* implicit */val<int>) var_8)))))))) ? (((/* implicit */val<unsigned long long int>) ((val<int>) ((var_3) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1))) : (2533829769U))))) : (min((((/* implicit */val<unsigned long long int>) 2413705313U)), (17493539373218484811ULL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_3 = (bool)0;
short var_5 = (short)25378;
unsigned short var_8 = (unsigned short)24826;
int zero = 0;
bool var_13 = (bool)1;
bool var_14 = (bool)0;
int var_15 = -1102841523;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (bool)0;
    value_mismatch |= var_15 != -1761137527;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_8, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
