/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7671
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7671
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
void test(val<long long int> var_0, val<long long int> var_1, val<long long int> var_5, val<int> var_6, val<int> var_8, val<long long int> var_9, val<int> zero, val<unsigned int*> var_10, val<short*> var_11, val<short*> var_12, val<short*> var_13, val<long long int*> var_14) {
    *var_10 = ((/* implicit */val<unsigned int>) (~(((max((262695681), (1774309350))) | (var_8)))));
    *var_11 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) ((val<unsigned short>) var_5))) <= (((/* implicit */val<int>) (!(((/* implicit */val<bool>) -1774309343))))))))) : (((((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_6)) || (((/* implicit */val<bool>) -1774309350)))))) + (((var_1) - (var_1)))))));
    *var_12 = ((/* implicit */val<short>) var_0);
    *var_13 = ((/* implicit */val<short>) var_9);
    *var_14 = var_9;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1275695574198443895LL;
long long int var_1 = 8841338814707576482LL;
long long int var_5 = -9206111867704127827LL;
int var_6 = 1785735733;
int var_8 = 717427494;
long long int var_9 = 4626915703187671626LL;
int zero = 0;
unsigned int var_10 = 3335650362U;
short var_11 = (short)3945;
short var_12 = (short)20092;
short var_13 = (short)30105;
long long int var_14 = 1286174211030210044LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 2486968345U;
    value_mismatch |= var_11 != (short)0;
    value_mismatch |= var_12 != (short)-8329;
    value_mismatch |= var_13 != (short)-30134;
    value_mismatch |= var_14 != 4626915703187671626LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_5, var_6, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
