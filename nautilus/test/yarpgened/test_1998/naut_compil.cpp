/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1998
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1998
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
void test(val<bool> var_1, val<unsigned char> var_12, val<unsigned short> var_14, val<int> zero, val<unsigned char*> var_15, val<bool*> var_16, val<unsigned int*> var_17, val<long long int*> var_18) {
    *var_15 = ((/* implicit */val<unsigned char>) max((*var_15), (var_12)));
    *var_16 = ((/* implicit */val<bool>) (~(max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<int>) (val<bool>)0)) : (((/* implicit */val<int>) (val<short>)1))))), (((((/* implicit */val<bool>) (val<signed char>)-106)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)105))) : (26388279066624ULL)))))));
    *var_17 = ((/* implicit */val<unsigned int>) min((*var_17), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) max((((val<long long int>) (val<signed char>)-106)), (((/* implicit */val<long long int>) var_1))))) ? (((/* implicit */val<unsigned long long int>) ((val<int>) (+(((/* implicit */val<int>) (val<signed char>)(-127 - 1))))))) : (((((/* implicit */val<bool>) -11LL)) ? (((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<unsigned long long int>) -12LL)) : (255ULL))) : (((/* implicit */val<unsigned long long int>) max((451935824), (((/* implicit */val<int>) (val<signed char>)79))))))))))));
    *var_18 = ((/* implicit */val<long long int>) ((val<unsigned long long int>) (~((~(((/* implicit */val<int>) (val<unsigned short>)43298)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)1;
unsigned char var_12 = (unsigned char)19;
unsigned short var_14 = (unsigned short)11224;
int zero = 0;
unsigned char var_15 = (unsigned char)96;
bool var_16 = (bool)1;
unsigned int var_17 = 937600563U;
long long int var_18 = 2746633521489058850LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned char)96;
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != 937600563U;
    value_mismatch |= var_18 != 43298LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_12, var_14, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
}
