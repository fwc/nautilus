/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2369
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2369
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
void test(val<long long int> var_0, val<int> var_3, val<int> var_4, val<unsigned long long int> var_5, val<int> var_6, val<unsigned long long int> var_7, val<unsigned short> var_9, val<short> var_11, val<unsigned long long int> var_12, val<int> zero, val<signed char*> var_13, val<unsigned long long int*> var_14, val<bool*> var_15, val<long long int*> var_16, val<short*> var_17, val<int*> var_18) {
    if (((/* implicit */val<bool>) (val<signed char>)32))
    {
        *var_13 = ((/* implicit */val<signed char>) var_3);
        *var_14 = ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<unsigned long long int>) var_4)) : (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9))) : (((((/* implicit */val<bool>) var_6)) ? (var_12) : (((/* implicit */val<unsigned long long int>) var_3)))))));
        *var_15 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_12)) ? (var_7) : (var_5)));
    }
    else
    {
        *var_16 = ((/* implicit */val<long long int>) (((!(((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) var_3)), (var_12)))))) ? (((((/* implicit */val<bool>) var_0)) ? (max((2072122701814773119ULL), (((/* implicit */val<unsigned long long int>) var_11)))) : (var_7))) : (((/* implicit */val<unsigned long long int>) ((val<int>) ((val<bool>) var_0))))));
        *var_17 = ((/* implicit */val<short>) ((val<bool>) (val<signed char>)-32));
    }

    *var_18 = ((/* implicit */val<int>) max((*var_18), (((/* implicit */val<int>) ((((/* implicit */val<bool>) ((val<int>) -7748503645319563716LL))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) (val<signed char>)31)) <= (((/* implicit */val<int>) (val<short>)-16418)))))) : (((((((/* implicit */val<bool>) 1737369216)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)-6265))) : (18446744073709551603ULL))) / (((/* implicit */val<unsigned long long int>) var_3)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7903111271410692388LL;
int var_3 = 529487806;
int var_4 = 2071908488;
unsigned long long int var_5 = 11117819954674524181ULL;
int var_6 = 1766461353;
unsigned long long int var_7 = 4599727674464062882ULL;
unsigned short var_9 = (unsigned short)61770;
short var_11 = (short)-5286;
unsigned long long int var_12 = 8135139827468916473ULL;
int zero = 0;
signed char var_13 = (signed char)-118;
unsigned long long int var_14 = 7040373241106587086ULL;
bool var_15 = (bool)1;
long long int var_16 = 5701233544784170062LL;
short var_17 = (short)-22551;
int var_18 = 122471031;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (signed char)-66;
    value_mismatch |= var_14 != 2071908488ULL;
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != 5701233544784170062LL;
    value_mismatch |= var_17 != (short)-22551;
    value_mismatch |= var_18 != 122471031;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_5, var_6, var_7, var_9, var_11, var_12, zero, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
}
