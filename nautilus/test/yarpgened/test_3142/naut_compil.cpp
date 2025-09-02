/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3142
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3142
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
void test(val<unsigned int> var_0, val<unsigned long long int> var_7, val<unsigned char> var_11, val<int> zero, val<unsigned char*> var_13, val<int*> var_14) {
    *var_13 = ((/* implicit */val<unsigned char>) min((var_7), (((/* implicit */val<unsigned long long int>) var_0))));
    *var_14 = ((/* implicit */val<int>) var_11);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4292893065U;
unsigned long long int var_7 = 10712360370462012305ULL;
unsigned char var_11 = (unsigned char)23;
int zero = 0;
unsigned char var_13 = (unsigned char)32;
int var_14 = -1595638359;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned char)137;
    value_mismatch |= var_14 != 23;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_7, var_11, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
