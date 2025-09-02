/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1341
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1341
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
void test(val<unsigned int> var_5, val<short> var_6, val<signed char> var_7, val<signed char> var_10, val<long long int> var_11, val<signed char> var_12, val<int> zero, val<long long int*> var_14, val<long long int*> var_15, val<unsigned int*> var_16) {
    *var_14 = ((((/* implicit */val<bool>) ((val<unsigned short>) var_11))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) 1681285550U)) ? (((/* implicit */val<int>) var_10)) : (((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) var_6))))))) : ((+(-5934610380676500037LL))));
    *var_15 -= ((/* implicit */val<long long int>) var_5);
    *var_16 = ((/* implicit */val<unsigned int>) var_12);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2048883588U;
short var_6 = (short)14347;
signed char var_7 = (signed char)68;
signed char var_10 = (signed char)(-127 - 1);
long long int var_11 = 9057108021851908728LL;
signed char var_12 = (signed char)49;
int zero = 0;
long long int var_14 = -2232210407747831893LL;
long long int var_15 = 6955175414065247195LL;
unsigned int var_16 = 2759677052U;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != -128LL;
    value_mismatch |= var_15 != 6955175412016363607LL;
    value_mismatch |= var_16 != 49U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_6, var_7, var_10, var_11, var_12, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
