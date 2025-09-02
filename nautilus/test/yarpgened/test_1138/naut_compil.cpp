/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1138
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1138
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
void test(val<short> var_1, val<signed char> var_4, val<signed char> var_5, val<short> var_6, val<long long int> var_8, val<int> zero, val<short*> var_10, val<bool*> var_11) {
    *var_10 = ((/* implicit */val<short>) (+((((val<bool>)1) ? (((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_5)) & (((/* implicit */val<int>) var_6))))) : (69143137615366433LL)))));
    *var_11 = ((/* implicit */val<bool>) min((*var_11), (((/* implicit */val<bool>) max((((/* implicit */val<long long int>) ((((((/* implicit */val<int>) (val<short>)0)) >> (((((/* implicit */val<int>) var_1)) - (22344))))) * (((((/* implicit */val<int>) var_4)) << (((/* implicit */val<int>) (val<bool>)0))))))), (((max((2305843008676823040LL), (((/* implicit */val<long long int>) (val<signed char>)97)))) >> (((((((var_8) + (9223372036854775807LL))) >> (((((/* implicit */val<int>) var_5)) + (92))))) - (301705246962063234LL))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)22369;
signed char var_4 = (signed char)52;
signed char var_5 = (signed char)-88;
short var_6 = (short)-13344;
long long int var_8 = -4396088085461763619LL;
int zero = 0;
short var_10 = (short)-22423;
bool var_11 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)-13408;
    value_mismatch |= var_11 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_5, var_6, var_8, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
