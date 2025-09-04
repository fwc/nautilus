/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7683
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7683
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
void test(val<bool> var_7, val<unsigned long long int> var_12, val<int> zero, val<unsigned char*> var_13, val<short*> var_14) {
    *var_13 &= ((/* implicit */val<unsigned char>) var_12);
    *var_14 = ((/* implicit */val<short>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_7 = (bool)1;
unsigned long long int var_12 = 2778220283651964029ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)186;
short var_14 = (short)-22129;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned char)56;
    value_mismatch |= var_14 != (short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_12, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
