/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9006
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9006
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
void test(val<short> var_0, val<bool> var_4, val<int> var_7, val<unsigned char> var_9, val<unsigned short> var_10, val<int> var_12, val<unsigned long long int> var_13, val<signed char> var_14, val<unsigned long long int> var_15, val<unsigned char> var_16, val<unsigned char> var_17, val<bool> var_18, val<int> zero, val<short*> var_19, val<bool*> var_20, val<unsigned int*> var_21, val<unsigned short*> var_22, val<unsigned int*> var_23, val<unsigned int*> var_24) {
    *var_19 = ((/* implicit */val<short>) ((val<unsigned int>) min((var_4), (((((/* implicit */val<long long int>) 1831210772)) >= (-3443554021346187612LL))))));
    if (((/* implicit */val<bool>) min((max((max((((/* implicit */val<unsigned long long int>) var_14)), (18446744073709551607ULL))), (((/* implicit */val<unsigned long long int>) var_12)))), (max((max((1ULL), (((/* implicit */val<unsigned long long int>) 9223372036854775807LL)))), (max((18446744073709551607ULL), (18446744073709551615ULL))))))))
    {
        *var_20 = ((((/* implicit */val<int>) var_9)) < (((/* implicit */val<int>) var_17)));
        *var_21 = ((/* implicit */val<unsigned int>) (((~(min((var_13), (22ULL))))) << (((((/* implicit */val<bool>) var_15)) ? (((/* implicit */val<int>) ((22ULL) == (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_16)))))) : (((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<int>) var_18)) : (((/* implicit */val<int>) var_10))))))));
        *var_22 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<int>) var_17)) ^ (((/* implicit */val<int>) var_17)))) << (((((/* implicit */val<int>) max((var_10), (((/* implicit */val<unsigned short>) var_0))))) - (46213)))))) + (max((var_13), (((/* implicit */val<unsigned long long int>) var_10))))));
        *var_23 = ((/* implicit */val<unsigned int>) ((val<unsigned char>) (val<unsigned short>)64668));
    }

    *var_24 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) max((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_13))))), ((+(((/* implicit */val<int>) var_9))))))) ? (((((/* implicit */val<bool>) min((((/* implicit */val<short>) var_14)), (var_0)))) ? (((/* implicit */val<int>) var_14)) : (var_7))) : (((/* implicit */val<int>) var_0))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30239;
bool var_4 = (bool)0;
int var_7 = 440019390;
unsigned char var_9 = (unsigned char)144;
unsigned short var_10 = (unsigned short)46225;
int var_12 = -1615154207;
unsigned long long int var_13 = 2594250408537704347ULL;
signed char var_14 = (signed char)-18;
unsigned long long int var_15 = 18127234878365579313ULL;
unsigned char var_16 = (unsigned char)12;
unsigned char var_17 = (unsigned char)218;
bool var_18 = (bool)0;
int zero = 0;
short var_19 = (short)-27275;
bool var_20 = (bool)0;
unsigned int var_21 = 1643526295U;
unsigned short var_22 = (unsigned short)5869;
unsigned int var_23 = 3535456607U;
unsigned int var_24 = 1868234009U;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)0;
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != 4294967273U;
    value_mismatch |= var_22 != (unsigned short)18331;
    value_mismatch |= var_23 != 156U;
    value_mismatch |= var_24 != 4294967278U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_7, var_9, var_10, var_12, var_13, var_14, var_15, var_16, var_17, var_18, zero, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
}
