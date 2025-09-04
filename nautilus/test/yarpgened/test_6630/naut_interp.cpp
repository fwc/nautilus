/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6630
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6630
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
void test(val<int> var_0, val<long long int> var_2, val<signed char> var_4, val<signed char> var_5, val<bool> var_13, val<unsigned short> var_14, val<int> zero, val<unsigned long long int*> var_18, val<unsigned short*> var_19, val<unsigned short*> var_20, val<int*> var_21, val<signed char*> var_22) {
    *var_18 = ((/* implicit */val<unsigned long long int>) min((*var_18), (((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<bool>) -15468202)) ? (((/* implicit */val<long long int>) 15468201)) : (-6472931865930543470LL))) & (max((((/* implicit */val<long long int>) (~(((/* implicit */val<int>) var_5))))), (min((((/* implicit */val<long long int>) 15468201)), (4267531582218659353LL))))))))));
    *var_19 = ((/* implicit */val<unsigned short>) ((val<short>) ((((val<bool>) (val<unsigned short>)31250)) && (((/* implicit */val<bool>) -15468202)))));
    *var_20 -= ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<long long int>) var_0)) : (max((var_2), (max((var_2), (((/* implicit */val<long long int>) 15468201))))))));
    *var_21 = ((/* implicit */val<int>) var_13);
    *var_22 = ((/* implicit */val<signed char>) ((val<int>) ((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_4)) ? (954481177) : (((/* implicit */val<int>) var_14))))) > (((((/* implicit */val<long long int>) -15468201)) + (2262383555165444373LL))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -339038909;
long long int var_2 = 4255480590906523659LL;
signed char var_4 = (signed char)40;
signed char var_5 = (signed char)9;
bool var_13 = (bool)0;
unsigned short var_14 = (unsigned short)58890;
int zero = 0;
unsigned long long int var_18 = 10247564383035739800ULL;
unsigned short var_19 = (unsigned short)43665;
unsigned short var_20 = (unsigned short)50036;
int var_21 = -416570335;
signed char var_22 = (signed char)87;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 15468201ULL;
    value_mismatch |= var_19 != (unsigned short)1;
    value_mismatch |= var_20 != (unsigned short)5681;
    value_mismatch |= var_21 != 0;
    value_mismatch |= var_22 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_5, var_13, var_14, zero, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
