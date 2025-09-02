/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8862
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8862
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
void test(val<long long int> var_3, val<unsigned char> var_10, val<int> zero, val<unsigned int*> var_11, val<unsigned int*> var_12, val<long long int*> var_13) {
    *var_11 = ((/* implicit */val<unsigned int>) var_10);
    *var_12 |= 1984U;
    *var_13 = ((val<long long int>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7751875638971422880LL;
unsigned char var_10 = (unsigned char)56;
int zero = 0;
unsigned int var_11 = 355375825U;
unsigned int var_12 = 2641327390U;
long long int var_13 = 8056020211722312033LL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 56U;
    value_mismatch |= var_12 != 2641328094U;
    value_mismatch |= var_13 != -7751875638971422880LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
