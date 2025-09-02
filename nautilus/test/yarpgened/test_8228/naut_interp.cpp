/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8228
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8228
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
void test(val<signed char> var_2, val<int> var_7, val<unsigned int> var_11, val<int> zero, val<unsigned char*> var_14, val<long long int*> var_15) {
    *var_14 = ((/* implicit */val<unsigned char>) max((((/* implicit */val<unsigned long long int>) (val<short>)7101)), (((((/* implicit */val<bool>) ((var_7) + (((/* implicit */val<int>) var_2))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))) : (((((/* implicit */val<bool>) (val<unsigned short>)64032)) ? (8018020462500733867ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2)))))))));
    *var_15 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<int>) (val<signed char>)87)) : (((((/* implicit */val<int>) (val<short>)7101)) << (((((/* implicit */val<int>) (val<unsigned char>)78)) - (78)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-11;
int var_7 = 793694050;
unsigned int var_11 = 4215500805U;
int zero = 0;
unsigned char var_14 = (unsigned char)106;
long long int var_15 = 3946701558376852983LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)189;
    value_mismatch |= var_15 != 87LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_7, var_11, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
