/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5743
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5743
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
void test(val<unsigned char> var_2, val<unsigned long long int> var_6, val<unsigned long long int> var_7, val<bool> var_8, val<unsigned short> var_10, val<unsigned int> var_11, val<unsigned long long int> var_13, val<long long int> var_15, val<int> zero, val<bool*> var_16, val<short*> var_17, val<long long int*> var_18, val<bool*> var_19) {
    *var_16 = ((/* implicit */val<bool>) max((min((((/* implicit */val<unsigned long long int>) var_8)), (max((var_6), (((/* implicit */val<unsigned long long int>) var_2)))))), (((/* implicit */val<unsigned long long int>) max((((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) var_10))))), (var_11))))));
    *var_17 &= ((/* implicit */val<short>) min((var_13), (((/* implicit */val<unsigned long long int>) var_15))));
    *var_18 = ((/* implicit */val<long long int>) max((var_7), (((/* implicit */val<unsigned long long int>) var_15))));
    *var_19 -= var_8;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)16;
unsigned long long int var_6 = 4092533955566418176ULL;
unsigned long long int var_7 = 1999138962529492297ULL;
bool var_8 = (bool)0;
unsigned short var_10 = (unsigned short)48880;
unsigned int var_11 = 3579378302U;
unsigned long long int var_13 = 15930116707088287044ULL;
long long int var_15 = -6858810954850154095LL;
int zero = 0;
bool var_16 = (bool)1;
short var_17 = (short)-17570;
long long int var_18 = -2490977965817569972LL;
bool var_19 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != (short)2320;
    value_mismatch |= var_18 != -6858810954850154095LL;
    value_mismatch |= var_19 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_6, var_7, var_8, var_10, var_11, var_13, var_15, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
