/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2922
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2922
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
void test(val<long long int> var_7, val<short> var_9, val<long long int> var_10, val<int> var_12, val<int> var_15, val<bool> var_16, val<int> zero, val<long long int*> var_18, val<bool*> var_19, val<unsigned long long int*> var_20) {
    *var_18 = ((((/* implicit */val<bool>) ((var_10) >> (((var_12) - (1368588111)))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9))) : (var_7));
    *var_19 = ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)-10))) != (((((/* implicit */val<bool>) var_12)) ? (((((/* implicit */val<bool>) var_15)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9))) : (0ULL))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)-13))) == (18446744073709551615ULL))))))));
    *var_20 = ((/* implicit */val<unsigned long long int>) ((val<signed char>) (+(((var_10) >> (((/* implicit */val<int>) var_16)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -4028308650125010559LL;
short var_9 = (short)-1651;
long long int var_10 = 7673833170860149453LL;
int var_12 = 1368588154;
int var_15 = -600897574;
bool var_16 = (bool)1;
int zero = 0;
long long int var_18 = -877998832142550924LL;
bool var_19 = (bool)0;
unsigned long long int var_20 = 5449293600445298372ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != -1651LL;
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != 102ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_9, var_10, var_12, var_15, var_16, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
