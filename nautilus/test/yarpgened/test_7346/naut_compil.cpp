/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7346
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7346
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
void test(val<unsigned long long int> var_0, val<unsigned int> var_2, val<int> var_8, val<int> zero, val<int*> var_10, val<int*> var_11, val<signed char*> var_12) {
    *var_10 = (~(((/* implicit */val<int>) max((((val<unsigned short>) (val<short>)-10740)), (((val<unsigned short>) var_8))))));
    *var_11 = ((/* implicit */val<int>) min((*var_11), (((/* implicit */val<int>) var_2))));
    *var_12 = ((/* implicit */val<signed char>) ((val<unsigned long long int>) var_0));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17603840789070736148ULL;
unsigned int var_2 = 2366808608U;
int var_8 = -805663060;
int zero = 0;
int var_10 = -1274566136;
int var_11 = -1262409625;
signed char var_12 = (signed char)21;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != -54797;
    value_mismatch |= var_11 != -1928158688;
    value_mismatch |= var_12 != (signed char)20;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_8, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
