/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9707
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9707
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
void test(val<bool> var_1, val<signed char> var_2, val<unsigned char> var_3, val<unsigned char> var_5, val<unsigned short> var_6, val<unsigned short> var_7, val<unsigned short> var_10, val<unsigned int> var_12, val<int> zero, val<int*> var_14, val<unsigned char*> var_15, val<short*> var_16) {
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_7)) ? (((((/* implicit */val<bool>) (val<unsigned char>)39)) ? (((/* implicit */val<int>) (val<signed char>)-22)) : (((/* implicit */val<int>) var_5)))) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_6)) && (((/* implicit */val<bool>) var_2)))))))) ? (((var_1) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_10))) : (min((-8545636297586728264LL), (((/* implicit */val<long long int>) var_1)))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<signed char>) min((((/* implicit */val<unsigned int>) var_1)), (var_12)))))))))
    {
        *var_14 = ((/* implicit */val<int>) (~(var_12)));
        *var_15 = ((/* implicit */val<unsigned char>) min((*var_15), (min((((/* implicit */val<unsigned char>) (val<bool>)1)), ((val<unsigned char>)137)))));
    }

    *var_16 = ((/* implicit */val<short>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)0;
signed char var_2 = (signed char)-17;
unsigned char var_3 = (unsigned char)1;
unsigned char var_5 = (unsigned char)249;
unsigned short var_6 = (unsigned short)33631;
unsigned short var_7 = (unsigned short)21667;
unsigned short var_10 = (unsigned short)28455;
unsigned int var_12 = 2565622614U;
int zero = 0;
int var_14 = -283196266;
unsigned char var_15 = (unsigned char)48;
short var_16 = (short)31368;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 1729344681;
    value_mismatch |= var_15 != (unsigned char)1;
    value_mismatch |= var_16 != (short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_5, var_6, var_7, var_10, var_12, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
