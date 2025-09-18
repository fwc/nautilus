/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9040
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9040
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
void test(val<signed char> var_6, val<int> zero, val<signed char*> var_15, val<int*> var_16) {
    *var_15 = ((/* implicit */val<signed char>) ((val<unsigned char>) ((((/* implicit */val<int>) ((val<short>) 0ULL))) & (((/* implicit */val<int>) var_6)))));
    *var_16 = ((/* implicit */val<int>) (-(0ULL)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-112;
int zero = 0;
signed char var_15 = (signed char)-99;
int var_16 = 1586747823;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)0;
    value_mismatch |= var_16 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, zero, &var_15, &var_16);
  checksum();
}
