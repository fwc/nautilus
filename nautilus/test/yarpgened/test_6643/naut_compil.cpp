/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6643
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6643
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
void test(val<signed char> var_1, val<short> var_10, val<int> zero, val<signed char*> var_20, val<signed char*> var_21) {
    *var_20 = ((/* implicit */val<signed char>) var_10);
    *var_21 = ((/* implicit */val<signed char>) (-(((/* implicit */val<int>) var_1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-121;
short var_10 = (short)23256;
int zero = 0;
signed char var_20 = (signed char)-59;
signed char var_21 = (signed char)8;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (signed char)-40;
    value_mismatch |= var_21 != (signed char)121;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_10, zero, &var_20, &var_21);
  checksum();
}
