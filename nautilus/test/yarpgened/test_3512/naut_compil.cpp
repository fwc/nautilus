/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3512
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3512
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
void test(val<int> var_3, val<unsigned short> var_8, val<unsigned long long int> var_9, val<unsigned int> var_11, val<unsigned short> var_12, val<int> zero, val<unsigned int*> var_15, val<unsigned short*> var_16, val<long long int*> var_17) {
    *var_15 = var_11;
    *var_16 = ((/* implicit */val<unsigned short>) min((*var_16), (((/* implicit */val<unsigned short>) var_3))));
    *var_17 = ((((/* implicit */val<long long int>) var_3)) + (((((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_8))))) ? (((((/* implicit */val<bool>) var_9)) ? (575334852396580864LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_12))))) : (max((-575334852396580877LL), (67108863LL))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1037442998;
unsigned short var_8 = (unsigned short)20730;
unsigned long long int var_9 = 1836058792839823040ULL;
unsigned int var_11 = 4200627267U;
unsigned short var_12 = (unsigned short)704;
int zero = 0;
unsigned int var_15 = 3612268235U;
unsigned short var_16 = (unsigned short)37063;
long long int var_17 = 991806251395784280LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 4200627267U;
    value_mismatch |= var_16 != (unsigned short)37063;
    value_mismatch |= var_17 != 575334851359137866LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_8, var_9, var_11, var_12, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
