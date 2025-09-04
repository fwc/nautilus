/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5971
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5971
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
void test(val<unsigned int> var_0, val<unsigned short> var_1, val<int> var_2, val<unsigned short> var_4, val<int> var_5, val<unsigned long long int> var_10, val<int> zero, val<unsigned short*> var_12, val<unsigned int*> var_13, val<int*> var_14) {
    *var_12 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<unsigned int>) max((min((((/* implicit */val<int>) var_1)), (var_2))), ((+(var_2)))))) % (((((/* implicit */val<bool>) max((var_10), (((/* implicit */val<unsigned long long int>) var_1))))) ? (((((/* implicit */val<bool>) var_5)) ? (var_0) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_1))))) : (((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) (val<unsigned char>)203)))))))));
    *var_13 = ((/* implicit */val<unsigned int>) var_4);
    *var_14 = ((/* implicit */val<int>) max(((val<unsigned char>)5), ((val<unsigned char>)24)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 94224806U;
unsigned short var_1 = (unsigned short)30731;
int var_2 = -1951584481;
unsigned short var_4 = (unsigned short)65129;
int var_5 = -537352797;
unsigned long long int var_10 = 8290225743994930018ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)28035;
unsigned int var_13 = 2921695498U;
int var_14 = -1386355013;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)1935;
    value_mismatch |= var_13 != 65129U;
    value_mismatch |= var_14 != 24;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_5, var_10, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
