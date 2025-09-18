/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 670
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=670
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
void test(val<unsigned char> var_1, val<bool> var_3, val<short> var_4, val<signed char> var_6, val<int> zero, val<signed char*> var_12, val<int*> var_13, val<signed char*> var_14, val<short*> var_15) {
    *var_12 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) -1307263050)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_6))));
    if (((/* implicit */val<bool>) var_4))
    {
        *var_13 = ((/* implicit */val<int>) var_3);
        *var_14 |= ((/* implicit */val<signed char>) 23245214);
    }

    *var_15 = ((/* implicit */val<short>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)35;
bool var_3 = (bool)0;
short var_4 = (short)-7927;
signed char var_6 = (signed char)-91;
int zero = 0;
signed char var_12 = (signed char)90;
int var_13 = 442267717;
signed char var_14 = (signed char)-17;
short var_15 = (short)-29307;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (signed char)35;
    value_mismatch |= var_13 != 0;
    value_mismatch |= var_14 != (signed char)-1;
    value_mismatch |= var_15 != (short)35;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_6, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
}
