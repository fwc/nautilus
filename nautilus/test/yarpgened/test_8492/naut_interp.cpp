/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8492
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8492
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
void test(val<signed char> var_2, val<signed char> var_5, val<unsigned char> var_6, val<int> var_9, val<unsigned long long int> var_10, val<signed char> var_12, val<int> zero, val<unsigned long long int*> var_13, val<signed char*> var_14) {
    *var_13 = ((/* implicit */val<unsigned long long int>) max((*var_13), (((/* implicit */val<unsigned long long int>) var_12))));
    *var_14 = ((/* implicit */val<signed char>) ((((((((/* implicit */val<bool>) var_2)) || (((/* implicit */val<bool>) var_5)))) && (((/* implicit */val<bool>) min((1636953539), (((/* implicit */val<int>) (val<signed char>)43))))))) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_9)) || (((((/* implicit */val<bool>) var_10)) && (((/* implicit */val<bool>) var_9))))))) : (min((((((/* implicit */val<bool>) (val<signed char>)127)) ? (((/* implicit */val<int>) var_6)) : (((/* implicit */val<int>) (val<short>)-3310)))), (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned char>)127)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)122;
signed char var_5 = (signed char)20;
unsigned char var_6 = (unsigned char)172;
int var_9 = -1338666924;
unsigned long long int var_10 = 3130973491197905827ULL;
signed char var_12 = (signed char)95;
int zero = 0;
unsigned long long int var_13 = 15681939705943955717ULL;
signed char var_14 = (signed char)-38;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 15681939705943955717ULL;
    value_mismatch |= var_14 != (signed char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_6, var_9, var_10, var_12, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
