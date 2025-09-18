/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2724
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2724
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
void test(val<int> var_0, val<signed char> var_3, val<bool> var_6, val<short> var_11, val<unsigned short> var_13, val<signed char> var_17, val<int> zero, val<unsigned long long int*> var_20, val<unsigned short*> var_21, val<unsigned long long int*> var_22, val<unsigned int*> var_23) {
    *var_20 = ((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) var_11))));
    *var_21 = ((/* implicit */val<unsigned short>) var_6);
    *var_22 = ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<bool>) ((((/* implicit */val<bool>) 965437337U)) ? (((/* implicit */val<int>) var_17)) : (var_0)))))) : (((((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_17))) : (9ULL))) & (((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) var_13))))))));
    *var_23 = ((/* implicit */val<unsigned int>) var_13);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1873529559;
signed char var_3 = (signed char)-20;
bool var_6 = (bool)1;
short var_11 = (short)-27508;
unsigned short var_13 = (unsigned short)15456;
signed char var_17 = (signed char)-10;
int zero = 0;
unsigned long long int var_20 = 15353003344707771995ULL;
unsigned short var_21 = (unsigned short)54941;
unsigned long long int var_22 = 3601360520086779632ULL;
unsigned int var_23 = 1937811841U;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 27507ULL;
    value_mismatch |= var_21 != (unsigned short)1;
    value_mismatch |= var_22 != 1ULL;
    value_mismatch |= var_23 != 15456U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_6, var_11, var_13, var_17, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
}
