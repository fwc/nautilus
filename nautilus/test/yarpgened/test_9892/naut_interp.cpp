/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9892
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9892
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
void test(val<short> var_17, val<int> zero, val<signed char*> var_18, val<short*> var_19) {
    *var_18 = ((/* implicit */val<signed char>) var_17);
    *var_19 = ((/* implicit */val<short>) 357863211744138894LL);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_17 = (short)-656;
int zero = 0;
signed char var_18 = (signed char)47;
short var_19 = (short)-27497;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)112;
    value_mismatch |= var_19 != (short)-26994;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_17, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
