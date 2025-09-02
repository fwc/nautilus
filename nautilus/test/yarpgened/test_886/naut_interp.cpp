/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 886
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=886
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
void test(val<signed char> var_2, val<bool> var_3, val<unsigned char> var_4, val<signed char> var_5, val<unsigned char> var_6, val<short> var_7, val<unsigned int> var_8, val<unsigned int> var_9, val<unsigned char> var_10, val<int> zero, val<long long int*> var_11, val<unsigned int*> var_12, val<unsigned int*> var_13, val<unsigned long long int*> var_14, val<long long int*> var_15) {
    *var_11 = ((/* implicit */val<long long int>) ((((/* implicit */val<int>) ((((/* implicit */val<bool>) -2147483646)) || (((/* implicit */val<bool>) 2147483645))))) ^ (-2147483646)));
    *var_12 = ((/* implicit */val<unsigned int>) (val<bool>)1);
    *var_13 *= ((/* implicit */val<unsigned int>) max((((((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) var_6)) : (((/* implicit */val<int>) var_10)))) * (((((/* implicit */val<int>) var_5)) / (((/* implicit */val<int>) var_4)))))), (((((/* implicit */val<int>) var_7)) * (((/* implicit */val<int>) var_4))))));
    *var_14 |= ((/* implicit */val<unsigned long long int>) var_3);
    *var_15 -= ((/* implicit */val<long long int>) ((((((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_2))) : (var_8))) & (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<unsigned short>) var_2)))))) / (min((var_9), (((/* implicit */val<unsigned int>) ((val<signed char>) 1729268182537218434LL)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-91;
bool var_3 = (bool)1;
unsigned char var_4 = (unsigned char)199;
signed char var_5 = (signed char)20;
unsigned char var_6 = (unsigned char)62;
short var_7 = (short)23280;
unsigned int var_8 = 1375444217U;
unsigned int var_9 = 3831928510U;
unsigned char var_10 = (unsigned char)21;
int zero = 0;
long long int var_11 = 1417774183003278500LL;
unsigned int var_12 = 1812823048U;
unsigned int var_13 = 809466017U;
unsigned long long int var_14 = 13497734671021653064ULL;
long long int var_15 = 392359198138171624LL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != -2147483645LL;
    value_mismatch |= var_12 != 1U;
    value_mismatch |= var_13 != 3265825424U;
    value_mismatch |= var_14 != 13497734671021653065ULL;
    value_mismatch |= var_15 != 392359198138171624LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, zero, &var_11, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
