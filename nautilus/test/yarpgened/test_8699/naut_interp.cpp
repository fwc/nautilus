/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8699
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8699
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
void test(val<int> var_1, val<signed char> var_4, val<int> zero, val<unsigned long long int*> var_17, val<short*> var_18) {
    *var_17 = ((/* implicit */val<unsigned long long int>) var_4);
    *var_18 = ((/* implicit */val<short>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1156090017;
signed char var_4 = (signed char)-68;
int zero = 0;
unsigned long long int var_17 = 7259932914804086731ULL;
short var_18 = (short)-14869;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 18446744073709551548ULL;
    value_mismatch |= var_18 != (short)30559;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
