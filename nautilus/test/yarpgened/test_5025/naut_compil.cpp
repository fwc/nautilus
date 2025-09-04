/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5025
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5025
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
void test(val<signed char> var_3, val<short> var_7, val<signed char> var_11, val<unsigned long long int> var_16, val<int> zero, val<unsigned int*> var_17, val<unsigned char*> var_18, val<int*> var_19, val<short*> var_20, val<long long int*> var_21) {
    *var_17 = ((/* implicit */val<unsigned int>) max(((val<unsigned short>)29856), (((/* implicit */val<unsigned short>) (val<unsigned char>)28))));
    if (((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_11)))))
    {
        *var_18 -= ((/* implicit */val<unsigned char>) (val<bool>)1);
        *var_19 = ((/* implicit */val<int>) max((*var_19), (((/* implicit */val<int>) var_16))));
        *var_20 = ((/* implicit */val<short>) 1073741823ULL);
    }

    *var_21 = ((/* implicit */val<long long int>) (-(((((/* implicit */val<int>) ((((/* implicit */val<bool>) var_16)) && (((/* implicit */val<bool>) var_7))))) | (((((/* implicit */val<int>) (val<short>)-5850)) | (((/* implicit */val<int>) var_3))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-51;
short var_7 = (short)-6634;
signed char var_11 = (signed char)27;
unsigned long long int var_16 = 3450832251444644386ULL;
int zero = 0;
unsigned int var_17 = 357631748U;
unsigned char var_18 = (unsigned char)34;
int var_19 = 367621283;
short var_20 = (short)31047;
long long int var_21 = -8763555999412097744LL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 29856U;
    value_mismatch |= var_18 != (unsigned char)33;
    value_mismatch |= var_19 != 1053936162;
    value_mismatch |= var_20 != (short)-1;
    value_mismatch |= var_21 != 17LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_7, var_11, var_16, zero, &var_17, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
