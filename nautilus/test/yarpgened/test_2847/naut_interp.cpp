/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2847
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2847
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
void test(val<unsigned short> var_6, val<unsigned long long int> var_11, val<signed char> var_14, val<unsigned long long int> var_16, val<unsigned short> var_17, val<int> zero, val<unsigned long long int*> var_19, val<unsigned int*> var_20, val<signed char*> var_21, val<int*> var_22, val<unsigned short*> var_23, val<unsigned int*> var_24) {
    if (((/* implicit */val<bool>) (-(((/* implicit */val<int>) ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_14))))) >= (((/* implicit */val<int>) var_6))))))))
    {
        *var_19 |= max((((/* implicit */val<unsigned long long int>) ((val<int>) var_11))), (var_16));
        *var_20 = ((/* implicit */val<unsigned int>) (+(((((10811582747165542442ULL) | (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)26098))))) >> (((/* implicit */val<int>) (val<unsigned char>)60))))));
        *var_21 = ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) max((-302027066902142758LL), (((/* implicit */val<long long int>) (-(((/* implicit */val<int>) var_17))))))))));
    }

    if (((/* implicit */val<bool>) min((10811582747165542436ULL), (((/* implicit */val<unsigned long long int>) (val<short>)-9790)))))
    {
        *var_22 = ((/* implicit */val<int>) var_6);
        *var_23 |= ((/* implicit */val<unsigned short>) 1686223391U);
    }

    *var_24 = min((1686223391U), (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_17)) << (((((/* implicit */val<int>) (val<unsigned short>)22689)) - (22675)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)29595;
unsigned long long int var_11 = 2312626382806517935ULL;
signed char var_14 = (signed char)-82;
unsigned long long int var_16 = 869586088604059684ULL;
unsigned short var_17 = (unsigned short)34409;
int zero = 0;
unsigned long long int var_19 = 8958582062868780680ULL;
unsigned int var_20 = 2679606683U;
signed char var_21 = (signed char)120;
int var_22 = -312069285;
unsigned short var_23 = (unsigned short)32638;
unsigned int var_24 = 2407037524U;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 8958582062868780680ULL;
    value_mismatch |= var_20 != 2679606683U;
    value_mismatch |= var_21 != (signed char)120;
    value_mismatch |= var_22 != 29595;
    value_mismatch |= var_23 != (unsigned short)65407;
    value_mismatch |= var_24 != 563757056U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_11, var_14, var_16, var_17, zero, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
  assert(!value_mismatch);
}
