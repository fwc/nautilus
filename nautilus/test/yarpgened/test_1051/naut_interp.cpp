/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1051
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1051
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
void test(val<long long int> var_3, val<unsigned char> var_6, val<long long int> var_9, val<unsigned long long int> var_15, val<bool> var_18, val<int> var_19, val<int> zero, val<unsigned int*> var_20, val<unsigned char*> var_21, val<long long int*> var_22, val<unsigned int*> var_23) {
    *var_20 = ((/* implicit */val<unsigned int>) var_19);
    *var_21 = ((/* implicit */val<unsigned char>) 4294967281U);
    *var_22 ^= ((/* implicit */val<long long int>) (-((-(((/* implicit */val<int>) (val<unsigned short>)2427))))));
    *var_23 *= ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((((/* implicit */val<bool>) 2147483647)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)9))) : (var_15))) * (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_18))) >= (var_9)))))))) ? (((var_3) + (((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_15)))))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_6)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8362551491200125626LL;
unsigned char var_6 = (unsigned char)123;
long long int var_9 = -5928474494190665851LL;
unsigned long long int var_15 = 1974018647421642796ULL;
bool var_18 = (bool)1;
int var_19 = -1728234182;
int zero = 0;
unsigned int var_20 = 1004831486U;
unsigned char var_21 = (unsigned char)28;
long long int var_22 = -1050684927565950128LL;
unsigned int var_23 = 2180608653U;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 2566733114U;
    value_mismatch |= var_21 != (unsigned char)241;
    value_mismatch |= var_22 != -1050684927565948373LL;
    value_mismatch |= var_23 != 119422066U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_6, var_9, var_15, var_18, var_19, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
}
