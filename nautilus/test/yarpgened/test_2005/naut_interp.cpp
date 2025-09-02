/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2005
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2005
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
void test(val<int> var_3, val<int> var_5, val<unsigned short> var_7, val<long long int> var_11, val<long long int> var_12, val<int> zero, val<long long int*> var_13, val<bool*> var_14, val<signed char*> var_15, val<unsigned int*> var_16) {
    *var_13 = ((/* implicit */val<long long int>) 2068050227);
    *var_14 *= ((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((((/* implicit */val<int>) var_7)), (2047)))) ? (((((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<long long int>) 4294967295U)) : (var_12))) + (min((var_11), (((/* implicit */val<long long int>) var_3)))))) : (((/* implicit */val<long long int>) max((((4294967295U) + (8U))), (((/* implicit */val<unsigned int>) var_3)))))));
    *var_15 = ((/* implicit */val<signed char>) var_5);
    *var_16 *= ((/* implicit */val<unsigned int>) (val<bool>)0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 2121576529;
int var_5 = 228331498;
unsigned short var_7 = (unsigned short)43534;
long long int var_11 = 1577364267117120213LL;
long long int var_12 = 8418711346649575640LL;
int zero = 0;
long long int var_13 = 3048880416607460865LL;
bool var_14 = (bool)1;
signed char var_15 = (signed char)-54;
unsigned int var_16 = 3413707393U;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 2068050227LL;
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != (signed char)-22;
    value_mismatch |= var_16 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_7, var_11, var_12, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
