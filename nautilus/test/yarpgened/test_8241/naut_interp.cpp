/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8241
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8241
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
void test(val<long long int> var_1, val<int> var_2, val<bool> var_9, val<int> var_11, val<long long int> var_12, val<short> var_17, val<short> var_19, val<int> zero, val<unsigned int*> var_20, val<unsigned int*> var_21, val<long long int*> var_22) {
    *var_20 = ((/* implicit */val<unsigned int>) ((val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9))) : (var_12)))) ? (((/* implicit */val<int>) var_19)) : ((-(var_11))))));
    *var_21 = ((/* implicit */val<unsigned int>) max(((-(var_12))), (((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<long long int>) (+(((/* implicit */val<int>) (val<short>)-18617))))) : (max((var_1), (((/* implicit */val<long long int>) var_9))))))));
    *var_22 = ((/* implicit */val<long long int>) max((*var_22), (((/* implicit */val<long long int>) max(((~(((val<unsigned int>) var_19)))), (((/* implicit */val<unsigned int>) var_17)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3485877363372812242LL;
int var_2 = 2137906622;
bool var_9 = (bool)1;
int var_11 = 882838738;
long long int var_12 = -219174791347919046LL;
short var_17 = (short)22043;
short var_19 = (short)21724;
int zero = 0;
unsigned int var_20 = 2818907425U;
unsigned int var_21 = 172946982U;
long long int var_22 = 1308627674681426471LL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 220U;
    value_mismatch |= var_21 != 3187890374U;
    value_mismatch |= var_22 != 1308627674681426471LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_9, var_11, var_12, var_17, var_19, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
