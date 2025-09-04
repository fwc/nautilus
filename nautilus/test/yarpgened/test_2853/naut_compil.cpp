/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2853
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2853
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
void test(val<unsigned int> var_0, val<unsigned char> var_1, val<unsigned int> var_3, val<signed char> var_8, val<int> zero, val<unsigned int*> var_10, val<short*> var_11) {
    *var_10 = ((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) ((max((((/* implicit */val<unsigned long long int>) 2209626882543850718LL)), (9831164262978472098ULL))) < (((/* implicit */val<unsigned long long int>) var_3)))))));
    *var_11 &= ((/* implicit */val<short>) min((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_1)) ? (var_0) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_8)))))) ? (((((/* implicit */val<bool>) 1678819795)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)-32755))) : (2932715970U))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<short>)32752)) && (((/* implicit */val<bool>) 0ULL)))))))), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) 1362251315U)) ? (((/* implicit */val<int>) (val<unsigned char>)170)) : (((/* implicit */val<int>) (val<short>)-32745)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 821753728U;
unsigned char var_1 = (unsigned char)233;
unsigned int var_3 = 3876666354U;
signed char var_8 = (signed char)-10;
int zero = 0;
unsigned int var_10 = 1809594579U;
short var_11 = (short)-5987;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 0U;
    value_mismatch |= var_11 != (short)136;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_8, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
