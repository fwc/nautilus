/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2920
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2920
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
void test(val<bool> var_3, val<unsigned int> var_5, val<short> var_13, val<bool> var_14, val<int> zero, val<signed char*> var_18, val<int*> var_19) {
    *var_18 = ((/* implicit */val<signed char>) max((((((/* implicit */val<bool>) (val<signed char>)75)) ? (7035843535161981503ULL) : (5845917993196239483ULL))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) var_14)), (var_5)))) ? (var_5) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3))))))));
    *var_19 = ((/* implicit */val<int>) var_13);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_3 = (bool)0;
unsigned int var_5 = 1685764043U;
short var_13 = (short)14814;
bool var_14 = (bool)1;
int zero = 0;
signed char var_18 = (signed char)-101;
int var_19 = 981947605;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)63;
    value_mismatch |= var_19 != 14814;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_13, var_14, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
