/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8842
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8842
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
void test(val<bool> var_0, val<short> var_5, val<int> zero, val<short*> var_16, val<signed char*> var_17) {
    *var_16 = ((/* implicit */val<short>) min((*var_16), (((/* implicit */val<short>) ((0LL) & (((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_0)) & (((((/* implicit */val<int>) var_0)) >> (((/* implicit */val<int>) (val<bool>)0))))))))))));
    *var_17 = ((/* implicit */val<signed char>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
short var_5 = (short)6518;
int zero = 0;
short var_16 = (short)-29021;
signed char var_17 = (signed char)23;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (short)-29021;
    value_mismatch |= var_17 != (signed char)118;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, zero, &var_16, &var_17);
  checksum();
}
