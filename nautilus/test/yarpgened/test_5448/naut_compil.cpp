/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5448
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5448
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
void test(val<bool> var_0, val<signed char> var_1, val<unsigned int> var_3, val<bool> var_4, val<unsigned short> var_7, val<signed char> var_13, val<unsigned short> var_15, val<signed char> var_16, val<bool> var_17, val<int> var_18, val<bool> var_19, val<int> zero, val<signed char*> var_20, val<bool*> var_21, val<bool*> var_22, val<bool*> var_23, val<bool*> var_24, val<unsigned char*> var_25) {
    *var_20 = ((/* implicit */val<signed char>) max((((val<unsigned int>) ((((/* implicit */val<int>) (val<unsigned short>)65535)) < (((/* implicit */val<int>) (val<unsigned short>)14957))))), (((/* implicit */val<unsigned int>) var_0))));
    *var_21 |= ((/* implicit */val<bool>) ((val<long long int>) var_7));
    if (((/* implicit */val<bool>) ((((/* implicit */val<int>) ((((/* implicit */val<int>) (val<bool>)1)) < (((/* implicit */val<int>) ((((/* implicit */val<long long int>) -546340105)) == (-8976387916530502240LL))))))) << (((/* implicit */val<int>) var_19)))))
    {
        *var_22 |= ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) max((var_15), ((val<unsigned short>)4032)))) % (((/* implicit */val<int>) var_4))))) ? ((((~(var_18))) * (((/* implicit */val<int>) var_19)))) : ((~(((((/* implicit */val<bool>) var_16)) ? (((/* implicit */val<int>) var_16)) : (0)))))));
        *var_23 = ((/* implicit */val<bool>) ((val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) -546340105)) ? (((/* implicit */val<long long int>) 546340131)) : (-2798668473177238747LL)))) || (((0ULL) != (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)120))))))));
        *var_24 -= ((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_13)) ? (((/* implicit */val<int>) (!(((((/* implicit */val<int>) var_1)) == (546340094)))))) : (((/* implicit */val<int>) var_7))));
    }

    *var_25 = ((/* implicit */val<unsigned char>) ((min((((((/* implicit */val<bool>) 16777200U)) ? (((/* implicit */val<int>) (val<signed char>)120)) : (((/* implicit */val<int>) var_17)))), (((/* implicit */val<int>) ((val<signed char>) 778591341))))) <= (((/* implicit */val<int>) ((((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1))) - (var_3))) >= (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_16))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
signed char var_1 = (signed char)91;
unsigned int var_3 = 2333707461U;
bool var_4 = (bool)1;
unsigned short var_7 = (unsigned short)58825;
signed char var_13 = (signed char)123;
unsigned short var_15 = (unsigned short)3796;
signed char var_16 = (signed char)109;
bool var_17 = (bool)0;
int var_18 = 344875122;
bool var_19 = (bool)0;
int zero = 0;
signed char var_20 = (signed char)38;
bool var_21 = (bool)1;
bool var_22 = (bool)1;
bool var_23 = (bool)1;
bool var_24 = (bool)1;
unsigned char var_25 = (unsigned char)97;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (signed char)1;
    value_mismatch |= var_21 != (bool)1;
    value_mismatch |= var_22 != (bool)1;
    value_mismatch |= var_23 != (bool)1;
    value_mismatch |= var_24 != (bool)1;
    value_mismatch |= var_25 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_7, var_13, var_15, var_16, var_17, var_18, var_19, zero, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25);
  checksum();
  assert(!value_mismatch);
}
