/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7556
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7556
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
void test(val<unsigned char> var_2, val<long long int> var_4, val<bool> var_5, val<int> var_10, val<unsigned char> var_11, val<long long int> var_12, val<int> var_18, val<int> zero, val<unsigned long long int*> var_19, val<unsigned long long int*> var_20, val<unsigned short*> var_21, val<int*> var_22, val<signed char*> var_23, val<short*> var_24, val<long long int*> var_25, val<int*> var_26) {
    if (((/* implicit */val<bool>) -2111538241904475696LL))
    {
        *var_19 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 34359738367ULL)) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_11))))) : (((/* implicit */val<int>) ((((/* implicit */val<int>) (val<unsigned short>)0)) == (63))))));
        *var_20 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_4)) ? ((~(((/* implicit */val<int>) var_2)))) : (((var_18) & (((/* implicit */val<int>) (val<unsigned short>)0))))))) ? (((var_5) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_10)) ? (4294967295U) : (((/* implicit */val<unsigned int>) var_10))))) : (var_4))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_18)) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) var_2)))))))))));
        *var_21 = ((/* implicit */val<unsigned short>) max((((val<long long int>) 2147483647)), (((/* implicit */val<long long int>) ((val<int>) ((((/* implicit */val<bool>) 9223372036854775804LL)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))) : (34359738353ULL)))))));
    }
    else
    {
        *var_22 ^= ((min((((/* implicit */val<int>) (!((val<bool>)1)))), (1051486899))) * (((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((1409037883U) | (1993709472U))))))));
        *var_23 = ((/* implicit */val<signed char>) 4294967289U);
        *var_24 = ((/* implicit */val<short>) 4499201580859392ULL);
    }

    *var_25 = ((/* implicit */val<long long int>) (-(((((/* implicit */val<bool>) min((((/* implicit */val<long long int>) var_10)), (var_12)))) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) ((((/* implicit */val<int>) var_5)) == (((/* implicit */val<int>) (val<unsigned short>)31)))))))));
    *var_26 |= ((/* implicit */val<int>) ((((/* implicit */val<bool>) 4294967295U)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)31))) : (-1LL)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)191;
long long int var_4 = 3004579945556399024LL;
bool var_5 = (bool)0;
int var_10 = 114642680;
unsigned char var_11 = (unsigned char)138;
long long int var_12 = 5815358843145507733LL;
int var_18 = -458218442;
int zero = 0;
unsigned long long int var_19 = 8732949561808877711ULL;
unsigned long long int var_20 = 16527729556251004513ULL;
unsigned short var_21 = (unsigned short)10099;
int var_22 = -1371879418;
signed char var_23 = (signed char)106;
short var_24 = (short)-2384;
long long int var_25 = -5060959977778578837LL;
int var_26 = -1605962150;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 0ULL;
    value_mismatch |= var_20 != 3004579945556399024ULL;
    value_mismatch |= var_21 != (unsigned short)65535;
    value_mismatch |= var_22 != -1371879418;
    value_mismatch |= var_23 != (signed char)106;
    value_mismatch |= var_24 != (short)-2384;
    value_mismatch |= var_25 != -191LL;
    value_mismatch |= var_26 != -1605962145;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_5, var_10, var_11, var_12, var_18, zero, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25, &var_26);
  checksum();
  assert(!value_mismatch);
}
