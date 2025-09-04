/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4035
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4035
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
void test(val<bool> var_1, val<short> var_3, val<bool> var_5, val<unsigned long long int> var_7, val<unsigned long long int> var_8, val<bool> var_10, val<unsigned long long int> var_12, val<int> zero, val<bool*> var_13, val<unsigned long long int*> var_14, val<unsigned long long int*> var_15, val<unsigned long long int*> var_16) {
    *var_13 = ((/* implicit */val<bool>) (-((-(var_12)))));
    *var_14 = (-(var_12));
    *var_15 &= min((var_8), (min((((/* implicit */val<unsigned long long int>) ((val<short>) var_10))), (max((var_7), (var_12))))));
    *var_16 = max((var_7), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((var_5) ? (((/* implicit */val<int>) (val<short>)-4144)) : (((/* implicit */val<int>) (val<bool>)1))))) || (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) var_1)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)0;
short var_3 = (short)30809;
bool var_5 = (bool)0;
unsigned long long int var_7 = 10246536917338154946ULL;
unsigned long long int var_8 = 16746274575276122508ULL;
bool var_10 = (bool)1;
unsigned long long int var_12 = 10094345169700569259ULL;
int zero = 0;
bool var_13 = (bool)1;
unsigned long long int var_14 = 16052275959899833633ULL;
unsigned long long int var_15 = 12286925039572099601ULL;
unsigned long long int var_16 = 1924716654191641161ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != 8352398904008982357ULL;
    value_mismatch |= var_15 != 1ULL;
    value_mismatch |= var_16 != 10246536917338154946ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_5, var_7, var_8, var_10, var_12, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
