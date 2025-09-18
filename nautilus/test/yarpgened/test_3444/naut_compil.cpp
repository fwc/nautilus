/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3444
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3444
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
void test(val<unsigned char> var_0, val<unsigned char> var_2, val<long long int> var_3, val<short> var_4, val<int> var_5, val<int> var_6, val<unsigned short> var_7, val<int> var_8, val<int> var_9, val<int> zero, val<int*> var_10, val<long long int*> var_11, val<bool*> var_12, val<unsigned int*> var_13, val<signed char*> var_14, val<long long int*> var_15, val<int*> var_16) {
    *var_10 = var_9;
    *var_11 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (val<unsigned char>)246)) ? (-2147483645) : (2147483645)));
    *var_12 = ((/* implicit */val<bool>) (val<unsigned short>)16352);
    *var_13 = ((/* implicit */val<unsigned int>) var_4);
    if (((/* implicit */val<bool>) ((2147483631) - (((/* implicit */val<int>) var_0)))))
    {
        *var_14 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) max((((/* implicit */val<int>) var_7)), (((((/* implicit */val<bool>) var_2)) ? (-2147483645) : (((/* implicit */val<int>) (val<short>)7499))))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((val<unsigned int>) -2147483644)) == (((/* implicit */val<unsigned int>) var_8)))))) : (min(((-(-4690670053748227077LL))), (((/* implicit */val<long long int>) ((val<unsigned char>) 18446462598732840960ULL)))))));
        *var_15 = ((/* implicit */val<long long int>) ((((min((var_6), (((((/* implicit */val<bool>) (-9223372036854775807LL - 1LL))) ? (((/* implicit */val<int>) var_4)) : (var_8))))) + (2147483647))) >> (((((((var_5) + (2147483647))) << ((((((-(var_8))) + (1250896739))) - (9))))) + (765912741)))));
        *var_16 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<unsigned short>)24)) ? (((min((4690670053748227076LL), (((/* implicit */val<long long int>) 2129843226)))) & (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_5)) ? (var_9) : (var_9)))))) : (((((/* implicit */val<long long int>) 2147483644)) + (var_3)))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)143;
unsigned char var_2 = (unsigned char)210;
long long int var_3 = 785136197534476748LL;
short var_4 = (short)-10958;
int var_5 = -382956360;
int var_6 = 1344630772;
unsigned short var_7 = (unsigned short)55003;
int var_8 = 1250896729;
int var_9 = -1784821375;
int zero = 0;
int var_10 = 94613045;
long long int var_11 = -8077552526414511458LL;
bool var_12 = (bool)1;
unsigned int var_13 = 895375349U;
signed char var_14 = (signed char)102;
long long int var_15 = 4956726733880084628LL;
int var_16 = 1727494943;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != -1784821375;
    value_mismatch |= var_11 != -2147483645LL;
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != 4294956338U;
    value_mismatch |= var_14 != (signed char)0;
    value_mismatch |= var_15 != 4095LL;
    value_mismatch |= var_16 != 345030656;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
}
