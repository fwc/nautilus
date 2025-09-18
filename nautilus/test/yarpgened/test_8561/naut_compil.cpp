/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8561
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8561
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
void test(val<short> var_0, val<unsigned short> var_2, val<int> var_7, val<unsigned char> var_11, val<int> zero, val<unsigned char*> var_16, val<int*> var_17, val<unsigned int*> var_18) {
    *var_16 = ((/* implicit */val<unsigned char>) min(((val<signed char>)-64), (((/* implicit */val<signed char>) (val<bool>)0))));
    *var_17 = (-(((((/* implicit */val<bool>) -17)) ? (((/* implicit */val<int>) ((val<unsigned short>) var_0))) : (var_7))));
    *var_18 = ((/* implicit */val<unsigned int>) max((*var_18), (max((((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) min((var_2), (((/* implicit */val<unsigned short>) (val<signed char>)-10)))))) ^ (min((441241474U), (((/* implicit */val<unsigned int>) (val<short>)-17804)))))), (((/* implicit */val<unsigned int>) ((val<signed char>) (!(((/* implicit */val<bool>) var_11))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18476;
unsigned short var_2 = (unsigned short)50644;
int var_7 = 501948896;
unsigned char var_11 = (unsigned char)16;
int zero = 0;
unsigned char var_16 = (unsigned char)42;
int var_17 = 1778935365;
unsigned int var_18 = 2428265612U;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned char)192;
    value_mismatch |= var_17 != -47060;
    value_mismatch |= var_18 != 2428265612U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_7, var_11, zero, &var_16, &var_17, &var_18);
  checksum();
}
