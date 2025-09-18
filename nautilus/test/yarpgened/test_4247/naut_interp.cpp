/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4247
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4247
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
void test(val<unsigned short> var_0, val<signed char> var_3, val<unsigned short> var_4, val<int> var_6, val<unsigned short> var_10, val<short> var_12, val<bool> var_13, val<unsigned short> var_14, val<short> var_16, val<int> zero, val<short*> var_18, val<unsigned long long int*> var_19, val<short*> var_20, val<unsigned short*> var_21) {
    *var_18 = ((/* implicit */val<short>) ((min((((/* implicit */val<int>) var_13)), (((((/* implicit */val<bool>) (val<unsigned short>)36060)) ? (((/* implicit */val<int>) (val<unsigned short>)53853)) : (((/* implicit */val<int>) (val<unsigned short>)65519)))))) * (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_12))))))))));
    *var_19 = ((/* implicit */val<unsigned long long int>) (-(((((/* implicit */val<int>) min((var_10), (var_0)))) & (((/* implicit */val<int>) min((var_4), (var_4))))))));
    *var_20 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_16)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_14))) : ((((((val<bool>)1) ? (1818839233U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)65529))))) << (((((/* implicit */val<int>) (val<unsigned short>)54399)) - (54378)))))));
    *var_21 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_12)) ? (max((((/* implicit */val<int>) (val<unsigned short>)30963)), (var_6))) : (((/* implicit */val<int>) var_3))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61440;
signed char var_3 = (signed char)8;
unsigned short var_4 = (unsigned short)58084;
int var_6 = -608341581;
unsigned short var_10 = (unsigned short)999;
short var_12 = (short)10623;
bool var_13 = (bool)0;
unsigned short var_14 = (unsigned short)53169;
short var_16 = (short)-31431;
int zero = 0;
short var_18 = (short)-21731;
unsigned long long int var_19 = 6360944062107716710ULL;
short var_20 = (short)23670;
unsigned short var_21 = (unsigned short)14147;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)0;
    value_mismatch |= var_19 != 18446744073709550876ULL;
    value_mismatch |= var_20 != (short)-12367;
    value_mismatch |= var_21 != (unsigned short)30963;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_6, var_10, var_12, var_13, var_14, var_16, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
}
