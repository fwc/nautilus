/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6254
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6254
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
void test(val<unsigned long long int> var_1, val<unsigned int> var_2, val<signed char> var_3, val<unsigned int> var_4, val<int> var_6, val<int> var_7, val<unsigned int> var_9, val<bool> var_10, val<unsigned char> var_13, val<int> zero, val<short*> var_18, val<unsigned int*> var_19, val<unsigned char*> var_20, val<unsigned short*> var_21, val<unsigned long long int*> var_22) {
    if (((/* implicit */val<bool>) (val<unsigned short>)22349))
    {
        *var_18 = ((/* implicit */val<short>) (+(((/* implicit */val<int>) min((((/* implicit */val<unsigned char>) var_10)), (var_13))))));
        *var_19 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) (val<short>)-1)) : (((/* implicit */val<int>) var_13))))) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) ((var_9) <= (((/* implicit */val<unsigned int>) var_7)))))))) ? (123818929) : (((((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3))) >= (257007050U)))) * (((/* implicit */val<int>) var_13))))));
        *var_20 -= ((/* implicit */val<unsigned char>) var_1);
    }

    *var_21 *= ((/* implicit */val<unsigned short>) ((((((/* implicit */val<bool>) ((-551635482) - (var_6)))) ? ((~(var_9))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)43178))))) < (((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) (val<short>)-32766)))))));
    *var_22 = ((/* implicit */val<unsigned long long int>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4146242767384614158ULL;
unsigned int var_2 = 3282949171U;
signed char var_3 = (signed char)-66;
unsigned int var_4 = 1384999255U;
int var_6 = -2071208446;
int var_7 = -433507824;
unsigned int var_9 = 1256932754U;
bool var_10 = (bool)0;
unsigned char var_13 = (unsigned char)60;
int zero = 0;
short var_18 = (short)13291;
unsigned int var_19 = 3987354380U;
unsigned char var_20 = (unsigned char)223;
unsigned short var_21 = (unsigned short)25036;
unsigned long long int var_22 = 13091872881963543340ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)0;
    value_mismatch |= var_19 != 60U;
    value_mismatch |= var_20 != (unsigned char)209;
    value_mismatch |= var_21 != (unsigned short)25036;
    value_mismatch |= var_22 != 3282949171ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_6, var_7, var_9, var_10, var_13, zero, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
