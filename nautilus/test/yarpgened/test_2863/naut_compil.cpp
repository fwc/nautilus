/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2863
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2863
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
void test(val<long long int> var_4, val<bool> var_12, val<int> zero, val<long long int*> var_15, val<signed char*> var_16) {
    *var_15 = var_4;
    *var_16 = ((/* implicit */val<signed char>) ((val<short>) var_12));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 7963142468276435670LL;
bool var_12 = (bool)1;
int zero = 0;
long long int var_15 = -7134210946179651426LL;
signed char var_16 = (signed char)30;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 7963142468276435670LL;
    value_mismatch |= var_16 != (signed char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_12, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
