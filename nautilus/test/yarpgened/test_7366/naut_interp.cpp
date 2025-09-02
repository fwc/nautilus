/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7366
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7366
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
void test(val<unsigned int> var_0, val<unsigned char> var_1, val<unsigned char> var_2, val<unsigned char> var_3, val<unsigned int> var_7, val<unsigned int> var_10, val<unsigned char> var_14, val<signed char> var_16, val<int> zero, val<unsigned int*> var_17, val<unsigned int*> var_18) {
    *var_17 = ((((((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) (val<short>)27556))))) < (max((var_10), (((/* implicit */val<unsigned int>) (val<unsigned char>)50)))))) ? (var_0) : (((/* implicit */val<unsigned int>) 808999068)));
    *var_18 = ((/* implicit */val<unsigned int>) max((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_2))))) ? (var_7) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) var_1)))))))), (((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_16))) / (((((/* implicit */val<bool>) (val<unsigned char>)255)) ? (-7135408144085037608LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)25)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1316030824U;
unsigned char var_1 = (unsigned char)1;
unsigned char var_2 = (unsigned char)74;
unsigned char var_3 = (unsigned char)216;
unsigned int var_7 = 2135956360U;
unsigned int var_10 = 809193806U;
unsigned char var_14 = (unsigned char)224;
signed char var_16 = (signed char)8;
int zero = 0;
unsigned int var_17 = 1201578426U;
unsigned int var_18 = 1861663783U;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 1316030824U;
    value_mismatch |= var_18 != 2135956360U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_7, var_10, var_14, var_16, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
