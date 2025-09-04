/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4341
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4341
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
void test(val<int> var_9, val<int> var_10, val<int> zero, val<long long int*> var_14, val<unsigned short*> var_15, val<unsigned int*> var_16) {
    *var_14 = ((/* implicit */val<long long int>) (val<unsigned char>)189);
    *var_15 = ((/* implicit */val<unsigned short>) min((*var_15), (((/* implicit */val<unsigned short>) -3127757930576912357LL))));
    *var_16 = ((/* implicit */val<unsigned int>) min((*var_16), (min((((/* implicit */val<unsigned int>) var_10)), (((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<unsigned int>) (+(1547652427)))) : ((((val<bool>)1) ? (1022181345U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)244)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = -439410253;
int var_10 = 59780613;
int zero = 0;
long long int var_14 = 3833579233695340227LL;
unsigned short var_15 = (unsigned short)53784;
unsigned int var_16 = 2997676287U;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 189LL;
    value_mismatch |= var_15 != (unsigned short)24603;
    value_mismatch |= var_16 != 59780613U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, var_10, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
