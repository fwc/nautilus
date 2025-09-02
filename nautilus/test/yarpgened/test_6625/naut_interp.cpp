/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6625
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6625
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
void test(val<bool> var_4, val<bool> var_5, val<short> var_14, val<short> var_17, val<signed char> var_18, val<int> zero, val<short*> var_19, val<unsigned short*> var_20) {
    *var_19 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) min((var_18), (((/* implicit */val<signed char>) var_4))))) / (((/* implicit */val<int>) var_17))))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_14))))) : (((/* implicit */val<int>) var_5))));
    *var_20 = ((/* implicit */val<unsigned short>) var_18);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_4 = (bool)1;
bool var_5 = (bool)1;
short var_14 = (short)-28088;
short var_17 = (short)-5046;
signed char var_18 = (signed char)100;
int zero = 0;
short var_19 = (short)12651;
unsigned short var_20 = (unsigned short)41375;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)1;
    value_mismatch |= var_20 != (unsigned short)100;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_14, var_17, var_18, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
