/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 305
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=305
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
void test(val<unsigned long long int> var_5, val<short> var_10, val<int> zero, val<unsigned int*> var_15, val<short*> var_16, val<unsigned long long int*> var_17) {
    *var_15 *= ((/* implicit */val<unsigned int>) (val<signed char>)-10);
    *var_16 = ((/* implicit */val<short>) min((*var_16), (((/* implicit */val<short>) (-(((val<long long int>) ((var_5) != (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)-16714)))))))))));
    *var_17 &= ((/* implicit */val<unsigned long long int>) var_10);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 3468182395945769118ULL;
short var_10 = (short)22545;
int zero = 0;
unsigned int var_15 = 1311147574U;
short var_16 = (short)30083;
unsigned long long int var_17 = 9278340301617122686ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 4068393444U;
    value_mismatch |= var_16 != (short)-1;
    value_mismatch |= var_17 != 18448ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_10, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
