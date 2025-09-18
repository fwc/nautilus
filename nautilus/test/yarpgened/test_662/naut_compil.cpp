/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 662
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=662
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
void test(val<short> var_0, val<short> var_10, val<int> zero, val<signed char*> var_14, val<short*> var_15) {
    *var_14 = ((/* implicit */val<signed char>) (!((!(((/* implicit */val<bool>) var_10))))));
    *var_15 = ((/* implicit */val<short>) max((((/* implicit */val<unsigned long long int>) ((((((val<int>) (val<short>)-20666)) + (2147483647))) << ((((~(-8821611530635477361LL))) - (8821611530635477360LL)))))), (max((((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) var_0))))), (((((/* implicit */val<bool>) 11961771164226526307ULL)) ? (18446744073709551612ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)114)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10105;
short var_10 = (short)-21787;
int zero = 0;
signed char var_14 = (signed char)33;
short var_15 = (short)30030;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (signed char)1;
    value_mismatch |= var_15 != (short)-4;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_10, zero, &var_14, &var_15);
  checksum();
}
