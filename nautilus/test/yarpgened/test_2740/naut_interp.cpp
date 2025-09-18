/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2740
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2740
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
void test(val<unsigned int> var_7, val<unsigned long long int> var_10, val<int> zero, val<unsigned char*> var_14, val<long long int*> var_15) {
    *var_14 = ((/* implicit */val<unsigned char>) var_10);
    *var_15 += ((/* implicit */val<long long int>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 2948408679U;
unsigned long long int var_10 = 1663936982060657981ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)22;
long long int var_15 = 1019520602918883178LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)61;
    value_mismatch |= var_15 != 1019520605867291857LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_10, zero, &var_14, &var_15);
  checksum();
}
