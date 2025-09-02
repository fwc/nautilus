/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9404
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9404
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
void test(val<unsigned int> var_0, val<unsigned char> var_1, val<short> var_4, val<signed char> var_8, val<signed char> var_13, val<unsigned char> var_15, val<int> zero, val<unsigned long long int*> var_19, val<short*> var_20, val<unsigned int*> var_21) {
    *var_19 = ((/* implicit */val<unsigned long long int>) min((*var_19), (((/* implicit */val<unsigned long long int>) var_13))));
    *var_20 = ((/* implicit */val<short>) ((((((/* implicit */val<bool>) min((-9223372036854775794LL), (((/* implicit */val<long long int>) var_8))))) ? (var_0) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_15))))) != (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_1)))));
    *var_21 = max((((/* implicit */val<unsigned int>) (+(((((/* implicit */val<bool>) (val<signed char>)-116)) ? (((/* implicit */val<int>) (val<signed char>)71)) : (((/* implicit */val<int>) var_4))))))), (((val<unsigned int>) var_8)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 321161348U;
unsigned char var_1 = (unsigned char)32;
short var_4 = (short)4772;
signed char var_8 = (signed char)121;
signed char var_13 = (signed char)-78;
unsigned char var_15 = (unsigned char)8;
int zero = 0;
unsigned long long int var_19 = 8437767903712556567ULL;
short var_20 = (short)-18740;
unsigned int var_21 = 3130326547U;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 8437767903712556567ULL;
    value_mismatch |= var_20 != (short)1;
    value_mismatch |= var_21 != 121U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_8, var_13, var_15, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
