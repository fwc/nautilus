/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4808
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4808
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
void test(val<short> var_10, val<bool> var_14, val<int> zero, val<long long int*> var_17, val<unsigned long long int*> var_18, val<signed char*> var_19) {
    *var_17 = ((/* implicit */val<long long int>) var_14);
    *var_18 = ((/* implicit */val<unsigned long long int>) max((*var_18), (max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (-9223372036854775807LL - 1LL))) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) (val<bool>)1))))) ? ((+(((/* implicit */val<int>) (val<short>)-25208)))) : (((/* implicit */val<int>) (val<bool>)1))))), (((max((6104796286335686105ULL), (((/* implicit */val<unsigned long long int>) var_14)))) - (16902006511392188391ULL)))))));
    *var_19 |= ((/* implicit */val<signed char>) max((-10), (((/* implicit */val<int>) (val<short>)-3327))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_10 = (short)-30356;
bool var_14 = (bool)0;
int zero = 0;
long long int var_17 = 5510277465501357963LL;
unsigned long long int var_18 = 17758928606711963213ULL;
signed char var_19 = (signed char)81;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 0LL;
    value_mismatch |= var_18 != 18446744073709526408ULL;
    value_mismatch |= var_19 != (signed char)-9;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_10, var_14, zero, &var_17, &var_18, &var_19);
  checksum();
}
