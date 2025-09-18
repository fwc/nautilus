/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7193
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7193
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
void test(val<short> var_3, val<int> zero, val<bool*> var_20, val<unsigned int*> var_21) {
    *var_20 = ((/* implicit */val<bool>) max((*var_20), (((/* implicit */val<bool>) min((2569342557331621697ULL), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) var_3))))) < (max((((/* implicit */val<unsigned long long int>) (val<bool>)1)), (2402224974350506288ULL)))))))))));
    *var_21 = ((/* implicit */val<unsigned int>) 1770061625);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)29037;
int zero = 0;
bool var_20 = (bool)0;
unsigned int var_21 = 3966845312U;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (bool)0;
    value_mismatch |= var_21 != 1770061625U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, zero, &var_20, &var_21);
  checksum();
}
