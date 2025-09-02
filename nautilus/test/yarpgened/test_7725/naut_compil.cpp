/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7725
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7725
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
void test(val<short> var_7, val<int> zero, val<unsigned long long int*> var_15, val<short*> var_16) {
    *var_15 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) (val<bool>)1)) == (((/* implicit */val<int>) (!(((((/* implicit */val<int>) (val<unsigned short>)7)) >= (((/* implicit */val<int>) (val<bool>)1)))))))));
    *var_16 &= var_7;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)15444;
int zero = 0;
unsigned long long int var_15 = 5490878918776401433ULL;
short var_16 = (short)-28059;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 0ULL;
    value_mismatch |= var_16 != (short)4164;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
