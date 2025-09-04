/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5513
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5513
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
void test(val<signed char> var_2, val<signed char> var_7, val<unsigned int> var_11, val<unsigned int> var_12, val<int> zero, val<short*> var_13, val<short*> var_14) {
    *var_13 = ((/* implicit */val<short>) max((*var_13), (((/* implicit */val<short>) ((var_12) >= (((val<unsigned int>) ((var_11) * (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_2)))))))))));
    *var_14 = ((/* implicit */val<short>) (-(((/* implicit */val<int>) max(((!(((/* implicit */val<bool>) var_2)))), (((((/* implicit */val<bool>) var_7)) && (((/* implicit */val<bool>) var_2)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-75;
signed char var_7 = (signed char)-27;
unsigned int var_11 = 272074762U;
unsigned int var_12 = 1980221840U;
int zero = 0;
short var_13 = (short)14907;
short var_14 = (short)23318;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (short)14907;
    value_mismatch |= var_14 != (short)-1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_7, var_11, var_12, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
