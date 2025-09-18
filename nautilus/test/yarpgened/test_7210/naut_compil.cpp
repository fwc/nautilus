/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7210
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7210
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
void test(val<unsigned int> var_0, val<unsigned short> var_1, val<unsigned short> var_2, val<unsigned short> var_5, val<int> zero, val<bool*> var_10, val<unsigned int*> var_11, val<unsigned int*> var_12, val<signed char*> var_13) {
    *var_10 = ((/* implicit */val<bool>) max((((((/* implicit */val<bool>) var_2)) ? (1827867771U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5))))), (((/* implicit */val<unsigned int>) ((val<signed char>) var_1)))));
    *var_11 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) max((4179520794U), (1523915280U)))) ? (((val<unsigned int>) var_0)) : (115446490U)))) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) var_5))));
    *var_12 = var_0;
    *var_13 = ((/* implicit */val<signed char>) max((((val<short>) ((((/* implicit */val<bool>) (val<unsigned char>)190)) ? (8064U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1)))))), ((val<short>)-32762)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 408158566U;
unsigned short var_1 = (unsigned short)36558;
unsigned short var_2 = (unsigned short)58872;
unsigned short var_5 = (unsigned short)42909;
int zero = 0;
bool var_10 = (bool)1;
unsigned int var_11 = 3672048008U;
unsigned int var_12 = 1448751121U;
signed char var_13 = (signed char)111;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (bool)1;
    value_mismatch |= var_11 != 58872U;
    value_mismatch |= var_12 != 408158566U;
    value_mismatch |= var_13 != (signed char)(-127 - 1);
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_5, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
}
