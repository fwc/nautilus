/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7966
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7966
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
void test(val<short> var_11, val<int> zero, val<long long int*> var_12, val<signed char*> var_13) {
    *var_12 = ((/* implicit */val<long long int>) max((var_11), (var_11)));
    *var_13 = ((/* implicit */val<signed char>) min((*var_13), (((/* implicit */val<signed char>) (+(max((((/* implicit */val<long long int>) (-(((/* implicit */val<int>) (val<signed char>)-108))))), ((-(303743099285956909LL))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_11 = (short)16594;
int zero = 0;
long long int var_12 = 5905257298278010764LL;
signed char var_13 = (signed char)-89;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 16594LL;
    value_mismatch |= var_13 != (signed char)-89;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_11, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
