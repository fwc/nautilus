/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1192
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1192
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
void test(val<unsigned long long int> var_0, val<short> var_2, val<unsigned int> var_3, val<unsigned short> var_4, val<unsigned short> var_10, val<int> var_15, val<int> zero, val<int*> var_20, val<int*> var_21, val<short*> var_22) {
    *var_20 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_4)) && (((/* implicit */val<bool>) var_0))));
    *var_21 = ((/* implicit */val<int>) max((((/* implicit */val<unsigned int>) min(((-(((/* implicit */val<int>) (val<signed char>)60)))), (((((/* implicit */val<bool>) var_15)) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) var_2))))))), (var_3)));
    *var_22 &= ((/* implicit */val<short>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11961058005652015668ULL;
short var_2 = (short)15306;
unsigned int var_3 = 215483340U;
unsigned short var_4 = (unsigned short)36349;
unsigned short var_10 = (unsigned short)55004;
int var_15 = -1543192031;
int zero = 0;
int var_20 = -1656561297;
int var_21 = 241310183;
short var_22 = (short)6238;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 1;
    value_mismatch |= var_21 != -60;
    value_mismatch |= var_22 != (short)76;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_10, var_15, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
