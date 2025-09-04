/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4077
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4077
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
void test(val<unsigned char> var_2, val<int> zero, val<long long int*> var_16, val<signed char*> var_17) {
    *var_16 = ((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) 8878059892878225666LL))));
    *var_17 += ((/* implicit */val<signed char>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)179;
int zero = 0;
long long int var_16 = 8520655217627970218LL;
signed char var_17 = (signed char)-46;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 0LL;
    value_mismatch |= var_17 != (signed char)-123;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
