/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4200
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4200
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
void test(val<unsigned short> var_1, val<unsigned int> var_9, val<signed char> var_13, val<int> zero, val<unsigned char*> var_16, val<unsigned int*> var_17) {
    *var_16 = ((/* implicit */val<unsigned char>) max((((((/* implicit */val<bool>) min((var_9), (((/* implicit */val<unsigned int>) var_1))))) ? (((/* implicit */val<int>) var_13)) : (((((/* implicit */val<int>) (val<unsigned short>)8754)) - (((/* implicit */val<int>) (val<signed char>)(-127 - 1))))))), (((/* implicit */val<int>) (val<unsigned char>)87))));
    *var_17 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) 0LL)) && (((/* implicit */val<bool>) 12U))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)63136;
unsigned int var_9 = 3627252704U;
signed char var_13 = (signed char)-115;
int zero = 0;
unsigned char var_16 = (unsigned char)118;
unsigned int var_17 = 3048579533U;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned char)87;
    value_mismatch |= var_17 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_9, var_13, zero, &var_16, &var_17);
  checksum();
}
