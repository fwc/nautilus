/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1495
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1495
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
void test(val<unsigned int> var_2, val<unsigned int> var_4, val<bool> var_5, val<unsigned long long int> var_6, val<unsigned char> var_8, val<bool> var_11, val<unsigned int> var_15, val<unsigned char> var_16, val<int> zero, val<bool*> var_17, val<bool*> var_18, val<bool*> var_19, val<unsigned int*> var_20, val<signed char*> var_21, val<unsigned char*> var_22, val<signed char*> var_23, val<unsigned char*> var_24) {
    *var_17 = ((/* implicit */val<bool>) (~(((/* implicit */val<int>) (val<bool>)1))));
    if (((/* implicit */val<bool>) (val<unsigned char>)184))
    {
        *var_18 = var_11;
        *var_19 = ((/* implicit */val<bool>) (~(var_2)));
        *var_20 ^= ((/* implicit */val<unsigned int>) var_11);
        *var_21 = ((/* implicit */val<signed char>) ((var_5) ? ((~(((((/* implicit */val<bool>) var_15)) ? (((/* implicit */val<unsigned long long int>) var_4)) : (var_6))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)-72)))));
        *var_22 = ((/* implicit */val<unsigned char>) var_6);
    }

    *var_23 = ((/* implicit */val<signed char>) max((*var_23), (((val<signed char>) ((max((((/* implicit */val<unsigned int>) var_16)), (var_15))) >= (((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) var_5))))))))));
    *var_24 ^= var_8;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1137669504U;
unsigned int var_4 = 3327954703U;
bool var_5 = (bool)0;
unsigned long long int var_6 = 8803643311321466734ULL;
unsigned char var_8 = (unsigned char)172;
bool var_11 = (bool)0;
unsigned int var_15 = 3476358281U;
unsigned char var_16 = (unsigned char)253;
int zero = 0;
bool var_17 = (bool)0;
bool var_18 = (bool)1;
bool var_19 = (bool)0;
unsigned int var_20 = 2423473813U;
signed char var_21 = (signed char)-74;
unsigned char var_22 = (unsigned char)123;
signed char var_23 = (signed char)30;
unsigned char var_24 = (unsigned char)126;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != (bool)0;
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != 2423473813U;
    value_mismatch |= var_21 != (signed char)-72;
    value_mismatch |= var_22 != (unsigned char)110;
    value_mismatch |= var_23 != (signed char)30;
    value_mismatch |= var_24 != (unsigned char)210;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_5, var_6, var_8, var_11, var_15, var_16, zero, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
  assert(!value_mismatch);
}
