/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9458
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9458
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
void test(val<short> var_12, val<unsigned long long int> var_14, val<bool> var_18, val<int> zero, val<bool*> var_19, val<int*> var_20, val<unsigned short*> var_21) {
    *var_19 = ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_18))) > (var_14));
    *var_20 = ((/* implicit */val<int>) (!(((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_12)))))));
    *var_21 = ((/* implicit */val<unsigned short>) var_18);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_12 = (short)-7150;
unsigned long long int var_14 = 10283341970463774304ULL;
bool var_18 = (bool)1;
int zero = 0;
bool var_19 = (bool)0;
int var_20 = -1607755998;
unsigned short var_21 = (unsigned short)33317;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (bool)0;
    value_mismatch |= var_20 != 0;
    value_mismatch |= var_21 != (unsigned short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_12, var_14, var_18, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
