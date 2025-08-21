/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 732
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=732
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
void test(val<unsigned int> var_0, val<unsigned long long int> var_2, val<long long int> var_5, val<short> var_6, val<unsigned long long int> var_7, val<unsigned int> var_8, val<int> zero, val<unsigned long long int*> var_13, val<bool*> var_14) {
    *var_13 *= ((((/* implicit */val<bool>) var_6)) ? (((((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) (val<short>)4)), (var_8)))) ? (((var_2) & (((/* implicit */val<unsigned long long int>) var_8)))) : (((((/* implicit */val<bool>) 7156205991936296196ULL)) ? (((/* implicit */val<unsigned long long int>) var_5)) : (var_7))))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (~(var_0)))) ? (((((/* implicit */val<bool>) var_0)) ? (9223372036854775807LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)66))))) : ((+((-9223372036854775807LL - 1LL))))))));
    *var_14 = ((/* implicit */val<bool>) (val<unsigned char>)197);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1135115382U;
unsigned long long int var_2 = 14226325447042488489ULL;
long long int var_5 = 180239293184264199LL;
short var_6 = (short)-7723;
unsigned long long int var_7 = 10202141959904450362ULL;
unsigned int var_8 = 285915448U;
int zero = 0;
unsigned long long int var_13 = 3789564576809752482ULL;
bool var_14 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 7302369380378796368ULL;
    value_mismatch |= var_14 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_5, var_6, var_7, var_8, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
