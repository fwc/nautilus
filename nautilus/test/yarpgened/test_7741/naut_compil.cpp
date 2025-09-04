/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7741
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7741
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
void test(val<unsigned short> var_0, val<signed char> var_3, val<int> zero, val<short*> var_18, val<short*> var_19, val<unsigned int*> var_20) {
    *var_18 = ((/* implicit */val<short>) (+(((/* implicit */val<int>) var_3))));
    *var_19 = ((/* implicit */val<short>) ((val<unsigned short>) ((((/* implicit */val<int>) min((var_3), ((val<signed char>)-82)))) * (((/* implicit */val<int>) var_3)))));
    *var_20 = ((/* implicit */val<unsigned int>) ((val<signed char>) (!(((/* implicit */val<bool>) var_0)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12177;
signed char var_3 = (signed char)-48;
int zero = 0;
short var_18 = (short)10868;
short var_19 = (short)-3509;
unsigned int var_20 = 2676536394U;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)-48;
    value_mismatch |= var_19 != (short)3936;
    value_mismatch |= var_20 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
