/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7564
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7564
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
void test(val<unsigned long long int> var_10, val<int> var_12, val<short> var_14, val<int> zero, val<unsigned int*> var_15, val<unsigned char*> var_16) {
    *var_15 = ((/* implicit */val<unsigned int>) max((((/* implicit */val<unsigned long long int>) min((((/* implicit */val<int>) min((((/* implicit */val<short>) (val<unsigned char>)18)), (var_14)))), (max((var_12), (((/* implicit */val<int>) (val<short>)-32766))))))), (((((/* implicit */val<bool>) ((val<long long int>) 0U))) ? (((val<unsigned long long int>) -1LL)) : (var_10)))));
    *var_16 = ((/* implicit */val<unsigned char>) (+(((/* implicit */val<int>) (val<signed char>)25))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 11883733907486200577ULL;
int var_12 = 1409564665;
short var_14 = (short)-11309;
int zero = 0;
unsigned int var_15 = 83620774U;
unsigned char var_16 = (unsigned char)29;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 4294955987U;
    value_mismatch |= var_16 != (unsigned char)25;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_10, var_12, var_14, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
