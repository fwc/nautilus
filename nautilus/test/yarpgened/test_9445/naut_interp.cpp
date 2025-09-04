/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9445
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9445
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
void test(val<unsigned short> var_2, val<int> var_3, val<unsigned short> var_7, val<unsigned long long int> var_9, val<int> zero, val<short*> var_17, val<unsigned int*> var_18) {
    *var_17 = ((/* implicit */val<short>) (!(((/* implicit */val<bool>) var_9))));
    *var_18 = ((/* implicit */val<unsigned int>) ((var_3) != (((/* implicit */val<int>) max((var_2), (max((((/* implicit */val<unsigned short>) (val<signed char>)-17)), (var_7))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)41099;
int var_3 = -1698339977;
unsigned short var_7 = (unsigned short)52170;
unsigned long long int var_9 = 10008104073444309038ULL;
int zero = 0;
short var_17 = (short)-87;
unsigned int var_18 = 1369947603U;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (short)0;
    value_mismatch |= var_18 != 1U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_7, var_9, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
