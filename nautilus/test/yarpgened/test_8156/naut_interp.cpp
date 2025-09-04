/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8156
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8156
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
void test(val<long long int> var_11, val<short> var_12, val<bool> var_13, val<bool> var_14, val<int> zero, val<short*> var_15, val<signed char*> var_16, val<long long int*> var_17) {
    *var_15 = ((/* implicit */val<short>) var_14);
    *var_16 = ((/* implicit */val<signed char>) max((*var_16), (((/* implicit */val<signed char>) var_12))));
    *var_17 = ((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) ((val<signed char>) ((var_14) ? (var_11) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_13)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_11 = 4195579541593465426LL;
short var_12 = (short)-6201;
bool var_13 = (bool)0;
bool var_14 = (bool)1;
int zero = 0;
short var_15 = (short)20498;
signed char var_16 = (signed char)-54;
long long int var_17 = 8253004916531204239LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)1;
    value_mismatch |= var_16 != (signed char)-54;
    value_mismatch |= var_17 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_11, var_12, var_13, var_14, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
