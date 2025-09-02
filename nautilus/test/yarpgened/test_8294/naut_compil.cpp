/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8294
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8294
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
void test(val<bool> var_0, val<int> var_1, val<int> var_2, val<int> var_5, val<unsigned int> var_6, val<unsigned int> var_7, val<signed char> var_8, val<long long int> var_9, val<int> zero, val<bool*> var_11, val<unsigned long long int*> var_12, val<short*> var_13, val<long long int*> var_14, val<unsigned short*> var_15) {
    *var_11 = ((/* implicit */val<bool>) var_1);
    *var_12 = ((/* implicit */val<unsigned long long int>) min((*var_12), (((/* implicit */val<unsigned long long int>) min((((((/* implicit */val<bool>) ((val<unsigned int>) var_0))) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) 2606553283U)) ? (var_5) : (((/* implicit */val<int>) var_8))))) : (min((var_7), (1688414013U))))), (var_6))))));
    *var_13 = ((/* implicit */val<short>) max((var_1), (var_2)));
    *var_14 = ((((/* implicit */val<long long int>) var_2)) - (var_9));
    *var_15 = ((/* implicit */val<unsigned short>) ((val<bool>) max((((((/* implicit */val<bool>) -415787057)) ? (var_1) : (var_2))), ((~(((/* implicit */val<int>) (val<unsigned char>)255)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
int var_1 = -258308473;
int var_2 = -1406003258;
int var_5 = 472151166;
unsigned int var_6 = 103688271U;
unsigned int var_7 = 628627711U;
signed char var_8 = (signed char)29;
long long int var_9 = -5817069040549704451LL;
int zero = 0;
bool var_11 = (bool)0;
unsigned long long int var_12 = 18429281306798097427ULL;
short var_13 = (short)-997;
long long int var_14 = 5666885716794333144LL;
unsigned short var_15 = (unsigned short)26818;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != 103688271ULL;
    value_mismatch |= var_13 != (short)-31097;
    value_mismatch |= var_14 != 5817069039143701193LL;
    value_mismatch |= var_15 != (unsigned short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_5, var_6, var_7, var_8, var_9, zero, &var_11, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
