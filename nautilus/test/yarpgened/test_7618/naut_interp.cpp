/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7618
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7618
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
void test(val<long long int> var_0, val<short> var_6, val<signed char> var_12, val<short> var_19, val<int> zero, val<int*> var_20, val<int*> var_21, val<short*> var_22, val<signed char*> var_23) {
    *var_20 -= ((/* implicit */val<int>) var_6);
    *var_21 = ((/* implicit */val<int>) var_0);
    *var_22 = ((/* implicit */val<short>) (~(((/* implicit */val<int>) var_19))));
    *var_23 = ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) var_12))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8840598442222223541LL;
short var_6 = (short)-28135;
signed char var_12 = (signed char)-19;
short var_19 = (short)-11630;
int zero = 0;
int var_20 = -2129100032;
int var_21 = 591956572;
short var_22 = (short)3290;
signed char var_23 = (signed char)95;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != -2129071897;
    value_mismatch |= var_21 != 1769537355;
    value_mismatch |= var_22 != (short)11629;
    value_mismatch |= var_23 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, var_12, var_19, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
