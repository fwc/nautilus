/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8211
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8211
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
void test(val<signed char> var_2, val<unsigned short> var_12, val<int> zero, val<unsigned char*> var_16, val<unsigned long long int*> var_17) {
    *var_16 = ((/* implicit */val<unsigned char>) ((val<int>) var_2));
    *var_17 = ((/* implicit */val<unsigned long long int>) var_12);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)91;
unsigned short var_12 = (unsigned short)14228;
int zero = 0;
unsigned char var_16 = (unsigned char)241;
unsigned long long int var_17 = 13554972441187935608ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned char)91;
    value_mismatch |= var_17 != 14228ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_12, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
