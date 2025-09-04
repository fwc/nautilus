/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9910
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9910
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
void test(val<signed char> var_1, val<short> var_2, val<short> var_3, val<unsigned int> var_4, val<short> var_5, val<unsigned int> var_8, val<int> zero, val<signed char*> var_11, val<signed char*> var_12, val<long long int*> var_13) {
    *var_11 = ((/* implicit */val<signed char>) var_4);
    *var_12 = ((/* implicit */val<signed char>) ((((((((/* implicit */val<bool>) var_1)) && (((/* implicit */val<bool>) 8754821672423532360ULL)))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_1))) : (3024002841U))) * (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3)))));
    *var_13 *= ((/* implicit */val<long long int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_2))) == (((((/* implicit */val<bool>) (val<unsigned short>)34429)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5))) : (((var_8) ^ (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-71;
short var_2 = (short)5000;
short var_3 = (short)13826;
unsigned int var_4 = 1785046065U;
short var_5 = (short)-21704;
unsigned int var_8 = 1363342412U;
int zero = 0;
signed char var_11 = (signed char)-52;
signed char var_12 = (signed char)65;
long long int var_13 = -6882760991592676428LL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (signed char)49;
    value_mismatch |= var_12 != (signed char)114;
    value_mismatch |= var_13 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_5, var_8, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
