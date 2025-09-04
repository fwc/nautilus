/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3843
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3843
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
void test(val<signed char> var_0, val<signed char> var_5, val<signed char> var_10, val<long long int> var_15, val<short> var_16, val<int> zero, val<signed char*> var_17, val<short*> var_18, val<short*> var_19, val<long long int*> var_20, val<unsigned int*> var_21) {
    *var_17 = ((/* implicit */val<signed char>) var_16);
    *var_18 = ((/* implicit */val<short>) var_0);
    if (((/* implicit */val<bool>) var_16))
    {
        *var_19 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) 955778181)) ? ((~(((/* implicit */val<int>) var_10)))) : (-1711001068)));
        *var_20 = ((/* implicit */val<long long int>) var_5);
        *var_21 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_16)) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) (~(var_15)))) && (((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<signed char>)-123)) ? (-24) : (955778191))))))) : (((/* implicit */val<int>) var_5))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)5;
signed char var_5 = (signed char)-36;
signed char var_10 = (signed char)38;
long long int var_15 = 3648124715334225520LL;
short var_16 = (short)1622;
int zero = 0;
signed char var_17 = (signed char)97;
short var_18 = (short)-17343;
short var_19 = (short)-21860;
long long int var_20 = 2680699579674577301LL;
unsigned int var_21 = 1634399144U;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (signed char)86;
    value_mismatch |= var_18 != (short)5;
    value_mismatch |= var_19 != (short)-39;
    value_mismatch |= var_20 != -36LL;
    value_mismatch |= var_21 != 1U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_10, var_15, var_16, zero, &var_17, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
