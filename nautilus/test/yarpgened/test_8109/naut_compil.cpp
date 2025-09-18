/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8109
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8109
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
void test(val<long long int> var_0, val<unsigned short> var_1, val<int> var_2, val<bool> var_4, val<unsigned char> var_5, val<unsigned short> var_6, val<unsigned int> var_7, val<int> var_9, val<unsigned int> var_11, val<unsigned short> var_13, val<short> var_15, val<unsigned short> var_16, val<unsigned int> var_17, val<long long int> var_18, val<int> zero, val<signed char*> var_19, val<int*> var_20, val<long long int*> var_21, val<int*> var_22, val<unsigned char*> var_23) {
    *var_19 = ((/* implicit */val<signed char>) var_4);
    *var_20 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<long long int>) var_7)) : (var_0)))) ? (((/* implicit */val<int>) ((val<unsigned char>) (val<bool>)1))) : (((/* implicit */val<int>) (val<bool>)1))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) min((((/* implicit */val<unsigned char>) (val<bool>)1)), ((val<unsigned char>)0)))) >= (((/* implicit */val<int>) var_1)))))) : (max((((/* implicit */val<long long int>) var_9)), (((((/* implicit */val<bool>) var_9)) ? (9223372036854775806LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)60)))))))));
    *var_21 = ((/* implicit */val<long long int>) ((val<unsigned long long int>) (+(max((((/* implicit */val<long long int>) var_5)), (8290335201273072031LL))))));
    if (((((/* implicit */val<bool>) (+(((((/* implicit */val<bool>) 4294967294U)) ? (8461395041362151323LL) : (((/* implicit */val<long long int>) 1754612055U))))))) && (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((var_0) + (8290335201273072038LL)))) ? (((((/* implicit */val<bool>) var_17)) ? (((/* implicit */val<int>) var_16)) : (((/* implicit */val<int>) var_6)))) : (((((/* implicit */val<bool>) var_13)) ? (var_2) : (((/* implicit */val<int>) var_15)))))))))
    {
        *var_22 = ((/* implicit */val<int>) (+(min((max((var_0), (var_18))), (((var_18) / (((/* implicit */val<long long int>) var_7))))))));
        *var_23 = ((/* implicit */val<unsigned char>) max((max((var_18), (((/* implicit */val<long long int>) var_2)))), (((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) var_11)))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5365898505947321346LL;
unsigned short var_1 = (unsigned short)15936;
int var_2 = 1568707521;
bool var_4 = (bool)1;
unsigned char var_5 = (unsigned char)255;
unsigned short var_6 = (unsigned short)1420;
unsigned int var_7 = 1014774557U;
int var_9 = -1471447401;
unsigned int var_11 = 234100250U;
unsigned short var_13 = (unsigned short)31668;
short var_15 = (short)288;
unsigned short var_16 = (unsigned short)24831;
unsigned int var_17 = 3264107489U;
long long int var_18 = -1512593748441697646LL;
int zero = 0;
signed char var_19 = (signed char)-21;
int var_20 = -476433254;
long long int var_21 = -6932633975071564029LL;
int var_22 = 1819764343;
unsigned char var_23 = (unsigned char)107;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)1;
    value_mismatch |= var_20 != 0;
    value_mismatch |= var_21 != 8290335201273072031LL;
    value_mismatch |= var_22 != -156765550;
    value_mismatch |= var_23 != (unsigned char)193;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_5, var_6, var_7, var_9, var_11, var_13, var_15, var_16, var_17, var_18, zero, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
}
