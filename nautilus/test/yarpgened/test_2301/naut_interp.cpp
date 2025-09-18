/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2301
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2301
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
void test(val<int> var_1, val<unsigned int> var_2, val<short> var_7, val<int> zero, val<short*> var_13, val<unsigned int*> var_14) {
    *var_13 = ((val<short>) min((((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) (val<short>)15074))))), (max((((/* implicit */val<unsigned int>) var_1)), (var_2)))));
    *var_14 ^= ((/* implicit */val<unsigned int>) min((((/* implicit */val<long long int>) ((val<int>) var_7))), ((-(-4611686018427387904LL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 357813328;
unsigned int var_2 = 3265391672U;
short var_7 = (short)20051;
int zero = 0;
short var_13 = (short)-26234;
unsigned int var_14 = 3495609711U;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (short)15074;
    value_mismatch |= var_14 != 3495594812U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_7, zero, &var_13, &var_14);
  checksum();
}
