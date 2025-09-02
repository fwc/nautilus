/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1128
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1128
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
void test(val<unsigned long long int> var_6, val<unsigned long long int> var_7, val<int> zero, val<bool*> var_14, val<unsigned int*> var_15, val<short*> var_16) {
    *var_14 = ((/* implicit */val<bool>) max((*var_14), (((/* implicit */val<bool>) var_7))));
    *var_15 = ((/* implicit */val<unsigned int>) ((val<int>) var_6));
    *var_16 &= ((/* implicit */val<short>) ((((val<unsigned int>) ((((/* implicit */val<bool>) (val<signed char>)73)) ? (131608185) : (((/* implicit */val<int>) (val<short>)18658))))) <= (((/* implicit */val<unsigned int>) 1596496458))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 966493543561534448ULL;
unsigned long long int var_7 = 8408474629255068817ULL;
int zero = 0;
bool var_14 = (bool)0;
unsigned int var_15 = 577669704U;
short var_16 = (short)-26836;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != 3585186800U;
    value_mismatch |= var_16 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_7, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
