/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2013
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2013
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
void test(val<signed char> var_3, val<signed char> var_7, val<unsigned int> var_8, val<unsigned short> var_10, val<unsigned int> var_12, val<unsigned int> var_14, val<int> zero, val<unsigned char*> var_16, val<unsigned short*> var_17, val<unsigned short*> var_18, val<unsigned int*> var_19) {
    *var_16 = ((/* implicit */val<unsigned char>) var_10);
    *var_17 = ((/* implicit */val<unsigned short>) ((val<unsigned long long int>) var_3));
    *var_18 = ((/* implicit */val<unsigned short>) var_12);
    *var_19 = ((/* implicit */val<unsigned int>) max((-1LL), (((((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_7))) < (var_8))) ? (((/* implicit */val<long long int>) ((var_14) >> (((((/* implicit */val<int>) var_3)) - (31)))))) : (min((((/* implicit */val<long long int>) var_12)), (19LL)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)56;
signed char var_7 = (signed char)-24;
unsigned int var_8 = 1959977768U;
unsigned short var_10 = (unsigned short)54862;
unsigned int var_12 = 2023984329U;
unsigned int var_14 = 264820115U;
int zero = 0;
unsigned char var_16 = (unsigned char)250;
unsigned short var_17 = (unsigned short)35286;
unsigned short var_18 = (unsigned short)4667;
unsigned int var_19 = 4072078724U;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned char)78;
    value_mismatch |= var_17 != (unsigned short)56;
    value_mismatch |= var_18 != (unsigned short)36041;
    value_mismatch |= var_19 != 19U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_7, var_8, var_10, var_12, var_14, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
}
