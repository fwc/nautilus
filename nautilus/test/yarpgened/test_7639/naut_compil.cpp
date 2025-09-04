/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7639
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7639
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
void test(val<bool> var_0, val<unsigned char> var_1, val<unsigned int> var_4, val<unsigned long long int> var_6, val<bool> var_7, val<int> var_8, val<long long int> var_12, val<int> zero, val<unsigned int*> var_13, val<long long int*> var_14, val<unsigned char*> var_15, val<signed char*> var_16, val<unsigned int*> var_17, val<long long int*> var_18, val<unsigned short*> var_19) {
    if (((/* implicit */val<bool>) var_1))
    {
        *var_13 = ((/* implicit */val<unsigned int>) (~(((val<long long int>) ((((/* implicit */val<bool>) var_4)) ? (var_6) : (var_6))))));
        *var_14 = ((/* implicit */val<long long int>) ((((val<unsigned int>) 3521689354866426154ULL)) / ((-(min((((/* implicit */val<unsigned int>) -1317587904)), (874773026U)))))));
    }

    if (((/* implicit */val<bool>) min((((val<unsigned long long int>) 2927106785188796472LL)), (((/* implicit */val<unsigned long long int>) (+((-(((/* implicit */val<int>) (val<signed char>)117))))))))))
    {
        *var_15 = ((/* implicit */val<unsigned char>) ((val<unsigned int>) var_7));
        *var_16 |= ((/* implicit */val<signed char>) var_12);
        *var_17 = ((/* implicit */val<unsigned int>) min((*var_17), (((/* implicit */val<unsigned int>) (-((+(((/* implicit */val<int>) var_0)))))))));
        *var_18 = ((/* implicit */val<long long int>) min((*var_18), (var_12)));
    }

    *var_19 *= ((/* implicit */val<unsigned short>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
unsigned char var_1 = (unsigned char)192;
unsigned int var_4 = 1605047642U;
unsigned long long int var_6 = 7850966921968009088ULL;
bool var_7 = (bool)1;
int var_8 = 563493370;
long long int var_12 = -6652461458582112496LL;
int zero = 0;
unsigned int var_13 = 2769316517U;
long long int var_14 = -5220919858339465313LL;
unsigned char var_15 = (unsigned char)246;
signed char var_16 = (signed char)92;
unsigned int var_17 = 1810682829U;
long long int var_18 = 6972520526312957844LL;
unsigned short var_19 = (unsigned short)59308;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 1086406783U;
    value_mismatch |= var_14 != 0LL;
    value_mismatch |= var_15 != (unsigned char)1;
    value_mismatch |= var_16 != (signed char)92;
    value_mismatch |= var_17 != 1810682829U;
    value_mismatch |= var_18 != -6652461458582112496LL;
    value_mismatch |= var_19 != (unsigned short)35320;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_6, var_7, var_8, var_12, zero, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
