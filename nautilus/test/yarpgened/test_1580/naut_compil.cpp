/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1580
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1580
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
void test(val<unsigned char> var_0, val<unsigned int> var_2, val<int> var_5, val<unsigned int> var_6, val<bool> var_8, val<bool> var_10, val<int> var_11, val<unsigned long long int> var_12, val<int> var_13, val<int> zero, val<long long int*> var_14, val<long long int*> var_15, val<bool*> var_16, val<unsigned int*> var_17, val<bool*> var_18) {
    if (((/* implicit */val<bool>) max((((val<int>) (+(((/* implicit */val<int>) var_0))))), (((/* implicit */val<int>) ((((/* implicit */val<bool>) ((var_11) / (((/* implicit */val<int>) var_0))))) || (((/* implicit */val<bool>) var_6))))))))
    {
        *var_14 -= ((/* implicit */val<long long int>) var_10);
        *var_15 = ((/* implicit */val<long long int>) max((*var_15), (((/* implicit */val<long long int>) (~(((var_10) ? (var_12) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<int>) var_8)) : (1798953969)))))))))));
        *var_16 = ((/* implicit */val<bool>) var_2);
    }

    *var_17 = ((/* implicit */val<unsigned int>) min((var_13), (1798953961)));
    *var_18 = ((/* implicit */val<bool>) max((*var_18), (((/* implicit */val<bool>) max((var_12), (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) ((val<short>) var_5)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)108;
unsigned int var_2 = 1469522503U;
int var_5 = -1168080461;
unsigned int var_6 = 1320109445U;
bool var_8 = (bool)0;
bool var_10 = (bool)0;
int var_11 = 1961490217;
unsigned long long int var_12 = 13784379392900316361ULL;
int var_13 = 56273232;
int zero = 0;
long long int var_14 = -4525706814959762135LL;
long long int var_15 = 7970040358419201084LL;
bool var_16 = (bool)0;
unsigned int var_17 = 1305024917U;
bool var_18 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != -4525706814959762135LL;
    value_mismatch |= var_15 != 7970040358419201084LL;
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != 56273232U;
    value_mismatch |= var_18 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_5, var_6, var_8, var_10, var_11, var_12, var_13, zero, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
