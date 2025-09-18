/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6069
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6069
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
void test(val<short> var_8, val<signed char> var_9, val<int> var_11, val<int> zero, val<signed char*> var_15, val<unsigned char*> var_16) {
    *var_15 ^= ((/* implicit */val<signed char>) max((((/* implicit */val<short>) var_9)), (var_8)));
    *var_16 = ((/* implicit */val<unsigned char>) var_11);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)12272;
signed char var_9 = (signed char)5;
int var_11 = -380028648;
int zero = 0;
signed char var_15 = (signed char)12;
unsigned char var_16 = (unsigned char)138;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)-4;
    value_mismatch |= var_16 != (unsigned char)24;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_9, var_11, zero, &var_15, &var_16);
  checksum();
}
