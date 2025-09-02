/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1993
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1993
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
void test(val<unsigned int> var_4, val<bool> var_11, val<unsigned short> var_14, val<int> zero, val<int*> var_16, val<int*> var_17, val<int*> var_18, val<long long int*> var_19) {
    *var_16 = ((/* implicit */val<int>) var_14);
    *var_17 = ((/* implicit */val<int>) min((*var_17), (((/* implicit */val<int>) (+(max((((/* implicit */val<unsigned int>) 100254585)), ((~(1829003660U))))))))));
    *var_18 = ((((((/* implicit */val<int>) var_11)) << ((((+(((/* implicit */val<int>) (val<signed char>)-36)))) + (48))))) / (100254585));
    *var_19 = ((val<long long int>) var_4);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1409063505U;
bool var_11 = (bool)1;
unsigned short var_14 = (unsigned short)20374;
int zero = 0;
int var_16 = 1728399359;
int var_17 = -1877886892;
int var_18 = -1995828898;
long long int var_19 = 4548008005030366631LL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 20374;
    value_mismatch |= var_17 != -1877886892;
    value_mismatch |= var_18 != 0;
    value_mismatch |= var_19 != 1409063505LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_11, var_14, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
