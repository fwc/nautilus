/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7489
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7489
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
void test(val<signed char> var_4, val<unsigned short> var_5, val<int> zero, val<long long int*> var_10, val<int*> var_11) {
    *var_10 = ((/* implicit */val<long long int>) var_4);
    *var_11 = ((/* implicit */val<int>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)120;
unsigned short var_5 = (unsigned short)21694;
int zero = 0;
long long int var_10 = -9013861873762945065LL;
int var_11 = 1708641719;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 120LL;
    value_mismatch |= var_11 != 21694;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, zero, &var_10, &var_11);
  checksum();
}
