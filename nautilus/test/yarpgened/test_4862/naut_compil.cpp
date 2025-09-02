/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4862
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4862
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
void test(val<signed char> var_0, val<short> var_5, val<int> zero, val<signed char*> var_11, val<bool*> var_12, val<short*> var_13) {
    *var_11 |= ((/* implicit */val<signed char>) max((((/* implicit */val<long long int>) (~(max((((/* implicit */val<int>) var_0)), ((-2147483647 - 1))))))), (((val<long long int>) var_5))));
    *var_12 = ((/* implicit */val<bool>) max((*var_12), (((/* implicit */val<bool>) (+(((/* implicit */val<int>) (val<short>)9202)))))));
    *var_13 ^= ((/* implicit */val<short>) (val<signed char>)107);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-106;
short var_5 = (short)11394;
int zero = 0;
signed char var_11 = (signed char)27;
bool var_12 = (bool)0;
short var_13 = (short)27417;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (signed char)-101;
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != (short)27506;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
