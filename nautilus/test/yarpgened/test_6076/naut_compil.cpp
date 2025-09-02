/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6076
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6076
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
void test(val<long long int> var_1, val<short> var_11, val<unsigned long long int> var_12, val<short> var_14, val<int> zero, val<unsigned int*> var_15, val<bool*> var_16) {
    *var_15 = ((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) (val<bool>)0))));
    *var_16 = ((/* implicit */val<bool>) (((!(((/* implicit */val<bool>) ((((/* implicit */val<int>) var_14)) * (((/* implicit */val<int>) var_11))))))) ? (((/* implicit */val<unsigned long long int>) (+(var_1)))) : ((((-(var_12))) << (((((val<unsigned int>) 3500209059U)) - (3500209007U)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6574001007582525624LL;
short var_11 = (short)21608;
unsigned long long int var_12 = 13425687834099946082ULL;
short var_14 = (short)1350;
int zero = 0;
unsigned int var_15 = 752881870U;
bool var_16 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 0U;
    value_mismatch |= var_16 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_11, var_12, var_14, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
