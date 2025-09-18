/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1254
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1254
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
void test(val<unsigned char> var_1, val<unsigned long long int> var_3, val<signed char> var_5, val<short> var_6, val<unsigned char> var_7, val<int> var_10, val<int> zero, val<long long int*> var_11, val<unsigned char*> var_12, val<unsigned short*> var_13, val<unsigned char*> var_14, val<bool*> var_15) {
    *var_11 -= ((/* implicit */val<long long int>) (+(((/* implicit */val<int>) var_5))));
    *var_12 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) 13383176329149626971ULL))))) < (((/* implicit */val<int>) var_6))));
    *var_13 = ((/* implicit */val<unsigned short>) (-(((/* implicit */val<int>) ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) 79566706))))) > (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_1))))))))));
    *var_14 = ((/* implicit */val<unsigned char>) (val<unsigned short>)6);
    *var_15 = ((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) min((((val<long long int>) 5063567744559924647ULL)), (((/* implicit */val<long long int>) var_7))))), ((~(min((((/* implicit */val<unsigned long long int>) var_10)), (var_3)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)189;
unsigned long long int var_3 = 11864260302521657751ULL;
signed char var_5 = (signed char)122;
short var_6 = (short)1338;
unsigned char var_7 = (unsigned char)209;
int var_10 = 152750665;
int zero = 0;
long long int var_11 = 1745707014393397304LL;
unsigned char var_12 = (unsigned char)175;
unsigned short var_13 = (unsigned short)51779;
unsigned char var_14 = (unsigned char)250;
bool var_15 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 1745707014393397182LL;
    value_mismatch |= var_12 != (unsigned char)1;
    value_mismatch |= var_13 != (unsigned short)0;
    value_mismatch |= var_14 != (unsigned char)6;
    value_mismatch |= var_15 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_5, var_6, var_7, var_10, zero, &var_11, &var_12, &var_13, &var_14, &var_15);
  checksum();
}
