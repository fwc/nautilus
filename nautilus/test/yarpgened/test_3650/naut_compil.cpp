/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3650
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3650
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
void test(val<unsigned int> var_5, val<unsigned short> var_8, val<int> zero, val<short*> var_17, val<unsigned int*> var_18) {
    *var_17 = ((/* implicit */val<short>) min((*var_17), (((/* implicit */val<short>) var_8))));
    *var_18 = ((/* implicit */val<unsigned int>) min((*var_18), (var_5)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1327834567U;
unsigned short var_8 = (unsigned short)18012;
int zero = 0;
short var_17 = (short)-18406;
unsigned int var_18 = 884967199U;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (short)-18406;
    value_mismatch |= var_18 != 884967199U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_8, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
