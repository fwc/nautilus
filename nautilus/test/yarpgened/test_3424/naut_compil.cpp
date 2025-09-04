/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3424
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3424
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
void test(val<signed char> var_2, val<unsigned int> var_3, val<unsigned int> var_12, val<int> zero, val<unsigned int*> var_16, val<long long int*> var_17, val<unsigned short*> var_18) {
    *var_16 = max((var_12), (((/* implicit */val<unsigned int>) (val<short>)27214)));
    *var_17 |= ((/* implicit */val<long long int>) var_3);
    *var_18 |= ((/* implicit */val<unsigned short>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<signed char>) (val<unsigned char>)107)))) * (((((((/* implicit */val<bool>) var_3)) || ((val<bool>)1))) ? (min((18446744073709551615ULL), (((/* implicit */val<unsigned long long int>) var_2)))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)67;
unsigned int var_3 = 2777447719U;
unsigned int var_12 = 3719637822U;
int zero = 0;
unsigned int var_16 = 242201088U;
long long int var_17 = -4485049119548269784LL;
unsigned short var_18 = (unsigned short)48820;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 3719637822U;
    value_mismatch |= var_17 != -4485049119539331281LL;
    value_mismatch |= var_18 != (unsigned short)48821;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_12, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
