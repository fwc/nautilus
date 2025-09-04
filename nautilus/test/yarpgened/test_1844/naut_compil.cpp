/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1844
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1844
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
void test(val<signed char> var_5, val<long long int> var_7, val<unsigned char> var_10, val<int> zero, val<unsigned char*> var_15, val<int*> var_16) {
    *var_15 -= ((/* implicit */val<unsigned char>) ((val<signed char>) ((((/* implicit */val<long long int>) ((val<int>) var_10))) % (var_7))));
    *var_16 -= ((/* implicit */val<int>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-30;
long long int var_7 = -8711353177904156929LL;
unsigned char var_10 = (unsigned char)134;
int zero = 0;
unsigned char var_15 = (unsigned char)3;
int var_16 = 1484188961;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned char)125;
    value_mismatch |= var_16 != 1484188991;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_7, var_10, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
