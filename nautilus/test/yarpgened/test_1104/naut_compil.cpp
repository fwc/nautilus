/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1104
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1104
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
void test(val<signed char> var_1, val<unsigned long long int> var_3, val<long long int> var_5, val<short> var_8, val<unsigned short> var_9, val<int> zero, val<unsigned int*> var_10, val<unsigned long long int*> var_11) {
    *var_10 &= ((/* implicit */val<unsigned int>) max(((((!(((/* implicit */val<bool>) var_9)))) ? (((/* implicit */val<int>) max((var_9), (var_9)))) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_5)) || (((/* implicit */val<bool>) var_3))))))), (((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) (val<signed char>)-18))))) && (((/* implicit */val<bool>) var_8)))))));
    *var_11 -= ((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) (val<unsigned short>)36391))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-86;
unsigned long long int var_3 = 10569364543964151369ULL;
long long int var_5 = 8879804587367635674LL;
short var_8 = (short)-14000;
unsigned short var_9 = (unsigned short)45469;
int zero = 0;
unsigned int var_10 = 1286609927U;
unsigned long long int var_11 = 10969374599806294600ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 1U;
    value_mismatch |= var_11 != 10969374599806330991ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_5, var_8, var_9, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
