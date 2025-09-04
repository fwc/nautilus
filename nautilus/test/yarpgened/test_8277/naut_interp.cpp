/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8277
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8277
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
void test(val<unsigned char> var_2, val<unsigned int> var_4, val<signed char> var_7, val<int> zero, val<long long int*> var_10, val<unsigned int*> var_11, val<unsigned int*> var_12) {
    *var_10 = ((/* implicit */val<long long int>) (~(((/* implicit */val<int>) var_2))));
    *var_11 *= var_4;
    *var_12 = ((/* implicit */val<unsigned int>) (+(((((/* implicit */val<bool>) 1988388346U)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) var_7))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)12;
unsigned int var_4 = 4236004152U;
signed char var_7 = (signed char)-115;
int zero = 0;
long long int var_10 = -3870191045487479888LL;
unsigned int var_11 = 2611724470U;
unsigned int var_12 = 971210312U;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != -13LL;
    value_mismatch |= var_11 != 3744430544U;
    value_mismatch |= var_12 != 1U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_7, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
