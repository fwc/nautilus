/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3563
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3563
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
void test(val<unsigned short> var_1, val<int> var_7, val<bool> var_10, val<int> zero, val<bool*> var_13, val<long long int*> var_14, val<long long int*> var_15) {
    *var_13 = ((/* implicit */val<bool>) var_1);
    *var_14 = ((/* implicit */val<long long int>) var_10);
    *var_15 = ((/* implicit */val<long long int>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)50165;
int var_7 = 1148337843;
bool var_10 = (bool)1;
int zero = 0;
bool var_13 = (bool)0;
long long int var_14 = -7329881512337219041LL;
long long int var_15 = 7292036009355576058LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != 1LL;
    value_mismatch |= var_15 != 1148337843LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_7, var_10, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
