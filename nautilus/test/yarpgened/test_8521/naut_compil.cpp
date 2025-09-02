/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8521
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8521
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
void test(val<long long int> var_3, val<int> zero, val<signed char*> var_19, val<int*> var_20) {
    *var_19 ^= ((/* implicit */val<signed char>) ((val<long long int>) (~(((/* implicit */val<int>) (val<unsigned short>)6129)))));
    *var_20 = ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_3))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5212470059933477281LL;
int zero = 0;
signed char var_19 = (signed char)119;
int var_20 = -466548260;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)121;
    value_mismatch |= var_20 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
