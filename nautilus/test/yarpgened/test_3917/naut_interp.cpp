/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3917
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3917
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
void test(val<unsigned char> var_0, val<int> var_1, val<unsigned short> var_3, val<unsigned short> var_4, val<unsigned long long int> var_5, val<signed char> var_6, val<bool> var_7, val<short> var_8, val<short> var_9, val<int> zero, val<unsigned int*> var_10, val<unsigned int*> var_11, val<long long int*> var_12, val<int*> var_13, val<int*> var_14, val<unsigned short*> var_15, val<signed char*> var_16, val<long long int*> var_17, val<unsigned short*> var_18) {
    if (((/* implicit */val<bool>) min((var_1), (((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) var_6)), (max((var_4), (var_3)))))))))
    {
        *var_10 |= ((/* implicit */val<unsigned int>) max((var_5), (((/* implicit */val<unsigned long long int>) max((((val<unsigned int>) (val<signed char>)(-127 - 1))), (((((/* implicit */val<bool>) var_9)) ? (2569541730U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_7))))))))));
        *var_11 = ((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) max((((/* implicit */val<short>) var_7)), (max((((/* implicit */val<short>) (val<signed char>)(-127 - 1))), ((val<short>)29888))))))));
        *var_12 = ((/* implicit */val<long long int>) max((min((((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) var_8))))), (((val<unsigned int>) var_0)))), (((/* implicit */val<unsigned int>) max((((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) var_9))))), (var_6))))));
        if (((/* implicit */val<bool>) max((((/* implicit */val<int>) var_4)), ((~(((/* implicit */val<int>) max((((/* implicit */val<signed char>) (val<bool>)1)), ((val<signed char>)52)))))))))
        {
            *var_13 = ((/* implicit */val<int>) min((((val<unsigned int>) max((((/* implicit */val<unsigned char>) (val<bool>)0)), (var_0)))), (((/* implicit */val<unsigned int>) var_1))));
            *var_14 = ((/* implicit */val<int>) var_7);
        }

    }

    if (((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) var_3)), ((-(min((((/* implicit */val<unsigned int>) var_9)), (1725425555U))))))))
    {
        *var_15 = ((/* implicit */val<unsigned short>) ((val<unsigned long long int>) ((val<long long int>) (-(2569541730U)))));
        *var_16 = ((/* implicit */val<signed char>) min((max((((/* implicit */val<long long int>) var_0)), (-1364931068736801051LL))), (((/* implicit */val<long long int>) var_1))));
    }

    *var_17 = ((/* implicit */val<long long int>) ((val<short>) ((((/* implicit */val<bool>) var_6)) ? (((val<long long int>) var_0)) : (((/* implicit */val<long long int>) var_1)))));
    *var_18 &= ((/* implicit */val<unsigned short>) (~((+(((((/* implicit */val<bool>) (val<signed char>)120)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) var_8))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)24;
int var_1 = -15717698;
unsigned short var_3 = (unsigned short)8824;
unsigned short var_4 = (unsigned short)33800;
unsigned long long int var_5 = 7377882541297334056ULL;
signed char var_6 = (signed char)41;
bool var_7 = (bool)0;
short var_8 = (short)-15939;
short var_9 = (short)-1586;
int zero = 0;
unsigned int var_10 = 1428514417U;
unsigned int var_11 = 3719516255U;
long long int var_12 = -137585570169047557LL;
int var_13 = -1597705743;
int var_14 = 1324747406;
unsigned short var_15 = (unsigned short)33265;
signed char var_16 = (signed char)49;
long long int var_17 = 1252272658873809933LL;
unsigned short var_18 = (unsigned short)11790;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 4122310521U;
    value_mismatch |= var_11 != 4294937408U;
    value_mismatch |= var_12 != 41LL;
    value_mismatch |= var_13 != 24;
    value_mismatch |= var_14 != 0;
    value_mismatch |= var_15 != (unsigned short)59294;
    value_mismatch |= var_16 != (signed char)-66;
    value_mismatch |= var_17 != 24LL;
    value_mismatch |= var_18 != (unsigned short)11790;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_5, var_6, var_7, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
