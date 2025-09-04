/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6662
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6662
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
void test(val<short> var_1, val<bool> var_2, val<short> var_3, val<long long int> var_5, val<long long int> var_6, val<short> var_12, val<long long int> var_13, val<int> zero, val<long long int*> var_20, val<unsigned long long int*> var_21) {
    *var_20 = ((/* implicit */val<long long int>) ((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_2))))) ? (((var_2) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) var_3)))) : (((/* implicit */val<int>) min((var_1), (var_12))))))) > (max((((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) var_5))))), ((-(var_6)))))));
    *var_21 = ((/* implicit */val<unsigned long long int>) var_13);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-28647;
bool var_2 = (bool)0;
short var_3 = (short)-23031;
long long int var_5 = -2686953632682980737LL;
long long int var_6 = 6715237140833388715LL;
short var_12 = (short)25068;
long long int var_13 = -333448122038922541LL;
int zero = 0;
long long int var_20 = -7298816484123710925LL;
unsigned long long int var_21 = 12897609548553109171ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 0LL;
    value_mismatch |= var_21 != 18113295951670629075ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_5, var_6, var_12, var_13, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
