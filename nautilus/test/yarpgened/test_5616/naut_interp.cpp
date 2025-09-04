/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5616
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5616
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
void test(val<int> var_6, val<unsigned char> var_14, val<int> zero, val<long long int*> var_20, val<int*> var_21) {
    *var_20 = ((/* implicit */val<long long int>) (val<bool>)1);
    *var_21 -= max((var_6), (((/* implicit */val<int>) var_14)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -930305357;
unsigned char var_14 = (unsigned char)40;
int zero = 0;
long long int var_20 = 7593123816265267461LL;
int var_21 = 1756984655;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 1LL;
    value_mismatch |= var_21 != 1756984615;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_14, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
