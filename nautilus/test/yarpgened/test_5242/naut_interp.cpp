/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5242
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5242
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
void test(val<unsigned short> var_2, val<signed char> var_3, val<short> var_5, val<int> zero, val<bool*> var_13, val<unsigned int*> var_14) {
    *var_13 *= ((/* implicit */val<bool>) min((((/* implicit */val<unsigned short>) max(((!(((/* implicit */val<bool>) (val<signed char>)(-127 - 1))))), (((1116454244) < (((/* implicit */val<int>) var_5))))))), (var_2)));
    *var_14 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) (val<signed char>)127)) % (((/* implicit */val<int>) var_3))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)14435;
signed char var_3 = (signed char)21;
short var_5 = (short)9024;
int zero = 0;
bool var_13 = (bool)1;
unsigned int var_14 = 1117239616U;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)0;
    value_mismatch |= var_14 != 1U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_5, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
