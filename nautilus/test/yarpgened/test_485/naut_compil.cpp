/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 485
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=485
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
void test(val<signed char> var_13, val<long long int> var_14, val<int> zero, val<long long int*> var_15, val<long long int*> var_16) {
    *var_15 = var_14;
    *var_16 = ((/* implicit */val<long long int>) max(((~((+(((/* implicit */val<int>) (val<signed char>)-5)))))), (((/* implicit */val<int>) var_13))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_13 = (signed char)-62;
long long int var_14 = -3525380407299598637LL;
int zero = 0;
long long int var_15 = -6057547619127692474LL;
long long int var_16 = -3225325698682950048LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != -3525380407299598637LL;
    value_mismatch |= var_16 != 4LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_13, var_14, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
