/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8951
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8951
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
void test(val<int> var_8, val<unsigned int> var_11, val<int> zero, val<short*> var_16, val<signed char*> var_17, val<unsigned char*> var_18) {
    *var_16 = ((/* implicit */val<short>) max((var_11), ((-(387405276U)))));
    *var_17 = ((/* implicit */val<signed char>) min((*var_17), (((/* implicit */val<signed char>) var_8))));
    *var_18 = ((/* implicit */val<unsigned char>) 8248849932808598678LL);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 1618279309;
unsigned int var_11 = 4105831789U;
int zero = 0;
short var_16 = (short)-29875;
signed char var_17 = (signed char)32;
unsigned char var_18 = (unsigned char)23;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (short)1389;
    value_mismatch |= var_17 != (signed char)-115;
    value_mismatch |= var_18 != (unsigned char)150;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_11, zero, &var_16, &var_17, &var_18);
  checksum();
}
