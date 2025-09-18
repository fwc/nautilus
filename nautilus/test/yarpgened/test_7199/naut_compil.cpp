/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7199
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7199
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
void test(val<unsigned long long int> var_15, val<int> zero, val<unsigned long long int*> var_19, val<signed char*> var_20) {
    *var_19 = var_15;
    *var_20 = ((/* implicit */val<signed char>) max((*var_20), (((/* implicit */val<signed char>) ((((/* implicit */val<int>) (val<signed char>)124)) << (((((-5839399912360592368LL) + (5839399912360592395LL))) - (19LL))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_15 = 18120133613897288285ULL;
int zero = 0;
unsigned long long int var_19 = 733023574605385320ULL;
signed char var_20 = (signed char)-55;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 18120133613897288285ULL;
    value_mismatch |= var_20 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_15, zero, &var_19, &var_20);
  checksum();
}
