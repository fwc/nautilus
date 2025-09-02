/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1370
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1370
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
void test(val<unsigned long long int> var_0, val<short> var_2, val<int> var_3, val<unsigned int> var_4, val<int> var_6, val<int> var_8, val<bool> var_11, val<int> var_12, val<unsigned int> var_13, val<short> var_14, val<unsigned char> var_15, val<unsigned long long int> var_16, val<int> zero, val<unsigned long long int*> var_17, val<long long int*> var_18, val<bool*> var_19, val<unsigned long long int*> var_20, val<bool*> var_21, val<signed char*> var_22, val<short*> var_23) {
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) ((val<short>) var_4))) : (((/* implicit */val<int>) (val<bool>)1)))))
    {
        *var_17 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) max((((((/* implicit */val<bool>) var_6)) ? (var_0) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2))))), (((/* implicit */val<unsigned long long int>) var_2))))) ? (((val<long long int>) var_14)) : (((/* implicit */val<long long int>) var_12))));
        *var_18 = ((/* implicit */val<long long int>) (-(((/* implicit */val<int>) var_2))));
    }
    else
    {
        *var_19 = ((/* implicit */val<bool>) min((*var_19), (((/* implicit */val<bool>) min((var_12), (var_8))))));
        *var_20 = ((/* implicit */val<unsigned long long int>) ((val<long long int>) ((val<signed char>) max((((/* implicit */val<unsigned long long int>) var_6)), (var_0)))));
    }

    if (((/* implicit */val<bool>) (((!(((/* implicit */val<bool>) (-(var_3)))))) ? (((val<long long int>) (+(var_16)))) : (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((val<unsigned char>) var_0))) ? (((val<int>) var_11)) : (((var_8) / (((/* implicit */val<int>) var_15))))))))))
    {
        *var_21 = ((/* implicit */val<bool>) var_15);
        *var_22 = ((/* implicit */val<signed char>) 3720974647526535498ULL);
    }

    *var_23 = ((/* implicit */val<short>) var_13);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 626995667781673880ULL;
short var_2 = (short)-18933;
int var_3 = 1427244510;
unsigned int var_4 = 2577068282U;
int var_6 = 324479829;
int var_8 = 1651160054;
bool var_11 = (bool)1;
int var_12 = -1469673772;
unsigned int var_13 = 3622343541U;
short var_14 = (short)-23566;
unsigned char var_15 = (unsigned char)182;
unsigned long long int var_16 = 16926495459591460752ULL;
int zero = 0;
unsigned long long int var_17 = 3292332712055332270ULL;
long long int var_18 = 8868244271608130287LL;
bool var_19 = (bool)1;
unsigned long long int var_20 = 5210772273949880995ULL;
bool var_21 = (bool)0;
signed char var_22 = (signed char)-4;
short var_23 = (short)-26731;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 18446744073709528050ULL;
    value_mismatch |= var_18 != 18933LL;
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != 5210772273949880995ULL;
    value_mismatch |= var_21 != (bool)1;
    value_mismatch |= var_22 != (signed char)74;
    value_mismatch |= var_23 != (short)-27787;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_6, var_8, var_11, var_12, var_13, var_14, var_15, var_16, zero, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
