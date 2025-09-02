/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 748
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=748
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
void test(val<signed char> var_2, val<long long int> var_8, val<bool> var_10, val<long long int> var_11, val<int> zero, val<long long int*> var_14, val<signed char*> var_15, val<long long int*> var_16) {
    *var_14 = ((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) var_11))));
    *var_15 += var_2;
    *var_16 = (((+(((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_10))) + (6433847221144308380LL))))) + ((+(((((/* implicit */val<bool>) 439094285U)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_10))) : (var_8))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)7;
long long int var_8 = 7878643925137367822LL;
bool var_10 = (bool)0;
long long int var_11 = 5932855995530258358LL;
int zero = 0;
long long int var_14 = -6895048191836125496LL;
signed char var_15 = (signed char)-119;
long long int var_16 = -5606380817558329677LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 0LL;
    value_mismatch |= var_15 != (signed char)-112;
    value_mismatch |= var_16 != 6433847221144308380LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_8, var_10, var_11, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
