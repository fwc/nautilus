/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9431
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9431
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
void test(val<signed char> var_1, val<signed char> var_3, val<signed char> var_6, val<unsigned int> var_8, val<int> zero, val<signed char*> var_14, val<signed char*> var_15, val<unsigned int*> var_16) {
    *var_14 = ((/* implicit */val<signed char>) min((((/* implicit */val<unsigned int>) var_3)), (var_8)));
    *var_15 = var_6;
    *var_16 = ((/* implicit */val<unsigned int>) ((((((((/* implicit */val<int>) (val<short>)10697)) ^ (((/* implicit */val<int>) var_1)))) << (((/* implicit */val<int>) ((val<bool>) 0U))))) <= (((/* implicit */val<int>) var_1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)15;
signed char var_3 = (signed char)73;
signed char var_6 = (signed char)66;
unsigned int var_8 = 1294083226U;
int zero = 0;
signed char var_14 = (signed char)126;
signed char var_15 = (signed char)-78;
unsigned int var_16 = 1298113670U;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (signed char)73;
    value_mismatch |= var_15 != (signed char)66;
    value_mismatch |= var_16 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_6, var_8, zero, &var_14, &var_15, &var_16);
  checksum();
}
