/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2138
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2138
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
void test(val<bool> var_4, val<unsigned int> var_7, val<bool> var_8, val<int> var_9, val<int> var_12, val<long long int> var_13, val<unsigned char> var_15, val<unsigned short> var_19, val<int> zero, val<unsigned int*> var_20, val<unsigned int*> var_21, val<unsigned long long int*> var_22, val<int*> var_23, val<unsigned char*> var_24, val<signed char*> var_25) {
    *var_20 = ((/* implicit */val<unsigned int>) max((((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) var_19)) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<signed char>)-13)) && (((/* implicit */val<bool>) var_15))))))), (((/* implicit */val<int>) ((val<short>) (!(((/* implicit */val<bool>) -2716702818923829798LL))))))));
    if ((val<bool>)1)
    {
        *var_21 = ((/* implicit */val<unsigned int>) var_13);
        *var_22 = ((/* implicit */val<unsigned long long int>) min((min((((/* implicit */val<unsigned int>) var_4)), (var_7))), (((/* implicit */val<unsigned int>) ((val<unsigned short>) -2716702818923829798LL)))));
        *var_23 = var_12;
    }

    *var_24 = ((val<unsigned char>) (val<unsigned char>)226);
    *var_25 = ((/* implicit */val<signed char>) (-(((val<unsigned long long int>) (~(((/* implicit */val<int>) var_8)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_4 = (bool)1;
unsigned int var_7 = 1124993795U;
bool var_8 = (bool)0;
int var_9 = -324472105;
int var_12 = 1306267587;
long long int var_13 = -1749167752233318757LL;
unsigned char var_15 = (unsigned char)146;
unsigned short var_19 = (unsigned short)35735;
int zero = 0;
unsigned int var_20 = 4130969142U;
unsigned int var_21 = 58121431U;
unsigned long long int var_22 = 11024463889890238635ULL;
int var_23 = -1830197170;
unsigned char var_24 = (unsigned char)78;
signed char var_25 = (signed char)48;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 35735U;
    value_mismatch |= var_21 != 1670416027U;
    value_mismatch |= var_22 != 1ULL;
    value_mismatch |= var_23 != 1306267587;
    value_mismatch |= var_24 != (unsigned char)226;
    value_mismatch |= var_25 != (signed char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_7, var_8, var_9, var_12, var_13, var_15, var_19, zero, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25);
  checksum();
}
