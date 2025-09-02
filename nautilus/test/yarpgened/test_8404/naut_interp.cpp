/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8404
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8404
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
void test(val<unsigned long long int> var_0, val<bool> var_1, val<int> var_2, val<unsigned char> var_3, val<unsigned long long int> var_4, val<bool> var_6, val<unsigned int> var_7, val<unsigned char> var_9, val<int> var_10, val<int> var_11, val<bool> var_12, val<long long int> var_13, val<int> zero, val<short*> var_14, val<unsigned char*> var_15, val<int*> var_16, val<int*> var_17, val<long long int*> var_18, val<bool*> var_19) {
    *var_14 = ((/* implicit */val<short>) ((((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) var_9))))) > (min((((/* implicit */val<unsigned long long int>) min((((/* implicit */val<long long int>) (val<short>)2047)), (252201579132747776LL)))), (((((/* implicit */val<bool>) 1829593405)) ? (((/* implicit */val<unsigned long long int>) var_13)) : (var_0)))))));
    if (((/* implicit */val<bool>) ((((((/* implicit */val<bool>) 7813116206049874851LL)) || (((/* implicit */val<bool>) var_2)))) ? (min((((/* implicit */val<long long int>) var_1)), (min((-7813116206049874845LL), (((/* implicit */val<long long int>) (val<bool>)1)))))) : (-7813116206049874841LL))))
    {
        *var_15 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) -7813116206049874851LL)) ? (-7813116206049874862LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)32767)))));
        *var_16 = ((/* implicit */val<int>) ((((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) -7813116206049874841LL)) ? (-5677739339945861610LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3)))))) : (((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6))) : (0ULL))))) / (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) min(((val<unsigned char>)90), (((/* implicit */val<unsigned char>) (val<bool>)1))))) ? (max((-7813116206049874841LL), (72057594037665792LL))) : (((/* implicit */val<long long int>) min((((/* implicit */val<int>) var_3)), (var_11)))))))));
        *var_17 = ((((/* implicit */val<int>) ((val<unsigned char>) min((((/* implicit */val<int>) (val<unsigned char>)30)), (var_11))))) >> (((var_11) + (1510492209))));
        *var_18 = ((/* implicit */val<long long int>) max((*var_18), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((((/* implicit */val<long long int>) 0U)), (-7813116206049874858LL)))) ? (((((/* implicit */val<bool>) 7813116206049874844LL)) ? (var_0) : (6232682619517254114ULL))) : (max((13675361234945118973ULL), (((/* implicit */val<unsigned long long int>) (val<bool>)0))))))) ? (((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_12)) + (((/* implicit */val<int>) var_12))))) - (((((/* implicit */val<bool>) var_7)) ? (var_0) : (var_0))))) : (((((/* implicit */val<bool>) ((val<long long int>) var_6))) ? (((/* implicit */val<unsigned long long int>) (-(var_2)))) : (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_12))) * (var_0))))))))));
        *var_19 ^= ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) var_10)), (var_4)))) ? (var_0) : (((((/* implicit */val<bool>) var_2)) ? (var_0) : (((/* implicit */val<unsigned long long int>) var_11))))))) ? (-8482414546316040932LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) -7813116206049874851LL)), (2370389949598885420ULL)))) && (((/* implicit */val<bool>) max((((/* implicit */val<int>) (val<bool>)1)), (var_2))))))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13431202404339345296ULL;
bool var_1 = (bool)0;
int var_2 = 342328209;
unsigned char var_3 = (unsigned char)251;
unsigned long long int var_4 = 10158446051611146261ULL;
bool var_6 = (bool)1;
unsigned int var_7 = 2250481476U;
unsigned char var_9 = (unsigned char)100;
int var_10 = 917147186;
int var_11 = -1510492198;
bool var_12 = (bool)1;
long long int var_13 = -827380885499927308LL;
int zero = 0;
short var_14 = (short)-1180;
unsigned char var_15 = (unsigned char)72;
int var_16 = 859348846;
int var_17 = -325900616;
long long int var_18 = -4406536697245330914LL;
bool var_19 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (short)1;
    value_mismatch |= var_15 != (unsigned char)82;
    value_mismatch |= var_16 != 177;
    value_mismatch |= var_17 != 0;
    value_mismatch |= var_18 != 5015541669370206322LL;
    value_mismatch |= var_19 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_6, var_7, var_9, var_10, var_11, var_12, var_13, zero, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
