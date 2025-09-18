/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1680
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1680
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
void test(val<long long int> var_1, val<unsigned int> var_3, val<signed char> var_4, val<signed char> var_5, val<unsigned int> var_7, val<signed char> var_8, val<unsigned int> var_9, val<int> zero, val<signed char*> var_10, val<long long int*> var_11) {
    *var_10 = ((/* implicit */val<signed char>) max((*var_10), (((/* implicit */val<signed char>) max((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<signed char>)-15)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4))) : (var_3)))) ? (max((((/* implicit */val<unsigned int>) var_5)), (var_3))) : (((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5))) : (var_9))))), (((/* implicit */val<unsigned int>) ((max((2803744819838065109LL), (-2803744819838065109LL))) >= (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (val<short>)-20184)) ? (((/* implicit */val<int>) (val<short>)24143)) : (((/* implicit */val<int>) (val<short>)-24143)))))))))))));
    *var_11 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) var_8))))) ? (((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4))) : (var_1))) : (((/* implicit */val<long long int>) (+(((/* implicit */val<int>) (val<signed char>)-63)))))))) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) ((((((/* implicit */val<bool>) 2681513812U)) ? (((/* implicit */val<long long int>) 1816394149U)) : (2803744819838065109LL))) == (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (val<short>)24142)) ? (((/* implicit */val<int>) (val<short>)16383)) : (-738265801)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1649295341339126782LL;
unsigned int var_3 = 2237972082U;
signed char var_4 = (signed char)-127;
signed char var_5 = (signed char)-7;
unsigned int var_7 = 1247280600U;
signed char var_8 = (signed char)102;
unsigned int var_9 = 2221492626U;
int zero = 0;
signed char var_10 = (signed char)72;
long long int var_11 = 2466063384742362285LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (signed char)72;
    value_mismatch |= var_11 != 1LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_5, var_7, var_8, var_9, zero, &var_10, &var_11);
  checksum();
}
