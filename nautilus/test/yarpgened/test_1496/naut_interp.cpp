/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1496
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1496
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
void test(val<signed char> var_0, val<short> var_1, val<short> var_4, val<signed char> var_5, val<signed char> var_7, val<int> zero, val<short*> var_14, val<short*> var_15, val<signed char*> var_16) {
    *var_14 = ((/* implicit */val<short>) var_7);
    if (((/* implicit */val<bool>) var_0))
    {
        *var_15 = ((/* implicit */val<short>) max((*var_15), (((/* implicit */val<short>) ((val<signed char>) min((((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_5)))), (((((/* implicit */val<int>) var_0)) % (((/* implicit */val<int>) var_0))))))))));
        *var_16 = ((/* implicit */val<signed char>) (-(((/* implicit */val<int>) min(((val<short>)17613), (((/* implicit */val<short>) (val<signed char>)91)))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-71;
short var_1 = (short)29602;
short var_4 = (short)-13548;
signed char var_5 = (signed char)102;
signed char var_7 = (signed char)-26;
int zero = 0;
short var_14 = (short)26667;
short var_15 = (short)15095;
signed char var_16 = (signed char)21;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (short)-26;
    value_mismatch |= var_15 != (short)15095;
    value_mismatch |= var_16 != (signed char)-91;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_5, var_7, zero, &var_14, &var_15, &var_16);
  checksum();
}
