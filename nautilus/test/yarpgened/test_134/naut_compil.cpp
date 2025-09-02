/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 134
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=134
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
void test(val<unsigned int> var_8, val<short> var_11, val<signed char> var_12, val<unsigned short> var_14, val<int> var_19, val<int> zero, val<unsigned int*> var_20, val<short*> var_21) {
    *var_20 = ((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) (+(((((/* implicit */val<bool>) (val<short>)31744)) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) (val<signed char>)-30)))))))));
    *var_21 = ((/* implicit */val<short>) max((((((/* implicit */val<bool>) min((883602341), (1497622765)))) ? (((/* implicit */val<unsigned int>) (+(var_19)))) : (((var_8) - (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_14))))))), (((/* implicit */val<unsigned int>) var_12))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 1747782681U;
short var_11 = (short)18429;
signed char var_12 = (signed char)-21;
unsigned short var_14 = (unsigned short)10066;
int var_19 = 1083271185;
int zero = 0;
unsigned int var_20 = 382187717U;
short var_21 = (short)-12872;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 0U;
    value_mismatch |= var_21 != (short)-21;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_11, var_12, var_14, var_19, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
