/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 53
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=53
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
void test(val<unsigned long long int> var_4, val<long long int> var_7, val<bool> var_9, val<unsigned short> var_13, val<bool> var_14, val<int> zero, val<long long int*> var_16, val<unsigned long long int*> var_17, val<long long int*> var_18, val<bool*> var_19) {
    *var_16 = ((val<long long int>) (val<signed char>)35);
    *var_17 = ((/* implicit */val<unsigned long long int>) min((*var_17), (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) var_14)))))));
    *var_18 = ((/* implicit */val<long long int>) (-(((/* implicit */val<int>) min((((/* implicit */val<short>) ((var_7) <= (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9)))))), (min((((/* implicit */val<short>) (val<bool>)1)), ((val<short>)30420))))))));
    *var_19 = ((/* implicit */val<bool>) ((((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)35))) != (((var_4) >> (((/* implicit */val<int>) (val<unsigned char>)29)))))) ? (((/* implicit */val<int>) var_13)) : (((((/* implicit */val<int>) (val<signed char>)-33)) | (max((((/* implicit */val<int>) (val<unsigned char>)226)), (52439404)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 14081986225262834844ULL;
long long int var_7 = 7299925502657410522LL;
bool var_9 = (bool)1;
unsigned short var_13 = (unsigned short)48444;
bool var_14 = (bool)0;
int zero = 0;
long long int var_16 = 1668468523608756532LL;
unsigned long long int var_17 = 2697241229101357693ULL;
long long int var_18 = -5272316761837591139LL;
bool var_19 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 35LL;
    value_mismatch |= var_17 != 2697241229101357693ULL;
    value_mismatch |= var_18 != 0LL;
    value_mismatch |= var_19 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_7, var_9, var_13, var_14, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
}
