/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9835
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9835
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
void test(val<signed char> var_9, val<bool> var_10, val<unsigned int> var_17, val<int> zero, val<long long int*> var_19, val<short*> var_20) {
    *var_19 = ((/* implicit */val<long long int>) ((val<unsigned int>) var_17));
    *var_20 = ((/* implicit */val<short>) max((((/* implicit */val<unsigned short>) var_9)), (((val<unsigned short>) (!(var_10))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)6;
bool var_10 = (bool)0;
unsigned int var_17 = 3732924549U;
int zero = 0;
long long int var_19 = -3489162568133714848LL;
short var_20 = (short)129;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 3732924549LL;
    value_mismatch |= var_20 != (short)6;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, var_10, var_17, zero, &var_19, &var_20);
  checksum();
}
