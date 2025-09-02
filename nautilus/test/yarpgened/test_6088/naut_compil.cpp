/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6088
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6088
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
void test(val<bool> var_2, val<short> var_11, val<unsigned int> var_13, val<unsigned int> var_15, val<signed char> var_16, val<int> zero, val<signed char*> var_17, val<unsigned int*> var_18, val<bool*> var_19) {
    *var_17 = ((/* implicit */val<signed char>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<bool>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)14214))) % (2752869031U)))))) > ((~(((val<unsigned long long int>) var_16))))));
    *var_18 += ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((val<short>) 1682995212U))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2))) : (min((((/* implicit */val<unsigned long long int>) max((1542098265U), (var_15)))), (((val<unsigned long long int>) var_11))))));
    *var_19 ^= ((/* implicit */val<bool>) (-(((/* implicit */val<int>) ((val<bool>) var_13)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_2 = (bool)1;
short var_11 = (short)-2411;
unsigned int var_13 = 150848951U;
unsigned int var_15 = 3038407249U;
signed char var_16 = (signed char)-38;
int zero = 0;
signed char var_17 = (signed char)-69;
unsigned int var_18 = 1894672700U;
bool var_19 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (signed char)0;
    value_mismatch |= var_18 != 1894672701U;
    value_mismatch |= var_19 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_11, var_13, var_15, var_16, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
