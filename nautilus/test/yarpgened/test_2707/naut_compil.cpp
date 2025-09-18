/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2707
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2707
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
void test(val<unsigned int> var_0, val<signed char> var_8, val<unsigned int> var_12, val<int> zero, val<int*> var_14, val<signed char*> var_15) {
    *var_14 = ((/* implicit */val<int>) var_8);
    *var_15 ^= ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((val<signed char>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)-65))) * (var_12))))) ? (max((var_0), (((/* implicit */val<unsigned int>) var_8)))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)22248)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 247780592U;
signed char var_8 = (signed char)-109;
unsigned int var_12 = 417774473U;
int zero = 0;
int var_14 = -1745465285;
signed char var_15 = (signed char)124;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != -109;
    value_mismatch |= var_15 != (signed char)-17;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_8, var_12, zero, &var_14, &var_15);
  checksum();
}
