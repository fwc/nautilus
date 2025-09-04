/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8690
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8690
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
void test(val<unsigned short> var_7, val<unsigned short> var_11, val<unsigned int> var_13, val<int> zero, val<int*> var_16, val<bool*> var_17, val<unsigned int*> var_18) {
    *var_16 = ((/* implicit */val<int>) min((*var_16), (((/* implicit */val<int>) ((max((2876000670U), (((/* implicit */val<unsigned int>) (val<bool>)1)))) << ((((~(((/* implicit */val<int>) (val<bool>)1)))) + (8))))))));
    *var_17 = ((/* implicit */val<bool>) ((((/* implicit */val<int>) var_11)) % (((/* implicit */val<int>) var_7))));
    *var_18 = var_13;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)38846;
unsigned short var_11 = (unsigned short)3556;
unsigned int var_13 = 727271816U;
int zero = 0;
int var_16 = -2137525143;
bool var_17 = (bool)1;
unsigned int var_18 = 185961206U;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != -2137525143;
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != 727271816U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_11, var_13, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
