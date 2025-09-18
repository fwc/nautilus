/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9901
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9901
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
void test(val<unsigned char> var_0, val<unsigned short> var_1, val<unsigned long long int> var_6, val<int> var_12, val<unsigned int> var_13, val<unsigned int> var_14, val<int> zero, val<unsigned short*> var_15, val<unsigned char*> var_16) {
    *var_15 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) max((var_13), (((/* implicit */val<unsigned int>) var_0))))) ? (((/* implicit */val<unsigned long long int>) var_12)) : (max((((/* implicit */val<unsigned long long int>) var_14)), (((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1))) : (var_6)))))));
    *var_16 = ((/* implicit */val<unsigned char>) var_13);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)16;
unsigned short var_1 = (unsigned short)52875;
unsigned long long int var_6 = 13752061887490135902ULL;
int var_12 = -2133432307;
unsigned int var_13 = 1993305762U;
unsigned int var_14 = 568630472U;
int zero = 0;
unsigned short var_15 = (unsigned short)5032;
unsigned char var_16 = (unsigned char)230;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned short)26637;
    value_mismatch |= var_16 != (unsigned char)162;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_6, var_12, var_13, var_14, zero, &var_15, &var_16);
  checksum();
}
