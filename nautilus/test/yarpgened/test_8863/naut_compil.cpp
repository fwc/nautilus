/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8863
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8863
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
void test(val<unsigned char> var_4, val<unsigned char> var_5, val<unsigned char> var_6, val<long long int> var_7, val<long long int> var_8, val<unsigned char> var_10, val<long long int> var_11, val<long long int> var_12, val<int> zero, val<unsigned char*> var_16, val<unsigned char*> var_17, val<unsigned char*> var_18, val<long long int*> var_19) {
    if (((/* implicit */val<bool>) var_11))
    {
        *var_16 = ((/* implicit */val<unsigned char>) max((((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) -3204070454303208145LL)) ? (((/* implicit */val<int>) var_6)) : (((/* implicit */val<int>) var_5))))) : (var_8))), (((/* implicit */val<long long int>) min((((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) (val<unsigned char>)129)) : (((/* implicit */val<int>) (val<unsigned char>)90)))), (((((/* implicit */val<int>) var_4)) >> (((var_11) - (6792928989315169648LL))))))))));
        *var_17 = ((/* implicit */val<unsigned char>) min((((/* implicit */val<int>) var_6)), (((((/* implicit */val<int>) ((((/* implicit */val<int>) var_10)) == (((/* implicit */val<int>) (val<unsigned char>)165))))) / ((-(((/* implicit */val<int>) var_4))))))));
    }

    *var_18 = ((/* implicit */val<unsigned char>) var_7);
    *var_19 = ((/* implicit */val<long long int>) max((*var_19), (var_12)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)114;
unsigned char var_5 = (unsigned char)249;
unsigned char var_6 = (unsigned char)166;
long long int var_7 = -6771152762117583127LL;
long long int var_8 = -1129726111114441717LL;
unsigned char var_10 = (unsigned char)87;
long long int var_11 = 6792928989315169667LL;
long long int var_12 = -7774511066322200211LL;
int zero = 0;
unsigned char var_16 = (unsigned char)48;
unsigned char var_17 = (unsigned char)254;
unsigned char var_18 = (unsigned char)159;
long long int var_19 = 7973627120785141535LL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned char)166;
    value_mismatch |= var_17 != (unsigned char)0;
    value_mismatch |= var_18 != (unsigned char)233;
    value_mismatch |= var_19 != 7973627120785141535LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_6, var_7, var_8, var_10, var_11, var_12, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
