/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9150
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9150
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
void test(val<short> var_0, val<long long int> var_2, val<unsigned char> var_8, val<unsigned char> var_14, val<short> var_15, val<unsigned long long int> var_16, val<unsigned short> var_17, val<int> zero, val<unsigned char*> var_19, val<int*> var_20, val<bool*> var_21, val<unsigned char*> var_22, val<unsigned char*> var_23, val<short*> var_24, val<int*> var_25) {
    *var_19 = ((/* implicit */val<unsigned char>) min((*var_19), (((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) max((((((/* implicit */val<bool>) var_17)) ? (((/* implicit */val<int>) (val<unsigned char>)170)) : (((/* implicit */val<int>) (val<unsigned short>)0)))), (((/* implicit */val<int>) max((((/* implicit */val<short>) (val<unsigned char>)14)), (var_15))))))))))));
    *var_20 = ((/* implicit */val<int>) ((((18446744073709551615ULL) * (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) (val<unsigned char>)53)) <= (((/* implicit */val<int>) (val<unsigned char>)51)))))))) >> (((/* implicit */val<int>) ((var_2) <= (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_8))))))));
    if (((/* implicit */val<bool>) var_8))
    {
        *var_21 = ((/* implicit */val<bool>) max((*var_21), (((/* implicit */val<bool>) var_0))));
        *var_22 = ((/* implicit */val<unsigned char>) var_16);
        *var_23 = ((/* implicit */val<unsigned char>) max((*var_23), (var_14)));
        *var_24 = ((/* implicit */val<short>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) (-(((/* implicit */val<int>) (val<unsigned char>)27))))) ? (((((/* implicit */val<int>) (val<unsigned short>)0)) >> (((/* implicit */val<int>) (val<unsigned short>)0)))) : (((/* implicit */val<int>) (val<unsigned char>)31)))))));
    }

    *var_25 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) (-(((/* implicit */val<int>) (val<unsigned char>)19))))) ? (max((max((((/* implicit */val<unsigned int>) (val<unsigned char>)131)), (255U))), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) -8462905529239587667LL)) ? (((/* implicit */val<int>) (val<unsigned short>)65512)) : (((/* implicit */val<int>) (val<unsigned char>)224))))))) : (((((/* implicit */val<bool>) (val<short>)27179)) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) (val<unsigned char>)204)) : (((/* implicit */val<int>) (val<unsigned short>)65535))))) : (4294967040U)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12430;
long long int var_2 = 17737667117532273LL;
unsigned char var_8 = (unsigned char)79;
unsigned char var_14 = (unsigned char)46;
short var_15 = (short)7800;
unsigned long long int var_16 = 6279248277185097571ULL;
unsigned short var_17 = (unsigned short)27373;
int zero = 0;
unsigned char var_19 = (unsigned char)189;
int var_20 = 260520;
bool var_21 = (bool)1;
unsigned char var_22 = (unsigned char)236;
unsigned char var_23 = (unsigned char)15;
short var_24 = (short)-12;
int var_25 = -1204575536;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)0;
    value_mismatch |= var_20 != 0;
    value_mismatch |= var_21 != (bool)1;
    value_mismatch |= var_22 != (unsigned char)99;
    value_mismatch |= var_23 != (unsigned char)46;
    value_mismatch |= var_24 != (short)1;
    value_mismatch |= var_25 != 65512;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_8, var_14, var_15, var_16, var_17, zero, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25);
  checksum();
  assert(!value_mismatch);
}
