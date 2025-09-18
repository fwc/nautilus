/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6067
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6067
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
void test(val<unsigned long long int> var_6, val<long long int> var_11, val<int> zero, val<unsigned int*> var_12, val<bool*> var_13, val<unsigned int*> var_14) {
    *var_12 = ((/* implicit */val<unsigned int>) max((*var_12), (((/* implicit */val<unsigned int>) (+((+(var_6))))))));
    *var_13 = ((/* implicit */val<bool>) var_11);
    *var_14 = ((/* implicit */val<unsigned int>) max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<unsigned short>)0)) ? (((/* implicit */val<int>) (val<unsigned short>)65522)) : (-907495052)))), (4714694518148614681ULL)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 6777373754769191244ULL;
long long int var_11 = -6363871199517630768LL;
int zero = 0;
unsigned int var_12 = 4049386344U;
bool var_13 = (bool)1;
unsigned int var_14 = 2937461690U;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 4049386344U;
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != 3387472244U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
}
