/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4375
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4375
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
void test(val<short> var_0, val<unsigned long long int> var_1, val<signed char> var_6, val<int> zero, val<short*> var_17, val<signed char*> var_18) {
    *var_17 *= var_0;
    *var_18 -= ((/* implicit */val<signed char>) ((val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<signed char>)40)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)0))) : (var_1)))) ? (((/* implicit */val<int>) var_6)) : (((/* implicit */val<int>) var_6)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6900;
unsigned long long int var_1 = 6994047864496624853ULL;
signed char var_6 = (signed char)-21;
int zero = 0;
short var_17 = (short)20538;
signed char var_18 = (signed char)-110;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (short)-23368;
    value_mismatch |= var_18 != (signed char)-89;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_6, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
