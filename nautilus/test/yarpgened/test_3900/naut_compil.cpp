/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3900
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3900
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
void test(val<bool> var_6, val<short> var_8, val<unsigned long long int> var_11, val<unsigned long long int> var_17, val<int> zero, val<short*> var_18, val<int*> var_19, val<unsigned long long int*> var_20) {
    *var_18 = ((/* implicit */val<short>) var_17);
    *var_19 = max((-2011976815), (2011976832));
    *var_20 = ((/* implicit */val<unsigned long long int>) ((val<short>) ((((/* implicit */val<bool>) var_11)) ? ((-(((/* implicit */val<int>) var_6)))) : (((/* implicit */val<int>) var_8)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_6 = (bool)0;
short var_8 = (short)13110;
unsigned long long int var_11 = 4590713090324665331ULL;
unsigned long long int var_17 = 13943909293372599085ULL;
int zero = 0;
short var_18 = (short)-11916;
int var_19 = 1898489168;
unsigned long long int var_20 = 15400790517693288928ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)-5331;
    value_mismatch |= var_19 != 2011976832;
    value_mismatch |= var_20 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_8, var_11, var_17, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
