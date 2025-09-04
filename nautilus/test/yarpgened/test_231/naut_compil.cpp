/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 231
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=231
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
void test(val<unsigned long long int> var_2, val<short> var_10, val<int> zero, val<unsigned short*> var_16, val<unsigned long long int*> var_17) {
    *var_16 ^= ((/* implicit */val<unsigned short>) var_10);
    *var_17 = var_2;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3025466281895703858ULL;
short var_10 = (short)-25155;
int zero = 0;
unsigned short var_16 = (unsigned short)27827;
unsigned long long int var_17 = 7136537552955133349ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned short)61710;
    value_mismatch |= var_17 != 3025466281895703858ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_10, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
