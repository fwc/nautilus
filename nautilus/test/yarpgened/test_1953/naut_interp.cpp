/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1953
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1953
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
void test(val<short> var_0, val<int> zero, val<short*> var_10, val<long long int*> var_11) {
    *var_10 ^= var_0;
    *var_11 = ((/* implicit */val<long long int>) (val<signed char>)97);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12260;
int zero = 0;
short var_10 = (short)-2561;
long long int var_11 = 8882151723729539142LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)-9701;
    value_mismatch |= var_11 != 97LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
