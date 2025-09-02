/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4826
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4826
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
void test(val<short> var_6, val<int> var_11, val<int> var_12, val<int> zero, val<long long int*> var_13, val<bool*> var_14) {
    *var_13 = ((/* implicit */val<long long int>) max(((val<short>)-13550), ((val<short>)2653)));
    *var_14 = ((/* implicit */val<bool>) (-(((((((/* implicit */val<bool>) var_11)) ? (2007864925) : (var_12))) - (((/* implicit */val<int>) var_6))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)28967;
int var_11 = 1825676040;
int var_12 = 1555261136;
int zero = 0;
long long int var_13 = -2247429255672146803LL;
bool var_14 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 2653LL;
    value_mismatch |= var_14 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_11, var_12, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
