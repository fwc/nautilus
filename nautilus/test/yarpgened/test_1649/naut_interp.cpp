/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1649
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1649
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
void test(val<long long int> var_0, val<unsigned short> var_1, val<bool> var_11, val<unsigned char> var_16, val<signed char> var_17, val<int> zero, val<short*> var_20, val<unsigned int*> var_21, val<int*> var_22, val<unsigned int*> var_23) {
    *var_20 = ((/* implicit */val<short>) var_11);
    *var_21 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_16)) ? ((~(min((((/* implicit */val<long long int>) 1774672954)), (var_0))))) : (((/* implicit */val<long long int>) (((!(((/* implicit */val<bool>) -4295548248685407296LL)))) ? (4103819556U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_1))))))));
    *var_22 = ((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<unsigned short>) (val<short>)26439)))) & (((val<long long int>) var_17))));
    *var_23 = ((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) var_17))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2278781929097646948LL;
unsigned short var_1 = (unsigned short)28839;
bool var_11 = (bool)1;
unsigned char var_16 = (unsigned char)18;
signed char var_17 = (signed char)93;
int zero = 0;
short var_20 = (short)9060;
unsigned int var_21 = 880089075U;
int var_22 = 891776376;
unsigned int var_23 = 3009154108U;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (short)1;
    value_mismatch |= var_21 != 2520294341U;
    value_mismatch |= var_22 != 69;
    value_mismatch |= var_23 != 4294967202U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_11, var_16, var_17, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
