/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4619
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4619
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
void test(val<signed char> var_2, val<unsigned short> var_6, val<signed char> var_7, val<unsigned short> var_8, val<signed char> var_10, val<signed char> var_12, val<int> zero, val<unsigned short*> var_18, val<short*> var_19) {
    *var_18 = ((/* implicit */val<unsigned short>) (-(((((/* implicit */val<bool>) min((((/* implicit */val<short>) (val<signed char>)34)), ((val<short>)-1)))) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_10)) || (((/* implicit */val<bool>) var_8))))) : (((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) var_6))))))));
    *var_19 = ((/* implicit */val<short>) (!(((/* implicit */val<bool>) var_12))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-4;
unsigned short var_6 = (unsigned short)58894;
signed char var_7 = (signed char)-79;
unsigned short var_8 = (unsigned short)71;
signed char var_10 = (signed char)37;
signed char var_12 = (signed char)-1;
int zero = 0;
unsigned short var_18 = (unsigned short)25078;
short var_19 = (short)-15305;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)65535;
    value_mismatch |= var_19 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_6, var_7, var_8, var_10, var_12, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
