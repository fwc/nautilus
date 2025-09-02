/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2933
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2933
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
void test(val<long long int> var_0, val<unsigned long long int> var_2, val<unsigned int> var_5, val<int> var_7, val<unsigned char> var_8, val<unsigned long long int> var_10, val<unsigned long long int> var_12, val<int> zero, val<unsigned short*> var_18, val<unsigned long long int*> var_19) {
    *var_18 = ((/* implicit */val<unsigned short>) ((((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<unsigned long long int>) (+(0U)))) : (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)227))) / (var_2))))) >= (((/* implicit */val<unsigned long long int>) 4294967295U))));
    *var_19 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_8))) & (((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<long long int>) 0U)) : (9223372036854775807LL)))))) ? (((var_0) / (((/* implicit */val<long long int>) (+(var_7)))))) : (((/* implicit */val<long long int>) var_5))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6083691595704125516LL;
unsigned long long int var_2 = 5374957050694129744ULL;
unsigned int var_5 = 2359560961U;
int var_7 = -1698812309;
unsigned char var_8 = (unsigned char)123;
unsigned long long int var_10 = 4693980555642876558ULL;
unsigned long long int var_12 = 8753413886977824352ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)34826;
unsigned long long int var_19 = 14388148330305623742ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)0;
    value_mismatch |= var_19 != 2359560961ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_5, var_7, var_8, var_10, var_12, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
