/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8985
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8985
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
void test(val<unsigned int> var_0, val<unsigned long long int> var_2, val<int> var_3, val<unsigned long long int> var_5, val<long long int> var_7, val<bool> var_12, val<int> zero, val<long long int*> var_13, val<bool*> var_14) {
    *var_13 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((var_2) - (((/* implicit */val<unsigned long long int>) 2473091950U))))) ? (var_2) : (((((/* implicit */val<bool>) 10881296128568621357ULL)) ? (var_5) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)231)))))))) ? (min((7565447945140930254ULL), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) (val<short>)23683)) >> (((/* implicit */val<int>) (val<bool>)1))))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<bool>) (~(((/* implicit */val<int>) (val<bool>)1)))))))));
    *var_14 = ((/* implicit */val<bool>) ((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))) : (3946053613180784694ULL)))) ? (min((var_3), (((/* implicit */val<int>) (val<unsigned char>)28)))) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<short>)19675)) || (var_12))))))) | (var_7)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3746729754U;
unsigned long long int var_2 = 3965315875351792285ULL;
int var_3 = -744420159;
unsigned long long int var_5 = 16145829735047176861ULL;
long long int var_7 = -2686645546802596331LL;
bool var_12 = (bool)1;
int zero = 0;
long long int var_13 = -5406862286500807917LL;
bool var_14 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 11841LL;
    value_mismatch |= var_14 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_5, var_7, var_12, zero, &var_13, &var_14);
  checksum();
}
