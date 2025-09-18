/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9011
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9011
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
void test(val<unsigned long long int> var_1, val<short> var_2, val<unsigned long long int> var_4, val<int> var_5, val<int> var_6, val<int> var_7, val<int> var_8, val<int> var_9, val<short> var_10, val<long long int> var_11, val<int> zero, val<bool*> var_12, val<short*> var_13, val<unsigned long long int*> var_14, val<signed char*> var_15, val<bool*> var_16, val<unsigned long long int*> var_17) {
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_10)) * (((/* implicit */val<int>) var_2))))) ? (((/* implicit */val<unsigned long long int>) max((((/* implicit */val<int>) var_10)), (var_5)))) : (max((((/* implicit */val<unsigned long long int>) var_8)), (15207258409892898431ULL)))))) ? (((/* implicit */val<unsigned long long int>) (+((+(((/* implicit */val<int>) var_2))))))) : ((-(var_1))))))
    {
        *var_12 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_10)) ? (var_7) : (var_6)))) * (var_1)))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned char>)224)) ? (var_11) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2))))))))) : ((~(((((/* implicit */val<bool>) (val<unsigned char>)223)) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) var_10))))))));
        *var_13 = ((/* implicit */val<short>) var_1);
        *var_14 = ((/* implicit */val<unsigned long long int>) max((*var_14), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) max((((var_4) * (((/* implicit */val<unsigned long long int>) var_11)))), (((var_4) / (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)224)))))))) ? (((((((/* implicit */val<long long int>) var_8)) / (9223372036854775807LL))) * (((/* implicit */val<long long int>) min((((/* implicit */val<int>) var_10)), (var_8)))))) : (((/* implicit */val<long long int>) (+(((((/* implicit */val<int>) (val<unsigned char>)13)) * (-8)))))))))));
        *var_15 &= ((/* implicit */val<signed char>) var_7);
    }

    *var_16 = ((/* implicit */val<bool>) (~(((/* implicit */val<int>) ((((var_11) + (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_10))))) >= (((/* implicit */val<long long int>) ((val<int>) var_5))))))));
    *var_17 = (~(((((/* implicit */val<bool>) ((var_8) & (((/* implicit */val<int>) var_2))))) ? (((/* implicit */val<unsigned long long int>) var_9)) : (((val<unsigned long long int>) var_8)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9855708723186362846ULL;
short var_2 = (short)-8033;
unsigned long long int var_4 = 17164717461697244229ULL;
int var_5 = -122316023;
int var_6 = 1328852536;
int var_7 = -1888566672;
int var_8 = -933239411;
int var_9 = -368658962;
short var_10 = (short)-6024;
long long int var_11 = -8081163121193015964LL;
int zero = 0;
bool var_12 = (bool)0;
short var_13 = (short)-13149;
unsigned long long int var_14 = 14186882856396791265ULL;
signed char var_15 = (signed char)6;
bool var_16 = (bool)1;
unsigned long long int var_17 = 4414139499096545171ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (bool)0;
    value_mismatch |= var_13 != (short)-5666;
    value_mismatch |= var_14 != 14186882856396791265ULL;
    value_mismatch |= var_15 != (signed char)0;
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != 368658961ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, zero, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
}
