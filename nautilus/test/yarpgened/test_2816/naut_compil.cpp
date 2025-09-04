/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2816
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2816
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION true
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
void test(val<short> var_0, val<signed char> var_1, val<unsigned short> var_2, val<unsigned char> var_4, val<unsigned long long int> var_5, val<long long int> var_6, val<unsigned char> var_7, val<short> var_8, val<int> var_11, val<signed char> var_12, val<short> var_13, val<long long int> var_14, val<unsigned long long int> var_16, val<unsigned char> var_17, val<int> zero, val<unsigned long long int*> var_18, val<unsigned char*> var_19, val<long long int*> var_20, val<long long int*> var_21, val<signed char*> var_22, val<bool*> var_23) {
    *var_18 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) (val<unsigned short>)9744)) * (((/* implicit */val<int>) (val<unsigned char>)127))));
    if (((val<bool>) min((((0ULL) & (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)(-32767 - 1)))))), ((~(var_16))))))
    {
        *var_19 = ((/* implicit */val<unsigned char>) var_14);
        *var_20 = ((/* implicit */val<long long int>) ((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) max((((/* implicit */val<short>) var_7)), (var_13)))) >> (((((((/* implicit */val<bool>) var_1)) ? (2741273690790369410LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_8))))) - (2741273690790369407LL)))))) + (min((max((var_5), (((/* implicit */val<unsigned long long int>) var_12)))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_17)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) var_2)))))))));
    }

    *var_21 &= ((/* implicit */val<long long int>) ((((/* implicit */val<int>) ((val<unsigned char>) var_17))) <= (var_11)));
    if (((/* implicit */val<bool>) var_11))
    {
        *var_22 = ((/* implicit */val<signed char>) max((*var_22), (((/* implicit */val<signed char>) max((var_5), (((/* implicit */val<unsigned long long int>) max((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) var_4))))), (var_6)))))))));
        *var_23 = ((min((((/* implicit */val<unsigned long long int>) max((970163423), (((/* implicit */val<int>) var_4))))), (((var_5) + (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)-32749))))))) <= (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_8))))), (((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<int>) (val<short>)(-32767 - 1))) : (((/* implicit */val<int>) var_17))))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30598;
signed char var_1 = (signed char)-51;
unsigned short var_2 = (unsigned short)41658;
unsigned char var_4 = (unsigned char)230;
unsigned long long int var_5 = 12066719251179569124ULL;
long long int var_6 = 8336691764783303777LL;
unsigned char var_7 = (unsigned char)136;
short var_8 = (short)24586;
int var_11 = 1550984921;
signed char var_12 = (signed char)26;
short var_13 = (short)-9792;
long long int var_14 = 7918265281905294091LL;
unsigned long long int var_16 = 3495172681824274172ULL;
unsigned char var_17 = (unsigned char)6;
int zero = 0;
unsigned long long int var_18 = 12341159041490200626ULL;
unsigned char var_19 = (unsigned char)215;
long long int var_20 = 869559085287221367LL;
long long int var_21 = 609157414700277950LL;
signed char var_22 = (signed char)36;
bool var_23 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 1237488ULL;
    value_mismatch |= var_19 != (unsigned char)215;
    value_mismatch |= var_20 != 869559085287221367LL;
    value_mismatch |= var_21 != 0LL;
    value_mismatch |= var_22 != (signed char)36;
    value_mismatch |= var_23 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_5, var_6, var_7, var_8, var_11, var_12, var_13, var_14, var_16, var_17, zero, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
