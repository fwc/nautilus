/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6008
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6008
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
void test(val<long long int> var_1, val<int> var_3, val<unsigned char> var_4, val<long long int> var_5, val<unsigned char> var_6, val<unsigned int> var_8, val<long long int> var_9, val<signed char> var_10, val<int> zero, val<unsigned int*> var_15, val<bool*> var_16, val<unsigned char*> var_17) {
    *var_15 = ((/* implicit */val<unsigned int>) (((((+(((/* implicit */val<int>) (val<signed char>)-118)))) + (2147483647))) >> (((((((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)8022))) != (var_9))) ? (((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<long long int>) -643924064)) : (var_1))) : (((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4))) : (var_5))))) + (643924092LL)))));
    *var_16 = ((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (+(var_8)))) ? (((/* implicit */val<int>) var_10)) : (((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) var_10))))))) & (((min((((/* implicit */val<unsigned int>) var_6)), (var_8))) << (((((/* implicit */val<int>) ((val<signed char>) var_5))) + (63)))))));
    *var_17 = ((/* implicit */val<unsigned char>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 12779087163895619LL;
int var_3 = -71728207;
unsigned char var_4 = (unsigned char)109;
long long int var_5 = 6542192473622645204LL;
unsigned char var_6 = (unsigned char)176;
unsigned int var_8 = 4282111369U;
long long int var_9 = -9073194674522912689LL;
signed char var_10 = (signed char)-64;
int zero = 0;
unsigned int var_15 = 3224486024U;
bool var_16 = (bool)0;
unsigned char var_17 = (unsigned char)14;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 7U;
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != (unsigned char)177;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_5, var_6, var_8, var_9, var_10, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
