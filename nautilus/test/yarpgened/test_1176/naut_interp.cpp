/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1176
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1176
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
void test(val<signed char> var_4, val<short> var_7, val<int> zero, val<signed char*> var_11, val<short*> var_12) {
    *var_11 = ((/* implicit */val<signed char>) ((((/* implicit */val<unsigned long long int>) (~((~(-1073741824)))))) ^ ((~((~(9313495450091516604ULL)))))));
    *var_12 = ((/* implicit */val<short>) max((*var_12), (((/* implicit */val<short>) (+(((/* implicit */val<int>) max((var_7), (((/* implicit */val<short>) var_4))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-20;
short var_7 = (short)-6176;
int zero = 0;
signed char var_11 = (signed char)59;
short var_12 = (short)-31124;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (signed char)-68;
    value_mismatch |= var_12 != (short)-20;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_7, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
