/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3635
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3635
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
void test(val<unsigned int> var_0, val<unsigned int> var_6, val<bool> var_10, val<int> zero, val<unsigned short*> var_15, val<unsigned short*> var_16, val<unsigned short*> var_17, val<unsigned short*> var_18) {
    *var_15 = ((/* implicit */val<unsigned short>) (~(((val<int>) min((((/* implicit */val<unsigned int>) -2019378531)), (9U))))));
    *var_16 = ((/* implicit */val<unsigned short>) var_6);
    *var_17 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) max((((((/* implicit */val<bool>) (val<unsigned short>)56084)) ? (3275161103U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)-69))))), (((/* implicit */val<unsigned int>) var_10))))) ? (var_6) : (1019806215U)));
    *var_18 = ((/* implicit */val<unsigned short>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2359668757U;
unsigned int var_6 = 4253048173U;
bool var_10 = (bool)0;
int zero = 0;
unsigned short var_15 = (unsigned short)43433;
unsigned short var_16 = (unsigned short)48955;
unsigned short var_17 = (unsigned short)62722;
unsigned short var_18 = (unsigned short)62712;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned short)65526;
    value_mismatch |= var_16 != (unsigned short)23917;
    value_mismatch |= var_17 != (unsigned short)23917;
    value_mismatch |= var_18 != (unsigned short)45077;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, var_10, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
