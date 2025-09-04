/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 896
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=896
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
void test(val<unsigned long long int> var_8, val<signed char> var_13, val<signed char> var_14, val<signed char> var_16, val<int> zero, val<unsigned long long int*> var_20, val<signed char*> var_21, val<short*> var_22, val<bool*> var_23) {
    *var_20 = ((var_8) >> (((/* implicit */val<int>) (val<bool>)1)));
    if (((/* implicit */val<bool>) var_16))
    {
        *var_21 = var_13;
        *var_22 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) 1320877537)) ? (4174198391U) : (((/* implicit */val<unsigned int>) (~((~(((/* implicit */val<int>) (val<short>)1440)))))))));
        *var_23 = ((/* implicit */val<bool>) var_14);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 7838135861548781044ULL;
signed char var_13 = (signed char)10;
signed char var_14 = (signed char)72;
signed char var_16 = (signed char)-79;
int zero = 0;
unsigned long long int var_20 = 2557285137584031505ULL;
signed char var_21 = (signed char)118;
short var_22 = (short)-2139;
bool var_23 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 3919067930774390522ULL;
    value_mismatch |= var_21 != (signed char)10;
    value_mismatch |= var_22 != (short)13943;
    value_mismatch |= var_23 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_13, var_14, var_16, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
