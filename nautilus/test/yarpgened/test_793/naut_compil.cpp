/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 793
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=793
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
void test(val<bool> var_0, val<unsigned int> var_2, val<int> var_3, val<unsigned short> var_4, val<signed char> var_5, val<int> var_6, val<bool> var_7, val<signed char> var_8, val<unsigned short> var_9, val<unsigned char> var_10, val<int> zero, val<unsigned short*> var_11, val<int*> var_12, val<long long int*> var_13, val<short*> var_14, val<short*> var_15, val<unsigned char*> var_16) {
    *var_11 = ((/* implicit */val<unsigned short>) min((*var_11), (((/* implicit */val<unsigned short>) 4294967295U))));
    if (((/* implicit */val<bool>) ((val<unsigned short>) var_0)))
    {
        *var_12 = ((((/* implicit */val<bool>) var_10)) ? (((((var_2) <= (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1))))) ? (((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) var_9)) : (var_6))) : (((/* implicit */val<int>) var_7)))) : (((/* implicit */val<int>) ((((/* implicit */val<int>) min((var_9), (((/* implicit */val<unsigned short>) var_8))))) <= (33816991)))));
        *var_13 = ((/* implicit */val<long long int>) min((((/* implicit */val<unsigned int>) ((min((((/* implicit */val<int>) (val<bool>)1)), (1517877317))) | (((((/* implicit */val<int>) var_0)) | (-442189690)))))), (((((/* implicit */val<bool>) min(((val<unsigned short>)45042), (((/* implicit */val<unsigned short>) (val<bool>)1))))) ? (max((((/* implicit */val<unsigned int>) var_9)), (var_2))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) min((var_9), (((/* implicit */val<unsigned short>) var_5))))))))));
        *var_14 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) var_7)) : (var_6)));
        *var_15 = ((/* implicit */val<short>) ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_9))))) - (var_3)));
    }

    *var_16 = ((/* implicit */val<unsigned char>) var_4);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
unsigned int var_2 = 2304068949U;
int var_3 = 2062630920;
unsigned short var_4 = (unsigned short)52886;
signed char var_5 = (signed char)109;
int var_6 = -593997575;
bool var_7 = (bool)1;
signed char var_8 = (signed char)-23;
unsigned short var_9 = (unsigned short)59817;
unsigned char var_10 = (unsigned char)4;
int zero = 0;
unsigned short var_11 = (unsigned short)26795;
int var_12 = -912232455;
long long int var_13 = -3067301814674752696LL;
short var_14 = (short)-17136;
short var_15 = (short)1978;
unsigned char var_16 = (unsigned char)220;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned short)26795;
    value_mismatch |= var_12 != 1;
    value_mismatch |= var_13 != 2304068949LL;
    value_mismatch |= var_14 != (short)1;
    value_mismatch |= var_15 != (short)-16392;
    value_mismatch |= var_16 != (unsigned char)150;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, zero, &var_11, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
