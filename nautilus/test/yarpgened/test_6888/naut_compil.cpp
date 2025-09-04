/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6888
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6888
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
void test(val<unsigned char> var_6, val<unsigned short> var_7, val<unsigned long long int> var_8, val<int> zero, val<unsigned short*> var_14, val<int*> var_15, val<unsigned short*> var_16, val<short*> var_17, val<unsigned int*> var_18) {
    *var_14 ^= var_7;
    *var_15 ^= ((/* implicit */val<int>) ((((/* implicit */val<bool>) 2147483647)) && (((/* implicit */val<bool>) 3758096384U))));
    *var_16 = ((/* implicit */val<unsigned short>) min((*var_16), (((/* implicit */val<unsigned short>) ((max((max((1451736508447875711LL), (((/* implicit */val<long long int>) (val<signed char>)55)))), (((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_6)) * (((/* implicit */val<int>) (val<short>)-17796))))))) + (((/* implicit */val<long long int>) (-(min((((/* implicit */val<unsigned int>) -1)), (47058474U)))))))))));
    *var_17 = ((/* implicit */val<short>) min((*var_17), (((/* implicit */val<short>) min((((/* implicit */val<unsigned long long int>) (+(3758096384U)))), (var_8))))));
    *var_18 = ((/* implicit */val<unsigned int>) max((((/* implicit */val<unsigned long long int>) -1451736508447875711LL)), (((max((((/* implicit */val<unsigned long long int>) -739908072)), (var_8))) - (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)58)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)218;
unsigned short var_7 = (unsigned short)32896;
unsigned long long int var_8 = 4215512258289242768ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)9269;
int var_15 = -890620401;
unsigned short var_16 = (unsigned short)24463;
short var_17 = (short)16629;
unsigned int var_18 = 2824664133U;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned short)42165;
    value_mismatch |= var_15 != -890620402;
    value_mismatch |= var_16 != (unsigned short)21589;
    value_mismatch |= var_17 != (short)0;
    value_mismatch |= var_18 != 3555059166U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_7, var_8, zero, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
