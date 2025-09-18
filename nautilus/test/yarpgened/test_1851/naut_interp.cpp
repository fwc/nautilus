/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1851
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1851
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
void test(val<unsigned long long int> var_0, val<signed char> var_1, val<signed char> var_4, val<int> zero, val<signed char*> var_11, val<int*> var_12) {
    *var_11 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) (-(((var_0) + (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)214)))))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4))) : ((-(var_0)))));
    *var_12 = ((/* implicit */val<int>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 261812571349971438ULL;
signed char var_1 = (signed char)37;
signed char var_4 = (signed char)-24;
int zero = 0;
signed char var_11 = (signed char)-14;
int var_12 = 666933548;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (signed char)-24;
    value_mismatch |= var_12 != 37;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, zero, &var_11, &var_12);
  checksum();
}
