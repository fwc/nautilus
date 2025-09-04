/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6722
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6722
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
void test(val<long long int> var_0, val<signed char> var_8, val<int> zero, val<long long int*> var_16, val<int*> var_17) {
    *var_16 = var_0;
    *var_17 = ((/* implicit */val<int>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1641060637087358646LL;
signed char var_8 = (signed char)105;
int zero = 0;
long long int var_16 = -8815396339915293757LL;
int var_17 = -1058470434;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != -1641060637087358646LL;
    value_mismatch |= var_17 != 105;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_8, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
