/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2540
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2540
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
void test(val<bool> var_1, val<unsigned int> var_4, val<unsigned long long int> var_13, val<bool> var_18, val<int> zero, val<bool*> var_20, val<long long int*> var_21, val<unsigned int*> var_22, val<unsigned int*> var_23) {
    *var_20 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((val<int>) (((val<bool>)1) ? (((/* implicit */val<int>) (val<signed char>)30)) : (((/* implicit */val<int>) (val<signed char>)9)))))) ? (((/* implicit */val<unsigned long long int>) min(((~(((/* implicit */val<int>) var_18)))), (((/* implicit */val<int>) (val<unsigned short>)24))))) : (var_13)));
    *var_21 = ((/* implicit */val<long long int>) ((val<unsigned long long int>) var_4));
    *var_22 = ((/* implicit */val<unsigned int>) ((val<unsigned long long int>) min((((/* implicit */val<int>) var_18)), ((+(((/* implicit */val<int>) var_1)))))));
    *var_23 = ((/* implicit */val<unsigned int>) max((*var_23), (((/* implicit */val<unsigned int>) (val<bool>)0))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)0;
unsigned int var_4 = 1685056345U;
unsigned long long int var_13 = 4268410855249128816ULL;
bool var_18 = (bool)1;
int zero = 0;
bool var_20 = (bool)0;
long long int var_21 = -4458512484861653691LL;
unsigned int var_22 = 2575817985U;
unsigned int var_23 = 2027827162U;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != 1685056345LL;
    value_mismatch |= var_22 != 0U;
    value_mismatch |= var_23 != 2027827162U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_13, var_18, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
}
