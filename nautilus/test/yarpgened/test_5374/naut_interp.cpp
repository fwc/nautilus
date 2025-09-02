/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5374
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5374
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
void test(val<bool> var_1, val<unsigned int> var_13, val<long long int> var_16, val<int> zero, val<short*> var_17, val<bool*> var_18) {
    *var_17 = ((/* implicit */val<short>) max((var_16), (((/* implicit */val<long long int>) var_1))));
    *var_18 += ((/* implicit */val<bool>) var_13);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)0;
unsigned int var_13 = 3497019945U;
long long int var_16 = -6153611166218347552LL;
int zero = 0;
short var_17 = (short)-32296;
bool var_18 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (short)0;
    value_mismatch |= var_18 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_13, var_16, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
