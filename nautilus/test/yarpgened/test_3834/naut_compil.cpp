/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3834
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3834
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
void test(val<unsigned long long int> var_5, val<short> var_13, val<int> zero, val<unsigned int*> var_17, val<unsigned int*> var_18) {
    *var_17 |= ((/* implicit */val<unsigned int>) var_5);
    *var_18 -= ((/* implicit */val<unsigned int>) var_13);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 229607469136359255ULL;
short var_13 = (short)-21991;
int zero = 0;
unsigned int var_17 = 3664266278U;
unsigned int var_18 = 2282993643U;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 3689836407U;
    value_mismatch |= var_18 != 2283015634U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_13, zero, &var_17, &var_18);
  checksum();
}
