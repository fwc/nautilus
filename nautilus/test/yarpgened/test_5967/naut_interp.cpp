/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5967
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5967
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
void test(val<signed char> var_2, val<unsigned short> var_3, val<unsigned int> var_8, val<int> zero, val<unsigned long long int*> var_10, val<long long int*> var_11) {
    *var_10 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_3)) >> (((16167784536604941756ULL) - (16167784536604941729ULL)))));
    *var_11 = ((/* implicit */val<long long int>) min((var_8), (((/* implicit */val<unsigned int>) min((((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) 2431238520U))))), (min((((/* implicit */val<signed char>) (val<bool>)1)), (var_2))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)98;
unsigned short var_3 = (unsigned short)17098;
unsigned int var_8 = 2357038368U;
int zero = 0;
unsigned long long int var_10 = 12805380852917070277ULL;
long long int var_11 = -8368957067066876132LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 0ULL;
    value_mismatch |= var_11 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_8, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
