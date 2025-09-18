/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3783
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3783
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
void test(val<unsigned long long int> var_0, val<unsigned long long int> var_1, val<unsigned int> var_3, val<bool> var_5, val<unsigned int> var_7, val<long long int> var_8, val<unsigned short> var_10, val<int> zero, val<long long int*> var_13, val<long long int*> var_14, val<unsigned int*> var_15, val<bool*> var_16, val<short*> var_17, val<unsigned short*> var_18) {
    if (((/* implicit */val<bool>) (((~(var_7))) << (((97669251082419940LL) - (97669251082419915LL))))))
    {
        *var_13 = ((/* implicit */val<long long int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<short>) max((var_3), (var_3)))))) != (var_1)));
        *var_14 += ((/* implicit */val<long long int>) min(((!(((/* implicit */val<bool>) var_1)))), (((((/* implicit */val<bool>) var_10)) && (((/* implicit */val<bool>) 7558640396451578953LL))))));
        *var_15 = ((/* implicit */val<unsigned int>) (+((-(((/* implicit */val<int>) var_5))))));
    }

    *var_16 = ((/* implicit */val<bool>) min((*var_16), (((/* implicit */val<bool>) ((((((((/* implicit */val<bool>) var_0)) && (((/* implicit */val<bool>) (val<unsigned char>)88)))) ? (((/* implicit */val<long long int>) (-(1197650402U)))) : (var_8))) - (((/* implicit */val<long long int>) var_3)))))));
    *var_17 = ((/* implicit */val<short>) var_8);
    *var_18 = ((/* implicit */val<unsigned short>) -15);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7180603648110568750ULL;
unsigned long long int var_1 = 3421406829981238145ULL;
unsigned int var_3 = 1070999974U;
bool var_5 = (bool)1;
unsigned int var_7 = 3569739082U;
long long int var_8 = 2149292964325869718LL;
unsigned short var_10 = (unsigned short)37159;
int zero = 0;
long long int var_13 = 7465975213018866742LL;
long long int var_14 = 8950604546001167571LL;
unsigned int var_15 = 2692827784U;
bool var_16 = (bool)0;
short var_17 = (short)-2555;
unsigned short var_18 = (unsigned short)18292;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 1LL;
    value_mismatch |= var_14 != 8950604546001167571LL;
    value_mismatch |= var_15 != 4294967295U;
    value_mismatch |= var_16 != (bool)0;
    value_mismatch |= var_17 != (short)-14186;
    value_mismatch |= var_18 != (unsigned short)65521;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_5, var_7, var_8, var_10, zero, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
}
