/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5776
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5776
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
void test(val<unsigned short> var_1, val<unsigned int> var_5, val<unsigned int> var_6, val<short> var_12, val<int> var_15, val<signed char> var_19, val<int> zero, val<short*> var_20, val<short*> var_21, val<int*> var_22) {
    *var_20 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((((/* implicit */val<unsigned short>) var_12)), (var_1)))) ? (((/* implicit */val<int>) (val<short>)-16247)) : (((/* implicit */val<int>) min((var_19), (var_19))))))) ? (var_5) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<short>) var_5))))));
    *var_21 = ((/* implicit */val<short>) min((*var_21), (((/* implicit */val<short>) ((((/* implicit */val<unsigned int>) var_15)) <= (var_6))))));
    *var_22 = ((/* implicit */val<int>) (val<short>)16253);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)20340;
unsigned int var_5 = 2292550278U;
unsigned int var_6 = 32099541U;
short var_12 = (short)9771;
int var_15 = -905754501;
signed char var_19 = (signed char)4;
int zero = 0;
short var_20 = (short)3339;
short var_21 = (short)-14430;
int var_22 = 1484433415;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (short)-30074;
    value_mismatch |= var_21 != (short)-14430;
    value_mismatch |= var_22 != 16253;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_6, var_12, var_15, var_19, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
