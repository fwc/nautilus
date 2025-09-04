/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6371
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6371
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
void test(val<short> var_4, val<signed char> var_8, val<int> zero, val<unsigned char*> var_10, val<unsigned int*> var_11) {
    *var_10 = ((/* implicit */val<unsigned char>) var_4);
    *var_11 = ((/* implicit */val<unsigned int>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-15986;
signed char var_8 = (signed char)89;
int zero = 0;
unsigned char var_10 = (unsigned char)44;
unsigned int var_11 = 3322116027U;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned char)142;
    value_mismatch |= var_11 != 89U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_8, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
