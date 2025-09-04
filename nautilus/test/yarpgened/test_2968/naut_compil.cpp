/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2968
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2968
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
void test(val<unsigned char> var_2, val<unsigned char> var_3, val<int> var_7, val<int> zero, val<short*> var_10, val<short*> var_11) {
    *var_10 = ((/* implicit */val<short>) max((var_3), (var_2)));
    *var_11 = ((/* implicit */val<short>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)10;
unsigned char var_3 = (unsigned char)92;
int var_7 = -1725829854;
int zero = 0;
short var_10 = (short)15857;
short var_11 = (short)19309;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)92;
    value_mismatch |= var_11 != (short)-4830;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_7, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
