/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8737
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8737
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
void test(val<unsigned long long int> var_4, val<short> var_6, val<unsigned short> var_7, val<short> var_9, val<signed char> var_13, val<unsigned int> var_18, val<unsigned int> var_19, val<int> zero, val<short*> var_20, val<signed char*> var_21) {
    *var_20 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_4)) ? (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned char>)18)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)766))) : (var_18)))) ? (((/* implicit */val<int>) var_13)) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<short>)-758))))))) : (((((/* implicit */val<bool>) max((var_7), (((/* implicit */val<unsigned short>) var_9))))) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<short>)-762)) && (((/* implicit */val<bool>) var_6))))) : (((/* implicit */val<int>) (val<short>)755))))));
    *var_21 = ((/* implicit */val<signed char>) var_19);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 2559699533911532875ULL;
short var_6 = (short)-8700;
unsigned short var_7 = (unsigned short)51065;
short var_9 = (short)20594;
signed char var_13 = (signed char)-33;
unsigned int var_18 = 2865615809U;
unsigned int var_19 = 3729727769U;
int zero = 0;
short var_20 = (short)-30789;
signed char var_21 = (signed char)-25;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (short)-33;
    value_mismatch |= var_21 != (signed char)25;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_6, var_7, var_9, var_13, var_18, var_19, zero, &var_20, &var_21);
  checksum();
}
