/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7211
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7211
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
void test(val<unsigned short> var_1, val<unsigned int> var_8, val<short> var_9, val<unsigned int> var_10, val<int> zero, val<short*> var_15, val<signed char*> var_16) {
    *var_15 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_9))) : (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1))) + (var_10)))));
    *var_16 = ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) var_8))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21372;
unsigned int var_8 = 2575360925U;
short var_9 = (short)-20138;
unsigned int var_10 = 3380056461U;
int zero = 0;
short var_15 = (short)-11206;
signed char var_16 = (signed char)-94;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)-20138;
    value_mismatch |= var_16 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_8, var_9, var_10, zero, &var_15, &var_16);
  checksum();
}
