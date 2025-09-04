/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9470
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9470
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
void test(val<int> var_0, val<short> var_1, val<unsigned long long int> var_2, val<bool> var_3, val<bool> var_4, val<unsigned long long int> var_5, val<short> var_7, val<unsigned char> var_8, val<bool> var_9, val<int> zero, val<unsigned short*> var_10, val<bool*> var_11, val<unsigned char*> var_12, val<unsigned char*> var_13) {
    if (((/* implicit */val<bool>) min(((~(((/* implicit */val<int>) ((((/* implicit */val<int>) (val<bool>)1)) == (((/* implicit */val<int>) var_9))))))), (((((/* implicit */val<bool>) min((var_1), (var_1)))) ? ((~(((/* implicit */val<int>) (val<bool>)1)))) : ((+(((/* implicit */val<int>) var_4)))))))))
    {
        *var_10 = ((/* implicit */val<unsigned short>) var_8);
        *var_11 = ((/* implicit */val<bool>) ((var_9) ? (max((((((/* implicit */val<bool>) var_7)) ? (var_5) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4))))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_1)) * (((/* implicit */val<int>) var_4))))))) : (var_2)));
        *var_12 = ((/* implicit */val<unsigned char>) max((var_5), (((((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_3))))) ? (((((/* implicit */val<bool>) 6640044145760470560LL)) ? (var_5) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)-12305))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) max((var_7), (((/* implicit */val<short>) var_8))))))))));
    }

    *var_13 = ((/* implicit */val<unsigned char>) min((*var_13), (((/* implicit */val<unsigned char>) min((((((4289070993886945798ULL) == (((/* implicit */val<unsigned long long int>) var_0)))) ? (((/* implicit */val<int>) min((((/* implicit */val<short>) var_4)), (var_1)))) : (var_0))), (((/* implicit */val<int>) var_8)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 408584027;
short var_1 = (short)-29581;
unsigned long long int var_2 = 5089185889940341117ULL;
bool var_3 = (bool)0;
bool var_4 = (bool)1;
unsigned long long int var_5 = 13241412459097878190ULL;
short var_7 = (short)-13891;
unsigned char var_8 = (unsigned char)28;
bool var_9 = (bool)0;
int zero = 0;
unsigned short var_10 = (unsigned short)56487;
bool var_11 = (bool)1;
unsigned char var_12 = (unsigned char)106;
unsigned char var_13 = (unsigned char)59;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned short)28;
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != (unsigned char)174;
    value_mismatch |= var_13 != (unsigned char)28;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_7, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
