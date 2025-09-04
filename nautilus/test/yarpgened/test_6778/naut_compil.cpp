/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6778
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6778
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
void test(val<long long int> var_3, val<signed char> var_4, val<unsigned char> var_6, val<long long int> var_11, val<int> zero, val<unsigned int*> var_14, val<short*> var_15) {
    *var_14 = ((/* implicit */val<unsigned int>) min((*var_14), (((/* implicit */val<unsigned int>) var_3))));
    *var_15 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_6)) ? (((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<long long int>) (~(0)))) : (var_11))) : (576864530898492171LL)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3355784987346324215LL;
signed char var_4 = (signed char)96;
unsigned char var_6 = (unsigned char)5;
long long int var_11 = 5547704562041193769LL;
int zero = 0;
unsigned int var_14 = 1389459764U;
short var_15 = (short)23354;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 1389459764U;
    value_mismatch |= var_15 != (short)-1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_6, var_11, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
