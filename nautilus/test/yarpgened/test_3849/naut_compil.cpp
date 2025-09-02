/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3849
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3849
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
void test(val<unsigned int> var_3, val<short> var_6, val<int> zero, val<bool*> var_12, val<unsigned long long int*> var_13, val<unsigned long long int*> var_14) {
    *var_12 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) (-(min((((/* implicit */val<unsigned int>) var_6)), (1537830997U)))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1))) : (1148294137U)));
    *var_13 = ((/* implicit */val<unsigned long long int>) min(((~((+(((/* implicit */val<int>) (val<bool>)1)))))), (((/* implicit */val<int>) var_6))));
    *var_14 = ((/* implicit */val<unsigned long long int>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 480266372U;
short var_6 = (short)29791;
int zero = 0;
bool var_12 = (bool)0;
unsigned long long int var_13 = 18401600071785387252ULL;
unsigned long long int var_14 = 3645463678442653600ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != 18446744073709551614ULL;
    value_mismatch |= var_14 != 480266372ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_6, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
