/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6812
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6812
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
void test(val<unsigned long long int> var_1, val<short> var_4, val<bool> var_5, val<long long int> var_6, val<bool> var_8, val<int> zero, val<bool*> var_10, val<signed char*> var_11, val<unsigned long long int*> var_12) {
    *var_10 = ((val<bool>) ((((/* implicit */val<bool>) (~(var_1)))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_8))) : (((val<long long int>) 1U))));
    *var_11 = ((/* implicit */val<signed char>) ((val<bool>) ((((/* implicit */val<bool>) min((((/* implicit */val<short>) (val<signed char>)31)), (var_4)))) ? (((7030803058933953089ULL) / (((/* implicit */val<unsigned long long int>) var_6)))) : (var_1))));
    *var_12 ^= ((/* implicit */val<unsigned long long int>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6687295623566504670ULL;
short var_4 = (short)-14306;
bool var_5 = (bool)1;
long long int var_6 = 2294820846462861561LL;
bool var_8 = (bool)0;
int zero = 0;
bool var_10 = (bool)0;
signed char var_11 = (signed char)98;
unsigned long long int var_12 = 17555417563335302711ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (bool)0;
    value_mismatch |= var_11 != (signed char)1;
    value_mismatch |= var_12 != 17555417563335302710ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_5, var_6, var_8, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
