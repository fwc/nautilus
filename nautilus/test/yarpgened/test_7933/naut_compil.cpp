/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7933
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7933
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
void test(val<short> var_12, val<int> zero, val<signed char*> var_16, val<short*> var_17) {
    *var_16 = ((/* implicit */val<signed char>) (val<short>)-6707);
    *var_17 *= var_12;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_12 = (short)-4049;
int zero = 0;
signed char var_16 = (signed char)-12;
short var_17 = (short)-28464;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (signed char)-51;
    value_mismatch |= var_17 != (short)-27088;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_12, zero, &var_16, &var_17);
  checksum();
}
