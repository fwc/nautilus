/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4499
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4499
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
void test(val<short> var_0, val<long long int> var_1, val<unsigned long long int> var_2, val<short> var_3, val<short> var_4, val<long long int> var_5, val<short> var_7, val<unsigned long long int> var_8, val<signed char> var_9, val<signed char> var_10, val<signed char> var_11, val<signed char> var_12, val<long long int> var_13, val<int> zero, val<short*> var_14, val<unsigned long long int*> var_15, val<long long int*> var_16, val<long long int*> var_17, val<long long int*> var_18) {
    if (((/* implicit */val<bool>) min((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_0)) : (((((/* implicit */val<bool>) 15578273474786231064ULL)) ? (((/* implicit */val<int>) (val<unsigned short>)48633)) : (((/* implicit */val<int>) (val<signed char>)-13))))))), (((max((var_5), (((/* implicit */val<long long int>) var_7)))) | (var_5))))))
    {
        *var_14 = var_4;
        *var_15 = ((/* implicit */val<unsigned long long int>) var_13);
        *var_16 = ((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_3)) > (((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_12)) || (((/* implicit */val<bool>) var_9)))))) > (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_11))) & (var_8))))))));
        *var_17 = ((/* implicit */val<long long int>) ((((((/* implicit */val<bool>) var_7)) && (((/* implicit */val<bool>) var_10)))) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_5)) && (((/* implicit */val<bool>) var_1))))) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) ((val<unsigned long long int>) var_5))) && (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) var_4))))))))));
    }

    *var_18 = ((/* implicit */val<long long int>) min((((/* implicit */val<unsigned long long int>) min(((+(var_13))), (max((((/* implicit */val<long long int>) var_9)), (var_1)))))), (var_2)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2307;
long long int var_1 = 6614095626247530257LL;
unsigned long long int var_2 = 5901686975429136437ULL;
short var_3 = (short)-305;
short var_4 = (short)30809;
long long int var_5 = -1337417801811109044LL;
short var_7 = (short)20452;
unsigned long long int var_8 = 1305637494507737673ULL;
signed char var_9 = (signed char)-18;
signed char var_10 = (signed char)-67;
signed char var_11 = (signed char)97;
signed char var_12 = (signed char)-101;
long long int var_13 = 3754991989306295708LL;
int zero = 0;
short var_14 = (short)-20755;
unsigned long long int var_15 = 3491102851178331613ULL;
long long int var_16 = -3229323384700612665LL;
long long int var_17 = -337015231224171055LL;
long long int var_18 = -848639849266633356LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (short)30809;
    value_mismatch |= var_15 != 3754991989306295708ULL;
    value_mismatch |= var_16 != 0LL;
    value_mismatch |= var_17 != 1LL;
    value_mismatch |= var_18 != 3754991989306295708LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_7, var_8, var_9, var_10, var_11, var_12, var_13, zero, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
}
