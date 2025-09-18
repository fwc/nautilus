/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1015
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1015
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
void test(val<unsigned short> var_0, val<int> var_1, val<bool> var_2, val<int> var_3, val<unsigned long long int> var_4, val<unsigned short> var_5, val<long long int> var_6, val<int> var_7, val<short> var_8, val<short> var_9, val<int> zero, val<short*> var_10, val<unsigned char*> var_11, val<long long int*> var_12, val<unsigned short*> var_13, val<bool*> var_14, val<unsigned char*> var_15, val<long long int*> var_16, val<int*> var_17) {
    *var_10 = ((/* implicit */val<short>) var_2);
    if (((/* implicit */val<bool>) var_3))
    {
        *var_11 ^= ((/* implicit */val<unsigned char>) ((((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9))) : (max((((/* implicit */val<long long int>) var_5)), (var_6))))) | (((/* implicit */val<long long int>) ((val<int>) 1068199232)))));
        if (((/* implicit */val<bool>) ((val<unsigned short>) ((((/* implicit */val<bool>) max((var_1), (((/* implicit */val<int>) var_0))))) ? (min((((/* implicit */val<unsigned long long int>) var_8)), (var_4))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)89)))))))
        {
            *var_12 = ((/* implicit */val<long long int>) max((*var_12), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_5)) + (((((/* implicit */val<int>) var_5)) - (((/* implicit */val<int>) (val<unsigned short>)65535))))))) ? (var_3) : (((/* implicit */val<int>) var_9)))))));
            *var_13 = ((/* implicit */val<unsigned short>) max((*var_13), (((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_4)) ? (min((((/* implicit */val<long long int>) ((val<int>) var_8))), (var_6))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((val<unsigned int>) var_5))))))))))));
        }
        else
        {
            *var_14 = ((/* implicit */val<bool>) var_3);
            *var_15 = ((/* implicit */val<unsigned char>) var_6);
        }

        *var_16 = ((/* implicit */val<long long int>) var_7);
    }

    *var_17 = ((/* implicit */val<int>) max((*var_17), (((/* implicit */val<int>) var_8))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29066;
int var_1 = -134583864;
bool var_2 = (bool)1;
int var_3 = 1797781376;
unsigned long long int var_4 = 3891044276700953855ULL;
unsigned short var_5 = (unsigned short)56515;
long long int var_6 = 6941527046502621193LL;
int var_7 = -344983079;
short var_8 = (short)-31212;
short var_9 = (short)12464;
int zero = 0;
short var_10 = (short)29105;
unsigned char var_11 = (unsigned char)122;
long long int var_12 = -5702750241549392331LL;
unsigned short var_13 = (unsigned short)61656;
bool var_14 = (bool)0;
unsigned char var_15 = (unsigned char)135;
long long int var_16 = 7333568818798629648LL;
int var_17 = 1014997332;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)1;
    value_mismatch |= var_11 != (unsigned char)138;
    value_mismatch |= var_12 != 1797781376LL;
    value_mismatch |= var_13 != (unsigned short)61656;
    value_mismatch |= var_14 != (bool)0;
    value_mismatch |= var_15 != (unsigned char)135;
    value_mismatch |= var_16 != -344983079LL;
    value_mismatch |= var_17 != 1014997332;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
}
