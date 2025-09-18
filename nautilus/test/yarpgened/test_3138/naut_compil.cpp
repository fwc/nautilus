/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3138
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3138
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
void test(val<signed char> var_0, val<unsigned long long int> var_3, val<unsigned int> var_6, val<unsigned long long int> var_8, val<unsigned int> var_9, val<int> zero, val<int*> var_10, val<bool*> var_11, val<bool*> var_12, val<long long int*> var_13, val<unsigned long long int*> var_14) {
    *var_10 = ((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_0)) ? ((+(var_8))) : (((var_3) * (var_8))))))));
    *var_11 = ((/* implicit */val<bool>) max((*var_11), (((/* implicit */val<bool>) var_9))));
    *var_12 = ((/* implicit */val<bool>) var_0);
    *var_13 ^= ((/* implicit */val<long long int>) var_6);
    *var_14 = ((/* implicit */val<unsigned long long int>) 3007819365U);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)50;
unsigned long long int var_3 = 845235452226637267ULL;
unsigned int var_6 = 986885121U;
unsigned long long int var_8 = 13760560588943292818ULL;
unsigned int var_9 = 1551344251U;
int zero = 0;
int var_10 = 1483940349;
bool var_11 = (bool)1;
bool var_12 = (bool)0;
long long int var_13 = -7255045220103466210LL;
unsigned long long int var_14 = 9681809096868915989ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 0;
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != -7255045220536615137LL;
    value_mismatch |= var_14 != 3007819365ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_6, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13, &var_14);
  checksum();
}
