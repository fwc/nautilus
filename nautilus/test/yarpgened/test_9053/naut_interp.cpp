/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9053
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9053
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
void test(val<short> var_10, val<short> var_13, val<int> zero, val<long long int*> var_14, val<int*> var_15, val<signed char*> var_16) {
    *var_14 = ((/* implicit */val<long long int>) (val<signed char>)-1);
    *var_15 -= ((/* implicit */val<int>) ((((/* implicit */val<int>) var_10)) == (((/* implicit */val<int>) var_13))));
    *var_16 = ((/* implicit */val<signed char>) (val<unsigned char>)21);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_10 = (short)-12923;
short var_13 = (short)-28263;
int zero = 0;
long long int var_14 = -1693500277354407650LL;
int var_15 = 1104713188;
signed char var_16 = (signed char)96;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != -1LL;
    value_mismatch |= var_15 != 1104713188;
    value_mismatch |= var_16 != (signed char)21;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_10, var_13, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
