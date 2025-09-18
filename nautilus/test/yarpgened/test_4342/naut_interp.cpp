/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4342
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4342
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
void test(val<bool> var_0, val<short> var_1, val<long long int> var_3, val<short> var_4, val<short> var_8, val<unsigned long long int> var_9, val<int> zero, val<long long int*> var_10, val<unsigned int*> var_11, val<unsigned int*> var_12, val<unsigned long long int*> var_13) {
    *var_10 = ((/* implicit */val<long long int>) (+(((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_8))))) ^ (((var_0) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) var_8))))))));
    *var_11 = ((/* implicit */val<unsigned int>) 7548707641316782651ULL);
    *var_12 = ((/* implicit */val<unsigned int>) var_1);
    *var_13 |= ((/* implicit */val<unsigned long long int>) min(((-(((/* implicit */val<int>) var_8)))), (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<unsigned long long int>) var_3)) : (var_9)))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_4))))) : (((/* implicit */val<int>) max((var_1), (((/* implicit */val<short>) var_0)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
short var_1 = (short)-1031;
long long int var_3 = -7016717063270888034LL;
short var_4 = (short)-81;
short var_8 = (short)-26652;
unsigned long long int var_9 = 4177212508110392903ULL;
int zero = 0;
long long int var_10 = -1274478377549938671LL;
unsigned int var_11 = 3442197197U;
unsigned int var_12 = 3241040708U;
unsigned long long int var_13 = 12183162777493942759ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != -26652LL;
    value_mismatch |= var_11 != 3791041083U;
    value_mismatch |= var_12 != 4294966265U;
    value_mismatch |= var_13 != 12183162777493942759ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
}
