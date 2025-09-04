/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8858
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8858
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
void test(val<unsigned short> var_2, val<long long int> var_3, val<unsigned int> var_4, val<int> zero, val<unsigned int*> var_11, val<bool*> var_12, val<unsigned int*> var_13) {
    *var_11 -= ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)20)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<short>) var_2)))) : (max((var_4), (((/* implicit */val<unsigned int>) -1895525129))))))) ? (((/* implicit */val<int>) ((val<signed char>) 536870912U))) : ((-(((/* implicit */val<int>) ((-1354787469) == (((/* implicit */val<int>) (val<signed char>)-15)))))))));
    *var_12 = ((/* implicit */val<bool>) min((*var_12), (((/* implicit */val<bool>) max((((/* implicit */val<int>) (val<signed char>)-4)), ((+(2147483647))))))));
    *var_13 = ((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) var_3))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)5916;
long long int var_3 = -3403390618000508300LL;
unsigned int var_4 = 398971494U;
int zero = 0;
unsigned int var_11 = 431873106U;
bool var_12 = (bool)0;
unsigned int var_13 = 4240458864U;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 431873106U;
    value_mismatch |= var_12 != (bool)0;
    value_mismatch |= var_13 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
