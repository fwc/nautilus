/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8838
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8838
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
void test(val<int> var_1, val<unsigned int> var_2, val<int> var_8, val<unsigned short> var_10, val<unsigned long long int> var_13, val<short> var_14, val<unsigned int> var_15, val<long long int> var_16, val<int> zero, val<signed char*> var_18, val<unsigned long long int*> var_19, val<unsigned short*> var_20) {
    *var_18 = ((/* implicit */val<signed char>) (-(var_1)));
    *var_19 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_15)) ? (max((max((((/* implicit */val<long long int>) var_2)), (var_16))), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_8)) && (((/* implicit */val<bool>) 781337567))))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_14)))));
    *var_20 = ((/* implicit */val<unsigned short>) min((var_13), (((/* implicit */val<unsigned long long int>) max(((-(((/* implicit */val<int>) (val<short>)15364)))), (((/* implicit */val<int>) var_10)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1420501826;
unsigned int var_2 = 1224475334U;
int var_8 = -500649605;
unsigned short var_10 = (unsigned short)43546;
unsigned long long int var_13 = 12788030713330565821ULL;
short var_14 = (short)18969;
unsigned int var_15 = 123642433U;
long long int var_16 = -3477215884514668712LL;
int zero = 0;
signed char var_18 = (signed char)116;
unsigned long long int var_19 = 11762079449395283755ULL;
unsigned short var_20 = (unsigned short)31446;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)-66;
    value_mismatch |= var_19 != 1224475334ULL;
    value_mismatch |= var_20 != (unsigned short)43546;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_8, var_10, var_13, var_14, var_15, var_16, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
