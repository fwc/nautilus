/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5152
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5152
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
void test(val<unsigned char> var_2, val<bool> var_13, val<unsigned int> var_14, val<unsigned int> var_17, val<unsigned char> var_18, val<int> zero, val<long long int*> var_19, val<unsigned int*> var_20) {
    *var_19 = ((/* implicit */val<long long int>) ((val<unsigned long long int>) (~(((/* implicit */val<int>) var_2)))));
    *var_20 = (+(((((/* implicit */val<bool>) min(((val<signed char>)31), (((/* implicit */val<signed char>) var_13))))) ? (((((/* implicit */val<bool>) var_17)) ? (var_14) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_18))))) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_13)) - (((/* implicit */val<int>) (val<unsigned char>)0))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)4;
bool var_13 = (bool)1;
unsigned int var_14 = 1095849766U;
unsigned int var_17 = 4030104064U;
unsigned char var_18 = (unsigned char)72;
int zero = 0;
long long int var_19 = -8149331807267494018LL;
unsigned int var_20 = 2250002311U;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != -5LL;
    value_mismatch |= var_20 != 1095849766U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_13, var_14, var_17, var_18, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
