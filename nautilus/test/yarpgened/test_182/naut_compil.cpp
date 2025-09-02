/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 182
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=182
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
void test(val<unsigned char> var_0, val<signed char> var_2, val<unsigned short> var_3, val<unsigned short> var_5, val<unsigned short> var_6, val<signed char> var_8, val<unsigned int> var_10, val<int> zero, val<unsigned int*> var_11, val<unsigned short*> var_12, val<unsigned char*> var_13) {
    *var_11 = ((/* implicit */val<unsigned int>) min((*var_11), (((/* implicit */val<unsigned int>) var_3))));
    *var_12 = ((/* implicit */val<unsigned short>) max((((/* implicit */val<int>) var_0)), (max((((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) var_2)))), (((/* implicit */val<int>) var_8))))));
    *var_13 = ((/* implicit */val<unsigned char>) min((((/* implicit */val<unsigned long long int>) max((max((var_6), (var_3))), (var_6)))), (4871492230241508894ULL)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)27;
signed char var_2 = (signed char)-16;
unsigned short var_3 = (unsigned short)7499;
unsigned short var_5 = (unsigned short)30562;
unsigned short var_6 = (unsigned short)843;
signed char var_8 = (signed char)-121;
unsigned int var_10 = 1923534047U;
int zero = 0;
unsigned int var_11 = 3653587070U;
unsigned short var_12 = (unsigned short)58515;
unsigned char var_13 = (unsigned char)235;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 7499U;
    value_mismatch |= var_12 != (unsigned short)30562;
    value_mismatch |= var_13 != (unsigned char)75;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_5, var_6, var_8, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
