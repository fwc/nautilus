/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8149
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8149
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
void test(val<signed char> var_8, val<unsigned long long int> var_12, val<short> var_13, val<int> zero, val<signed char*> var_16, val<bool*> var_17) {
    *var_16 = ((/* implicit */val<signed char>) var_13);
    *var_17 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<short>)5298)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_8))) : (var_12)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)86;
unsigned long long int var_12 = 15181078754452869764ULL;
short var_13 = (short)-10117;
int zero = 0;
signed char var_16 = (signed char)-17;
bool var_17 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (signed char)123;
    value_mismatch |= var_17 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_12, var_13, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
