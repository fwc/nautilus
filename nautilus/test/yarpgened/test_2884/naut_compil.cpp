/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2884
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2884
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
void test(val<int> zero, val<unsigned char*> var_20, val<signed char*> var_21) {
    *var_20 = ((/* implicit */val<unsigned char>) ((val<int>) ((val<int>) ((((/* implicit */val<bool>) 1891253001)) ? (-8723511586100068976LL) : (((/* implicit */val<long long int>) 957747215))))));
    *var_21 = ((/* implicit */val<signed char>) min((max((-957747219), (((/* implicit */val<int>) (val<short>)(-32767 - 1))))), (((/* implicit */val<int>) ((val<short>) ((val<signed char>) -957747216))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned char var_20 = (unsigned char)4;
signed char var_21 = (signed char)1;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned char)144;
    value_mismatch |= var_21 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
