/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4758
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4758
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
void test(val<short> var_7, val<int> zero, val<unsigned char*> var_10, val<unsigned char*> var_11) {
    *var_10 ^= ((/* implicit */val<unsigned char>) var_7);
    *var_11 = ((/* implicit */val<unsigned char>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-24125;
int zero = 0;
unsigned char var_10 = (unsigned char)222;
unsigned char var_11 = (unsigned char)22;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned char)29;
    value_mismatch |= var_11 != (unsigned char)195;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, zero, &var_10, &var_11);
  checksum();
}
