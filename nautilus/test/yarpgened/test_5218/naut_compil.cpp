/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5218
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5218
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
void test(val<long long int> var_2, val<signed char> var_7, val<int> zero, val<int*> var_13, val<unsigned short*> var_14, val<unsigned long long int*> var_15) {
    *var_13 = ((/* implicit */val<int>) max((*var_13), (((/* implicit */val<int>) ((val<unsigned long long int>) max(((~(3307576948356722583ULL))), (((/* implicit */val<unsigned long long int>) var_2))))))));
    *var_14 = ((/* implicit */val<unsigned short>) 3518196805198775078ULL);
    *var_15 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (+(((/* implicit */val<int>) ((val<bool>) var_7)))))) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) -636081611)) || (((/* implicit */val<bool>) ((((/* implicit */val<bool>) 636081613)) ? (7897458971438516570LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7))))))))) : (max(((~(((/* implicit */val<int>) var_7)))), (((/* implicit */val<int>) (!(((/* implicit */val<bool>) -636081611)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2954112415876507979LL;
signed char var_7 = (signed char)-87;
int zero = 0;
int var_13 = 1141141106;
unsigned short var_14 = (unsigned short)42219;
unsigned long long int var_15 = 8441124880360266298ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 1141141106;
    value_mismatch |= var_14 != (unsigned short)33574;
    value_mismatch |= var_15 != 1ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_7, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
