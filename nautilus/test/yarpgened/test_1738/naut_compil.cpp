/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1738
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1738
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
void test(val<unsigned long long int> var_2, val<unsigned char> var_4, val<int> zero, val<bool*> var_11, val<short*> var_12, val<signed char*> var_13) {
    *var_11 = ((/* implicit */val<bool>) max((*var_11), (((/* implicit */val<bool>) var_2))));
    *var_12 = ((/* implicit */val<short>) min((*var_12), (((/* implicit */val<short>) var_4))));
    *var_13 = ((/* implicit */val<signed char>) max((*var_13), (((/* implicit */val<signed char>) 4294967295U))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 18003666855229336053ULL;
unsigned char var_4 = (unsigned char)23;
int zero = 0;
bool var_11 = (bool)0;
short var_12 = (short)-8940;
signed char var_13 = (signed char)-71;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != (short)-8940;
    value_mismatch |= var_13 != (signed char)-1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
