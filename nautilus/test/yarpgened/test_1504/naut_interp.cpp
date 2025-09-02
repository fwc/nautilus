/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1504
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1504
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
void test(val<long long int> var_16, val<unsigned char> var_18, val<int> zero, val<bool*> var_20, val<long long int*> var_21) {
    *var_20 -= ((/* implicit */val<bool>) var_16);
    *var_21 -= ((/* implicit */val<long long int>) var_18);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_16 = 8419401801675494230LL;
unsigned char var_18 = (unsigned char)104;
int zero = 0;
bool var_20 = (bool)1;
long long int var_21 = 5393268934376529205LL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (bool)0;
    value_mismatch |= var_21 != 5393268934376529101LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_16, var_18, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
