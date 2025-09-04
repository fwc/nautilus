/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5622
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5622
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
void test(val<bool> var_1, val<unsigned int> var_2, val<long long int> var_3, val<unsigned short> var_4, val<short> var_6, val<signed char> var_7, val<unsigned char> var_8, val<unsigned short> var_10, val<short> var_11, val<signed char> var_12, val<short> var_13, val<bool> var_14, val<long long int> var_15, val<unsigned long long int> var_16, val<int> zero, val<long long int*> var_17, val<signed char*> var_18, val<short*> var_19, val<int*> var_20, val<unsigned long long int*> var_21, val<short*> var_22, val<long long int*> var_23, val<bool*> var_24, val<int*> var_25, val<bool*> var_26, val<signed char*> var_27, val<int*> var_28) {
    if (((/* implicit */val<bool>) (~(((((/* implicit */val<bool>) max((((/* implicit */val<short>) var_7)), (var_13)))) ? ((+(var_3))) : (((/* implicit */val<long long int>) (~(((/* implicit */val<int>) var_10))))))))))
    {
        *var_17 = 7569924105500012584LL;
        if (((/* implicit */val<bool>) var_11))
        {
            *var_18 = ((/* implicit */val<signed char>) (~(((/* implicit */val<int>) ((((/* implicit */val<bool>) ((-1LL) + (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4)))))) && (((/* implicit */val<bool>) var_2)))))));
            *var_19 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_10))))) ? (((val<long long int>) (~(var_3)))) : (((/* implicit */val<long long int>) (~((~(((/* implicit */val<int>) var_4)))))))));
        }
        else
        {
            *var_20 = ((((/* implicit */val<bool>) (~(var_16)))) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) ((0LL) ^ (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_8)))))) || (var_1)))) : (((/* implicit */val<int>) (val<bool>)1)));
            *var_21 *= ((/* implicit */val<unsigned long long int>) min((var_3), (((/* implicit */val<long long int>) (+(((/* implicit */val<int>) var_12)))))));
        }

        *var_22 = ((/* implicit */val<short>) var_2);
    }

    if (((/* implicit */val<bool>) ((((-303036196) + (2147483647))) << (((max((min((-8568893141056916742LL), (((/* implicit */val<long long int>) 3095960525U)))), (((/* implicit */val<long long int>) var_8)))) - (86LL))))))
    {
        *var_23 ^= 0LL;
        *var_24 = ((/* implicit */val<bool>) max(((((+(((/* implicit */val<int>) var_6)))) ^ (((/* implicit */val<int>) ((val<short>) var_16))))), (((/* implicit */val<int>) var_14))));
    }
    else
    {
        *var_25 = ((/* implicit */val<int>) (!(((/* implicit */val<bool>) max((((/* implicit */val<long long int>) max((((/* implicit */val<short>) var_7)), (var_11)))), ((+(9223372036854775807LL))))))));
        *var_26 = ((/* implicit */val<bool>) var_16);
        *var_27 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) 6136992940148894344LL)) ? (((/* implicit */val<int>) ((val<unsigned char>) ((((/* implicit */val<bool>) var_15)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4))) : (-6136992940148894352LL))))) : (((/* implicit */val<int>) var_8))));
        *var_28 = ((/* implicit */val<int>) min((7569924105500012579LL), (((/* implicit */val<long long int>) var_14))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)0;
unsigned int var_2 = 716224575U;
long long int var_3 = 4022676044401599442LL;
unsigned short var_4 = (unsigned short)60895;
short var_6 = (short)6193;
signed char var_7 = (signed char)-94;
unsigned char var_8 = (unsigned char)86;
unsigned short var_10 = (unsigned short)6952;
short var_11 = (short)-17276;
signed char var_12 = (signed char)77;
short var_13 = (short)25440;
bool var_14 = (bool)0;
long long int var_15 = -30722014436207470LL;
unsigned long long int var_16 = 18267688533779391720ULL;
int zero = 0;
long long int var_17 = 6210711579425831453LL;
signed char var_18 = (signed char)121;
short var_19 = (short)15788;
int var_20 = -1831848207;
unsigned long long int var_21 = 9204309104619384307ULL;
short var_22 = (short)-21876;
long long int var_23 = 1290129747987248833LL;
bool var_24 = (bool)1;
int var_25 = 1312179468;
bool var_26 = (bool)0;
signed char var_27 = (signed char)-75;
int var_28 = -1013565686;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 7569924105500012584LL;
    value_mismatch |= var_18 != (signed char)-2;
    value_mismatch |= var_19 != (short)7213;
    value_mismatch |= var_20 != -1831848207;
    value_mismatch |= var_21 != 9204309104619384307ULL;
    value_mismatch |= var_22 != (short)-18369;
    value_mismatch |= var_23 != 1290129747987248833LL;
    value_mismatch |= var_24 != (bool)0;
    value_mismatch |= var_25 != 1312179468;
    value_mismatch |= var_26 != (bool)0;
    value_mismatch |= var_27 != (signed char)-75;
    value_mismatch |= var_28 != -1013565686;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_6, var_7, var_8, var_10, var_11, var_12, var_13, var_14, var_15, var_16, zero, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25, &var_26, &var_27, &var_28);
  checksum();
  assert(!value_mismatch);
}
