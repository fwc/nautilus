/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9648
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9648
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
void test(val<short> var_4, val<short> var_8, val<int> var_9, val<unsigned long long int> var_10, val<int> zero, val<int*> var_17, val<signed char*> var_18, val<int*> var_19, val<int*> var_20) {
    *var_17 = ((/* implicit */val<int>) 13387488118389123665ULL);
    *var_18 = ((/* implicit */val<signed char>) max((min((((var_10) ^ (((/* implicit */val<unsigned long long int>) var_9)))), (min((((/* implicit */val<unsigned long long int>) var_4)), (8457383280667125281ULL))))), (((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) (val<unsigned short>)5870)))))));
    *var_19 = (~(((/* implicit */val<int>) max((((/* implicit */val<short>) ((((/* implicit */val<int>) (val<short>)-5041)) <= (var_9)))), (var_8)))));
    *var_20 = ((/* implicit */val<int>) var_10);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)17318;
short var_8 = (short)-21964;
int var_9 = -1477515775;
unsigned long long int var_10 = 10456742887517308542ULL;
int zero = 0;
int var_17 = 536408491;
signed char var_18 = (signed char)-92;
int var_19 = -746072367;
int var_20 = 1222052249;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != -2091341231;
    value_mismatch |= var_18 != (signed char)-90;
    value_mismatch |= var_19 != -1;
    value_mismatch |= var_20 != 101697150;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_8, var_9, var_10, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
