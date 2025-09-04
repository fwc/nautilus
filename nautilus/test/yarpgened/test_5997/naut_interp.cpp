/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5997
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5997
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
void test(val<short> var_3, val<unsigned short> var_4, val<unsigned int> var_6, val<unsigned int> var_11, val<short> var_13, val<signed char> var_14, val<short> var_16, val<int> zero, val<unsigned short*> var_18, val<short*> var_19, val<short*> var_20, val<long long int*> var_21) {
    *var_18 = ((/* implicit */val<unsigned short>) min((((/* implicit */val<long long int>) min(((~(((/* implicit */val<int>) var_13)))), (((/* implicit */val<int>) var_13))))), (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_6)) ? (var_6) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_16)))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) (val<short>)26174)), (var_4))))) : (((((/* implicit */val<long long int>) var_11)) ^ (277239179725245685LL)))))));
    *var_19 = ((/* implicit */val<short>) (!(((/* implicit */val<bool>) ((val<short>) (val<short>)26150)))));
    *var_20 = ((val<short>) var_14);
    *var_21 = ((/* implicit */val<long long int>) min(((~(((/* implicit */val<int>) (val<short>)-32760)))), (((((/* implicit */val<int>) var_3)) / (((/* implicit */val<int>) max((var_3), (((/* implicit */val<short>) var_14)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)3788;
unsigned short var_4 = (unsigned short)60243;
unsigned int var_6 = 602079222U;
unsigned int var_11 = 392613730U;
short var_13 = (short)5529;
signed char var_14 = (signed char)-95;
short var_16 = (short)-13440;
int zero = 0;
unsigned short var_18 = (unsigned short)27092;
short var_19 = (short)9512;
short var_20 = (short)-31103;
long long int var_21 = 4764526985556881470LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)60006;
    value_mismatch |= var_19 != (short)0;
    value_mismatch |= var_20 != (short)-95;
    value_mismatch |= var_21 != 1LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_6, var_11, var_13, var_14, var_16, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
