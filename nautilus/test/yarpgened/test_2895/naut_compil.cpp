/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2895
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2895
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
void test(val<unsigned char> var_0, val<unsigned long long int> var_1, val<unsigned char> var_3, val<signed char> var_7, val<int> var_8, val<long long int> var_11, val<unsigned char> var_14, val<int> var_16, val<int> zero, val<long long int*> var_17, val<int*> var_18, val<signed char*> var_19, val<unsigned short*> var_20, val<unsigned short*> var_21) {
    if (((/* implicit */val<bool>) (~(var_8))))
    {
        *var_17 -= ((/* implicit */val<long long int>) var_0);
        *var_18 = ((/* implicit */val<int>) (((~(((val<unsigned long long int>) var_16)))) * (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (((-(((/* implicit */val<int>) var_3)))) >= (((/* implicit */val<int>) var_14))))))));
    }
    else
    {
        *var_19 = ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) (~(((((/* implicit */val<bool>) (val<unsigned char>)31)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_0))) : (-8534881422975771537LL))))))));
        *var_20 = ((/* implicit */val<unsigned short>) (-((-((~(var_1)))))));
    }

    *var_21 = ((/* implicit */val<unsigned short>) (~(((((/* implicit */val<bool>) min((var_11), (((/* implicit */val<long long int>) (val<unsigned short>)2942))))) ? ((~(1725696497U))) : (((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) var_7)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)42;
unsigned long long int var_1 = 13426478712626749238ULL;
unsigned char var_3 = (unsigned char)180;
signed char var_7 = (signed char)-8;
int var_8 = 1760314346;
long long int var_11 = -1296176261170637308LL;
unsigned char var_14 = (unsigned char)48;
int var_16 = -1007466382;
int zero = 0;
long long int var_17 = -6205403775954240918LL;
int var_18 = -8051394;
signed char var_19 = (signed char)-67;
unsigned short var_20 = (unsigned short)43087;
unsigned short var_21 = (unsigned short)5903;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != -6205403775954240960LL;
    value_mismatch |= var_18 != 0;
    value_mismatch |= var_19 != (signed char)-67;
    value_mismatch |= var_20 != (unsigned short)43087;
    value_mismatch |= var_21 != (unsigned short)2545;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_7, var_8, var_11, var_14, var_16, zero, &var_17, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
