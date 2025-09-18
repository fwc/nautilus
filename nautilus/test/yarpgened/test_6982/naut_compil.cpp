/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6982
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6982
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
void test(val<short> var_0, val<unsigned short> var_11, val<int> zero, val<long long int*> var_13, val<unsigned int*> var_14) {
    *var_13 |= ((/* implicit */val<long long int>) max((((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) (-(((/* implicit */val<int>) (val<bool>)0)))))))), (min((max(((val<unsigned short>)37157), (((/* implicit */val<unsigned short>) var_0)))), (((/* implicit */val<unsigned short>) ((val<signed char>) var_11)))))));
    *var_14 ^= ((/* implicit */val<unsigned int>) ((val<bool>) (val<bool>)1));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28079;
unsigned short var_11 = (unsigned short)28469;
int zero = 0;
long long int var_13 = -7250995308473873744LL;
unsigned int var_14 = 2890385658U;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != -7250995308473873739LL;
    value_mismatch |= var_14 != 2890385659U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_11, zero, &var_13, &var_14);
  checksum();
}
