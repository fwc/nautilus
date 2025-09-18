/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8216
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8216
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
void test(val<unsigned short> var_2, val<long long int> var_3, val<unsigned int> var_4, val<long long int> var_5, val<long long int> var_6, val<unsigned long long int> var_8, val<short> var_17, val<int> zero, val<short*> var_18, val<unsigned int*> var_19, val<unsigned long long int*> var_20, val<unsigned int*> var_21) {
    *var_18 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) (val<unsigned char>)0)) ? (max((((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) (val<short>)-32754))))), ((~(var_4))))) : (((val<unsigned int>) ((((/* implicit */val<bool>) (val<short>)32754)) ? (((/* implicit */val<int>) (val<short>)-32759)) : (((/* implicit */val<int>) (val<signed char>)-101)))))));
    *var_19 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_17)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)125))) : (((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2))) : (((val<unsigned long long int>) var_5))))));
    *var_20 = ((/* implicit */val<unsigned long long int>) ((val<short>) min((((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) (val<bool>)0)) : (1073709056))), (((/* implicit */val<int>) min(((val<short>)32763), (((/* implicit */val<short>) (val<signed char>)-124))))))));
    *var_21 = ((/* implicit */val<unsigned int>) (+(var_6)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)57339;
long long int var_3 = -4982100596230855368LL;
unsigned int var_4 = 1408785324U;
long long int var_5 = 5088257375828317821LL;
long long int var_6 = -4852921848810701406LL;
unsigned long long int var_8 = 7715403733820117812ULL;
short var_17 = (short)6649;
int zero = 0;
short var_18 = (short)9928;
unsigned int var_19 = 1366950284U;
unsigned long long int var_20 = 11360453539559586985ULL;
unsigned int var_21 = 1393941778U;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)-32759;
    value_mismatch |= var_19 != 125U;
    value_mismatch |= var_20 != 18446744073709551492ULL;
    value_mismatch |= var_21 != 1458044322U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_5, var_6, var_8, var_17, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
}
