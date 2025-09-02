/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4736
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4736
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
void test(val<unsigned short> var_0, val<long long int> var_2, val<unsigned short> var_3, val<short> var_5, val<unsigned short> var_7, val<int> zero, val<short*> var_11, val<signed char*> var_12) {
    *var_11 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) var_3))))) : (var_2)));
    *var_12 = ((/* implicit */val<signed char>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10134;
long long int var_2 = 985335087807242989LL;
unsigned short var_3 = (unsigned short)8131;
short var_5 = (short)1873;
unsigned short var_7 = (unsigned short)49092;
int zero = 0;
short var_11 = (short)11144;
signed char var_12 = (signed char)-58;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (short)-16444;
    value_mismatch |= var_12 != (signed char)81;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_5, var_7, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
