/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5428
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5428
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
void test(val<signed char> var_0, val<signed char> var_3, val<signed char> var_8, val<signed char> var_9, val<signed char> var_14, val<signed char> var_15, val<int> zero, val<long long int*> var_18, val<signed char*> var_19) {
    *var_18 = ((/* implicit */val<long long int>) min((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) var_8))))) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) max((var_14), (var_0)))))), ((-(((/* implicit */val<int>) var_9))))));
    *var_19 |= var_15;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-36;
signed char var_3 = (signed char)-18;
signed char var_8 = (signed char)85;
signed char var_9 = (signed char)-105;
signed char var_14 = (signed char)45;
signed char var_15 = (signed char)102;
int zero = 0;
long long int var_18 = 2620789666766823507LL;
signed char var_19 = (signed char)-25;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != -18LL;
    value_mismatch |= var_19 != (signed char)-25;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_8, var_9, var_14, var_15, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
