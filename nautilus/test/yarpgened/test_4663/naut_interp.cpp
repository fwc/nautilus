/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4663
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4663
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
void test(val<unsigned short> var_10, val<int> var_18, val<int> zero, val<signed char*> var_19, val<signed char*> var_20) {
    *var_19 = ((/* implicit */val<signed char>) -1033577343845173874LL);
    *var_20 |= ((/* implicit */val<signed char>) (!(((((/* implicit */val<bool>) var_10)) && (((/* implicit */val<bool>) var_18))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)15873;
int var_18 = -1764695182;
int zero = 0;
signed char var_19 = (signed char)62;
signed char var_20 = (signed char)-126;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)-114;
    value_mismatch |= var_20 != (signed char)-126;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_10, var_18, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
