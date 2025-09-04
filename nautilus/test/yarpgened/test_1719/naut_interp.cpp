/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1719
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1719
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
void test(val<unsigned short> var_1, val<unsigned short> var_5, val<unsigned short> var_7, val<unsigned short> var_8, val<unsigned short> var_10, val<unsigned int> var_11, val<long long int> var_14, val<int> zero, val<unsigned int*> var_19, val<long long int*> var_20, val<long long int*> var_21, val<unsigned short*> var_22) {
    *var_19 = ((/* implicit */val<unsigned int>) min(((((!(((/* implicit */val<bool>) var_7)))) ? (6327065128729092762LL) : (((((/* implicit */val<bool>) 4294967284U)) ? (-5762887499439740618LL) : (((/* implicit */val<long long int>) 2810060177U)))))), (min((var_14), (((/* implicit */val<long long int>) ((val<unsigned short>) var_8)))))));
    *var_20 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) min((4294967295U), (var_11)))) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) (val<unsigned short>)8191))));
    *var_21 ^= ((/* implicit */val<long long int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_1))) >= (min(((+(3780343279U))), (((/* implicit */val<unsigned int>) var_10))))));
    *var_22 *= ((/* implicit */val<unsigned short>) (~(((/* implicit */val<int>) var_10))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)32929;
unsigned short var_5 = (unsigned short)25440;
unsigned short var_7 = (unsigned short)625;
unsigned short var_8 = (unsigned short)9908;
unsigned short var_10 = (unsigned short)7515;
unsigned int var_11 = 1879436452U;
long long int var_14 = -4326746951171449235LL;
int zero = 0;
unsigned int var_19 = 3814788443U;
long long int var_20 = 2599276695127758993LL;
long long int var_21 = 80493066811419029LL;
unsigned short var_22 = (unsigned short)11695;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 861595958U;
    value_mismatch |= var_20 != 25440LL;
    value_mismatch |= var_21 != 80493066811419028LL;
    value_mismatch |= var_22 != (unsigned short)49692;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_7, var_8, var_10, var_11, var_14, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
