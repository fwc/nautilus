/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6607
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6607
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
void test(val<signed char> var_7, val<signed char> var_11, val<int> zero, val<signed char*> var_18, val<signed char*> var_19) {
    *var_18 = ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) var_7))));
    *var_19 = var_11;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-81;
signed char var_11 = (signed char)7;
int zero = 0;
signed char var_18 = (signed char)-18;
signed char var_19 = (signed char)96;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)0;
    value_mismatch |= var_19 != (signed char)7;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_11, zero, &var_18, &var_19);
  checksum();
}
