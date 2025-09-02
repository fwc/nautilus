/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2299
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2299
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
void test(val<unsigned short> var_2, val<unsigned char> var_7, val<unsigned long long int> var_8, val<short> var_9, val<unsigned long long int> var_11, val<short> var_12, val<short> var_13, val<signed char> var_16, val<int> zero, val<bool*> var_18, val<signed char*> var_19, val<unsigned short*> var_20, val<short*> var_21, val<unsigned int*> var_22, val<signed char*> var_23, val<unsigned int*> var_24, val<short*> var_25) {
    if (((/* implicit */val<bool>) (val<signed char>)-126))
    {
        *var_18 += ((/* implicit */val<bool>) min((var_16), (var_16)));
        *var_19 = ((/* implicit */val<signed char>) min((*var_19), (((/* implicit */val<signed char>) ((((/* implicit */val<bool>) min((min((1406542943), (((/* implicit */val<int>) var_2)))), (((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) (val<short>)-8845))))))) ? (var_8) : (var_11))))));
    }
    else
    {
        *var_20 += ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) var_13)) : (((((/* implicit */val<int>) (val<signed char>)97)) << (((((/* implicit */val<int>) (val<short>)15333)) - (15311)))))));
        *var_21 = ((/* implicit */val<short>) max((*var_21), (((/* implicit */val<short>) min((175893277623076426LL), (((/* implicit */val<long long int>) var_7)))))));
        *var_22 += ((/* implicit */val<unsigned int>) var_16);
        *var_23 = ((/* implicit */val<signed char>) max((*var_23), (((/* implicit */val<signed char>) (val<short>)15333))));
    }

    *var_24 = ((/* implicit */val<unsigned int>) max((*var_24), (((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) var_9)))))));
    *var_25 |= var_12;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)3725;
unsigned char var_7 = (unsigned char)192;
unsigned long long int var_8 = 14650727505182298242ULL;
short var_9 = (short)-26442;
unsigned long long int var_11 = 654086068573192476ULL;
short var_12 = (short)24042;
short var_13 = (short)-9625;
signed char var_16 = (signed char)-113;
int zero = 0;
bool var_18 = (bool)0;
signed char var_19 = (signed char)-109;
unsigned short var_20 = (unsigned short)7442;
short var_21 = (short)-9960;
unsigned int var_22 = 3891895666U;
signed char var_23 = (signed char)96;
unsigned int var_24 = 2770332160U;
short var_25 = (short)28928;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != (signed char)-126;
    value_mismatch |= var_20 != (unsigned short)7442;
    value_mismatch |= var_21 != (short)-9960;
    value_mismatch |= var_22 != 3891895666U;
    value_mismatch |= var_23 != (signed char)96;
    value_mismatch |= var_24 != 2770332160U;
    value_mismatch |= var_25 != (short)32234;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_7, var_8, var_9, var_11, var_12, var_13, var_16, zero, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25);
  checksum();
  assert(!value_mismatch);
}
