/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5034
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5034
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
void test(val<short> var_10, val<int> zero, val<unsigned char*> var_13, val<unsigned long long int*> var_14) {
    *var_13 = ((/* implicit */val<unsigned char>) ((val<bool>) var_10));
    *var_14 += ((/* implicit */val<unsigned long long int>) (val<unsigned char>)253);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_10 = (short)-30057;
int zero = 0;
unsigned char var_13 = (unsigned char)71;
unsigned long long int var_14 = 1289065855811875446ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned char)1;
    value_mismatch |= var_14 != 1289065855811875699ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_10, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
