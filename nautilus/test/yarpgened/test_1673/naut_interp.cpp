/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1673
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1673
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
void test(val<long long int> var_1, val<unsigned short> var_2, val<unsigned long long int> var_6, val<short> var_7, val<unsigned long long int> var_9, val<signed char> var_15, val<unsigned char> var_16, val<int> zero, val<long long int*> var_19, val<bool*> var_20, val<unsigned long long int*> var_21, val<signed char*> var_22) {
    *var_19 = ((/* implicit */val<long long int>) (~(((((/* implicit */val<bool>) var_6)) ? (min((1039807036U), (((/* implicit */val<unsigned int>) var_16)))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_15)))))));
    *var_20 = (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<short>)(-32767 - 1))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) var_7))))) : (var_1)))));
    *var_21 = ((/* implicit */val<unsigned long long int>) (-(((val<long long int>) 757248973))));
    *var_22 -= ((/* implicit */val<signed char>) var_16);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4339667267178175572LL;
unsigned short var_2 = (unsigned short)29612;
unsigned long long int var_6 = 9318145456798195748ULL;
short var_7 = (short)-20280;
unsigned long long int var_9 = 5242111702759298855ULL;
signed char var_15 = (signed char)84;
unsigned char var_16 = (unsigned char)192;
int zero = 0;
long long int var_19 = -9215403366421852737LL;
bool var_20 = (bool)1;
unsigned long long int var_21 = 13866777638337503184ULL;
signed char var_22 = (signed char)-95;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 4294967103LL;
    value_mismatch |= var_20 != (bool)0;
    value_mismatch |= var_21 != 18446744072952302643ULL;
    value_mismatch |= var_22 != (signed char)-31;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_6, var_7, var_9, var_15, var_16, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
