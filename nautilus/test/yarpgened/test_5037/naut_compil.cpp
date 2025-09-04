/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5037
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5037
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
void test(val<unsigned long long int> var_1, val<signed char> var_4, val<bool> var_9, val<unsigned long long int> var_10, val<unsigned short> var_11, val<int> zero, val<unsigned short*> var_13, val<unsigned int*> var_14) {
    *var_13 = ((/* implicit */val<unsigned short>) var_4);
    *var_14 = ((/* implicit */val<unsigned int>) max((*var_14), (((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 2780581923U)) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) var_9))))) ? (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) (val<unsigned short>)11054))))) : (min((var_1), (var_10)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14519487721147272910ULL;
signed char var_4 = (signed char)2;
bool var_9 = (bool)1;
unsigned long long int var_10 = 1883700820633079400ULL;
unsigned short var_11 = (unsigned short)31534;
int zero = 0;
unsigned short var_13 = (unsigned short)6499;
unsigned int var_14 = 2876598340U;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)2;
    value_mismatch |= var_14 != 2876598340U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_9, var_10, var_11, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
