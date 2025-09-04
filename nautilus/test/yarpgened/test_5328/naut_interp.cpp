/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5328
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5328
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
void test(val<unsigned short> var_2, val<bool> var_4, val<long long int> var_5, val<unsigned short> var_6, val<int> var_7, val<unsigned int> var_8, val<short> var_10, val<short> var_12, val<short> var_14, val<int> zero, val<unsigned long long int*> var_15, val<int*> var_16, val<long long int*> var_17, val<short*> var_18, val<unsigned char*> var_19) {
    *var_15 = ((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<bool>) var_10)) ? (((var_4) ? (((/* implicit */val<int>) var_14)) : (((/* implicit */val<int>) var_14)))) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<unsigned char>)137)) || (((/* implicit */val<bool>) (val<unsigned short>)33604))))))) | (((((/* implicit */val<bool>) var_5)) ? (max((((/* implicit */val<int>) var_4)), (var_7))) : (((/* implicit */val<int>) var_4))))));
    *var_16 = ((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<signed char>)0)) ? (17434952645802108833ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)-100)))))) ? (((/* implicit */val<int>) var_12)) : (((/* implicit */val<int>) ((var_8) <= (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_6))))))))) | (((((/* implicit */val<bool>) (val<signed char>)17)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)205)))))));
    *var_17 = ((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) min((((/* implicit */val<int>) (val<bool>)1)), (2147483647)))) ? (((((/* implicit */val<bool>) 1438865788911609502LL)) ? (((/* implicit */val<int>) (val<short>)859)) : (((/* implicit */val<int>) (val<unsigned short>)61418)))) : (4190208)))) - (var_5));
    if (((/* implicit */val<bool>) var_10))
    {
        *var_18 = ((/* implicit */val<short>) var_2);
        *var_19 = ((/* implicit */val<unsigned char>) (-(((((/* implicit */val<bool>) (val<signed char>)-28)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) (val<short>)-10827))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)4838;
bool var_4 = (bool)1;
long long int var_5 = -7723444953200207191LL;
unsigned short var_6 = (unsigned short)20359;
int var_7 = -1755531964;
unsigned int var_8 = 2928854629U;
short var_10 = (short)-26480;
short var_12 = (short)-12950;
short var_14 = (short)-2419;
int zero = 0;
unsigned long long int var_15 = 6809380831268898606ULL;
int var_16 = 25187224;
long long int var_17 = -5185934225766480925LL;
short var_18 = (short)-28466;
unsigned char var_19 = (unsigned char)77;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 18446744073709549197ULL;
    value_mismatch |= var_16 != -12950;
    value_mismatch |= var_17 != 7723444953200208050LL;
    value_mismatch |= var_18 != (short)4838;
    value_mismatch |= var_19 != (unsigned char)255;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_5, var_6, var_7, var_8, var_10, var_12, var_14, zero, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
