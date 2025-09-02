/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9408
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9408
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
void test(val<short> var_3, val<int> var_9, val<int> zero, val<unsigned long long int*> var_13, val<unsigned short*> var_14, val<signed char*> var_15) {
    *var_13 = ((/* implicit */val<unsigned long long int>) var_3);
    *var_14 = ((/* implicit */val<unsigned short>) (-((-(((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_3)))))))));
    *var_15 = ((/* implicit */val<signed char>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)18599;
int var_9 = 761313330;
int zero = 0;
unsigned long long int var_13 = 12746264301030490341ULL;
unsigned short var_14 = (unsigned short)8838;
signed char var_15 = (signed char)-98;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 18599ULL;
    value_mismatch |= var_14 != (unsigned short)0;
    value_mismatch |= var_15 != (signed char)50;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_9, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
