/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9241
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9241
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
void test(val<short> var_1, val<unsigned int> var_2, val<long long int> var_5, val<unsigned int> var_6, val<unsigned char> var_8, val<unsigned char> var_11, val<int> zero, val<bool*> var_12, val<unsigned short*> var_13, val<unsigned int*> var_14, val<unsigned short*> var_15, val<unsigned char*> var_16) {
    *var_12 = ((/* implicit */val<bool>) min((*var_12), (((/* implicit */val<bool>) max(((~(((/* implicit */val<int>) (val<unsigned char>)151)))), (((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) var_5)) >= (max((((/* implicit */val<unsigned long long int>) -1870694149)), (3ULL)))))))))));
    if (((/* implicit */val<bool>) var_6))
    {
        *var_13 = ((/* implicit */val<unsigned short>) (+(((/* implicit */val<int>) min((var_1), (((/* implicit */val<short>) var_8)))))));
        *var_14 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) 8146591775270283056ULL)) ? ((~(((val<long long int>) var_2)))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)31272)))));
        *var_15 = ((/* implicit */val<unsigned short>) var_11);
    }

    *var_16 = (val<unsigned char>)255;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9976;
unsigned int var_2 = 1616470707U;
long long int var_5 = -3520669581209833675LL;
unsigned int var_6 = 880565731U;
unsigned char var_8 = (unsigned char)123;
unsigned char var_11 = (unsigned char)136;
int zero = 0;
bool var_12 = (bool)1;
unsigned short var_13 = (unsigned short)37896;
unsigned int var_14 = 3954955863U;
unsigned short var_15 = (unsigned short)36085;
unsigned char var_16 = (unsigned char)249;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (bool)0;
    value_mismatch |= var_13 != (unsigned short)55560;
    value_mismatch |= var_14 != 2678496588U;
    value_mismatch |= var_15 != (unsigned short)136;
    value_mismatch |= var_16 != (unsigned char)255;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_5, var_6, var_8, var_11, zero, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
}
