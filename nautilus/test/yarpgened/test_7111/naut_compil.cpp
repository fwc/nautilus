/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7111
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7111
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
void test(val<signed char> var_0, val<short> var_3, val<unsigned char> var_6, val<short> var_7, val<unsigned char> var_9, val<int> zero, val<short*> var_11, val<signed char*> var_12, val<signed char*> var_13) {
    *var_11 = ((/* implicit */val<short>) max(((+(((/* implicit */val<int>) var_0)))), (((/* implicit */val<int>) var_9))));
    *var_12 = ((/* implicit */val<signed char>) var_7);
    *var_13 = ((/* implicit */val<signed char>) (~(((/* implicit */val<int>) ((((/* implicit */val<int>) var_6)) < (((/* implicit */val<int>) max((((/* implicit */val<short>) (val<signed char>)62)), (var_3)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)26;
short var_3 = (short)-13720;
unsigned char var_6 = (unsigned char)26;
short var_7 = (short)-7822;
unsigned char var_9 = (unsigned char)182;
int zero = 0;
short var_11 = (short)9163;
signed char var_12 = (signed char)-59;
signed char var_13 = (signed char)86;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (short)182;
    value_mismatch |= var_12 != (signed char)114;
    value_mismatch |= var_13 != (signed char)-2;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_6, var_7, var_9, zero, &var_11, &var_12, &var_13);
  checksum();
}
