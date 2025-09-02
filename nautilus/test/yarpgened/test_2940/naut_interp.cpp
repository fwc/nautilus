/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2940
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2940
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
void test(val<short> var_2, val<unsigned char> var_4, val<signed char> var_6, val<signed char> var_11, val<short> var_15, val<unsigned short> var_18, val<int> zero, val<unsigned int*> var_20, val<long long int*> var_21, val<bool*> var_22, val<unsigned int*> var_23) {
    *var_20 = ((/* implicit */val<unsigned int>) var_15);
    *var_21 = ((/* implicit */val<long long int>) var_6);
    if (((/* implicit */val<bool>) var_11))
    {
        *var_22 ^= ((/* implicit */val<bool>) (~(((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_18)) & (((/* implicit */val<int>) var_4))))) ? (9223372036854775807LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2)))))));
        *var_23 = ((/* implicit */val<unsigned int>) (~((~(((/* implicit */val<int>) ((val<unsigned short>) (val<unsigned char>)247)))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)22807;
unsigned char var_4 = (unsigned char)87;
signed char var_6 = (signed char)98;
signed char var_11 = (signed char)-25;
short var_15 = (short)-10884;
unsigned short var_18 = (unsigned short)34584;
int zero = 0;
unsigned int var_20 = 3802805811U;
long long int var_21 = 5121951621123355481LL;
bool var_22 = (bool)0;
unsigned int var_23 = 654780332U;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 4294956412U;
    value_mismatch |= var_21 != 98LL;
    value_mismatch |= var_22 != (bool)1;
    value_mismatch |= var_23 != 247U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_6, var_11, var_15, var_18, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
