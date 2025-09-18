/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7227
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7227
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
void test(val<unsigned long long int> var_1, val<unsigned char> var_5, val<int> zero, val<unsigned char*> var_15, val<short*> var_16, val<int*> var_17) {
    *var_15 = ((/* implicit */val<unsigned char>) var_1);
    *var_16 = ((/* implicit */val<short>) var_5);
    *var_17 = ((/* implicit */val<int>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15583390457123680758ULL;
unsigned char var_5 = (unsigned char)178;
int zero = 0;
unsigned char var_15 = (unsigned char)28;
short var_16 = (short)1951;
int var_17 = -1792874924;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned char)246;
    value_mismatch |= var_16 != (short)178;
    value_mismatch |= var_17 != 178;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, zero, &var_15, &var_16, &var_17);
  checksum();
}
