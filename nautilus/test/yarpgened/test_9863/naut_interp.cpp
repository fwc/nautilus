/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9863
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9863
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
void test(val<unsigned int> var_5, val<short> var_8, val<bool> var_9, val<unsigned int> var_12, val<int> zero, val<long long int*> var_15, val<unsigned long long int*> var_16) {
    *var_15 = ((/* implicit */val<long long int>) 1901143295U);
    *var_16 = ((/* implicit */val<unsigned long long int>) max((*var_16), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_5)) ? (((((/* implicit */val<bool>) 5592258293848645715LL)) ? (1656095930U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)32))))) : (var_12)))) ? (((/* implicit */val<int>) (val<unsigned char>)10)) : (((/* implicit */val<int>) max((min((var_8), (var_8))), (((/* implicit */val<short>) var_9))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3659062956U;
short var_8 = (short)25508;
bool var_9 = (bool)0;
unsigned int var_12 = 1368046844U;
int zero = 0;
long long int var_15 = 2877577951782476583LL;
unsigned long long int var_16 = 13339387114334553418ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 1901143295LL;
    value_mismatch |= var_16 != 13339387114334553418ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_8, var_9, var_12, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
