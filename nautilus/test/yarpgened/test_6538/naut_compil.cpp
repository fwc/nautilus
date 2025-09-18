/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6538
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6538
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
void test(val<long long int> var_7, val<int> zero, val<signed char*> var_11, val<unsigned long long int*> var_12) {
    *var_11 += ((/* implicit */val<signed char>) ((((((/* implicit */val<int>) (val<signed char>)105)) == (((/* implicit */val<int>) (val<unsigned short>)4095)))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)62517))) : (4294967276U)));
    *var_12 = ((/* implicit */val<unsigned long long int>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 6204681202898456168LL;
int zero = 0;
signed char var_11 = (signed char)25;
unsigned long long int var_12 = 9079481309631504048ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (signed char)5;
    value_mismatch |= var_12 != 6204681202898456168ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, zero, &var_11, &var_12);
  checksum();
}
