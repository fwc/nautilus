/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8760
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8760
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
void test(val<unsigned int> var_6, val<bool> var_7, val<int> zero, val<int*> var_12, val<long long int*> var_13, val<signed char*> var_14) {
    *var_12 = ((/* implicit */val<int>) var_6);
    *var_13 -= ((/* implicit */val<long long int>) var_7);
    *var_14 |= ((/* implicit */val<signed char>) (+(-5645096915349901919LL)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1717888868U;
bool var_7 = (bool)1;
int zero = 0;
int var_12 = -148931491;
long long int var_13 = 4573996302191935808LL;
signed char var_14 = (signed char)102;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 1717888868;
    value_mismatch |= var_13 != 4573996302191935807LL;
    value_mismatch |= var_14 != (signed char)-25;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_7, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
