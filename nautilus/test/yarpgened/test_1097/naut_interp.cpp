/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1097
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1097
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
void test(val<int> zero, val<short*> var_10, val<unsigned long long int*> var_11) {
    *var_10 = ((/* implicit */val<short>) (-((+((-(((/* implicit */val<int>) (val<bool>)1))))))));
    *var_11 = ((/* implicit */val<unsigned long long int>) -9223372036854775803LL);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
short var_10 = (short)-14696;
unsigned long long int var_11 = 15627197820196545487ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)1;
    value_mismatch |= var_11 != 9223372036854775813ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
