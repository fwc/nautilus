/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 757
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=757
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
void test(val<signed char> var_2, val<signed char> var_6, val<bool> var_7, val<int> var_11, val<signed char> var_16, val<int> zero, val<unsigned short*> var_17, val<bool*> var_18, val<bool*> var_19) {
    *var_17 = ((/* implicit */val<unsigned short>) max((((/* implicit */val<signed char>) var_7)), (var_6)));
    *var_18 = ((/* implicit */val<bool>) min((((val<long long int>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<long long int>) var_11)) : (-8648180584860955687LL)))), (((/* implicit */val<long long int>) var_6))));
    *var_19 = ((/* implicit */val<bool>) ((var_7) ? (2181431069507584LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_16)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-15;
signed char var_6 = (signed char)23;
bool var_7 = (bool)0;
int var_11 = 693393972;
signed char var_16 = (signed char)-14;
int zero = 0;
unsigned short var_17 = (unsigned short)50341;
bool var_18 = (bool)1;
bool var_19 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned short)23;
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_6, var_7, var_11, var_16, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
