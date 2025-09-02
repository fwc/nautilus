/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6360
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6360
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
void test(val<short> var_2, val<unsigned long long int> var_3, val<unsigned long long int> var_6, val<signed char> var_8, val<short> var_11, val<unsigned long long int> var_12, val<short> var_15, val<bool> var_16, val<int> zero, val<int*> var_19, val<unsigned int*> var_20, val<short*> var_21, val<unsigned int*> var_22) {
    *var_19 = ((/* implicit */val<int>) var_11);
    *var_20 = ((/* implicit */val<unsigned int>) max(((~(((/* implicit */val<int>) min((((/* implicit */val<short>) var_16)), (var_2)))))), (((/* implicit */val<int>) var_15))));
    *var_21 -= ((/* implicit */val<short>) 31U);
    *var_22 = ((/* implicit */val<unsigned int>) ((var_3) <= (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_8))) : (var_6)))) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) 4294967274U))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-25748;
unsigned long long int var_3 = 15992214048273138523ULL;
unsigned long long int var_6 = 3345587990566408181ULL;
signed char var_8 = (signed char)-51;
short var_11 = (short)8785;
unsigned long long int var_12 = 17493163174298912689ULL;
short var_15 = (short)5331;
bool var_16 = (bool)1;
int zero = 0;
int var_19 = 1732950189;
unsigned int var_20 = 4220616031U;
short var_21 = (short)-2828;
unsigned int var_22 = 2032024482U;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 8785;
    value_mismatch |= var_20 != 25747U;
    value_mismatch |= var_21 != (short)-2859;
    value_mismatch |= var_22 != 1U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_6, var_8, var_11, var_12, var_15, var_16, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
