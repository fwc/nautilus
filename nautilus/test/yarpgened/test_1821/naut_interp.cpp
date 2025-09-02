/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1821
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1821
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
void test(val<unsigned short> var_2, val<int> var_5, val<long long int> var_16, val<int> zero, val<unsigned char*> var_19, val<long long int*> var_20, val<signed char*> var_21) {
    *var_19 = ((/* implicit */val<unsigned char>) min((*var_19), (((/* implicit */val<unsigned char>) ((max((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_5)) || (((/* implicit */val<bool>) var_16))))), ((~(3650485896U))))) + (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)-24))))))));
    *var_20 = ((/* implicit */val<long long int>) (+(((/* implicit */val<int>) var_2))));
    *var_21 = ((/* implicit */val<signed char>) (-(((/* implicit */val<int>) var_2))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)48068;
int var_5 = -558735639;
long long int var_16 = -1351002483156441247LL;
int zero = 0;
unsigned char var_19 = (unsigned char)196;
long long int var_20 = 4141949851586333168LL;
signed char var_21 = (signed char)106;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)95;
    value_mismatch |= var_20 != 48068LL;
    value_mismatch |= var_21 != (signed char)60;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_16, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
