/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 954
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=954
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
void test(val<bool> var_0, val<unsigned short> var_1, val<signed char> var_5, val<unsigned short> var_8, val<unsigned int> var_11, val<bool> var_13, val<int> var_14, val<short> var_15, val<short> var_16, val<int> zero, val<short*> var_17, val<bool*> var_18, val<unsigned char*> var_19, val<unsigned short*> var_20) {
    *var_17 = ((/* implicit */val<short>) var_13);
    *var_18 = ((/* implicit */val<bool>) ((((min((((/* implicit */val<unsigned int>) var_8)), (var_11))) == (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_1)) & (((/* implicit */val<int>) (val<short>)9173))))))) ? (((/* implicit */val<long long int>) (~((-(((/* implicit */val<int>) var_16))))))) : (((var_0) ? (min((((/* implicit */val<long long int>) var_13)), (-8593227464107045425LL))) : (((/* implicit */val<long long int>) ((val<int>) 4160749568U)))))));
    *var_19 = ((/* implicit */val<unsigned char>) var_5);
    *var_20 = ((/* implicit */val<unsigned short>) ((((((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_1))) - (9223372036854775807LL))) % ((+(9223372036854775807LL))))) / (((((((/* implicit */val<bool>) var_15)) ? (((/* implicit */val<long long int>) var_14)) : (9223372036854775807LL))) * (((((/* implicit */val<bool>) 9223372036854775807LL)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_1))) : ((-9223372036854775807LL - 1LL))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
unsigned short var_1 = (unsigned short)14593;
signed char var_5 = (signed char)13;
unsigned short var_8 = (unsigned short)4699;
unsigned int var_11 = 3595652171U;
bool var_13 = (bool)1;
int var_14 = 1303210705;
short var_15 = (short)-10099;
short var_16 = (short)-13122;
int zero = 0;
short var_17 = (short)13916;
bool var_18 = (bool)1;
unsigned char var_19 = (unsigned char)106;
unsigned short var_20 = (unsigned short)8795;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (short)1;
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != (unsigned char)13;
    value_mismatch |= var_20 != (unsigned short)39301;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_5, var_8, var_11, var_13, var_14, var_15, var_16, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
