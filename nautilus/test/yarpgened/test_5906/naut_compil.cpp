/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5906
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5906
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
void test(val<unsigned short> var_3, val<bool> var_4, val<bool> var_7, val<int> var_8, val<unsigned short> var_9, val<unsigned long long int> var_15, val<int> zero, val<unsigned short*> var_16, val<unsigned long long int*> var_17, val<unsigned int*> var_18) {
    *var_16 = ((/* implicit */val<unsigned short>) var_8);
    *var_17 = ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 5570512506854561350ULL)) ? (((/* implicit */val<unsigned long long int>) ((9U) - (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_9)))))) : (var_15)))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3))) : (((var_4) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_7))) : (var_15))));
    *var_18 = ((/* implicit */val<unsigned int>) ((val<int>) var_9));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)46857;
bool var_4 = (bool)0;
bool var_7 = (bool)1;
int var_8 = 115570797;
unsigned short var_9 = (unsigned short)40282;
unsigned long long int var_15 = 16656445332758912731ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)31187;
unsigned long long int var_17 = 8937982400840850571ULL;
unsigned int var_18 = 1437250051U;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned short)30829;
    value_mismatch |= var_17 != 46857ULL;
    value_mismatch |= var_18 != 40282U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_7, var_8, var_9, var_15, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
