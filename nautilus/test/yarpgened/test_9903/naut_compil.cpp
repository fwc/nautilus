/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9903
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9903
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
void test(val<signed char> var_0, val<unsigned int> var_1, val<unsigned char> var_2, val<short> var_3, val<unsigned int> var_4, val<signed char> var_5, val<long long int> var_7, val<long long int> var_8, val<long long int> var_9, val<long long int> var_11, val<short> var_12, val<int> zero, val<signed char*> var_13, val<short*> var_14, val<signed char*> var_15, val<short*> var_16, val<long long int*> var_17, val<short*> var_18) {
    *var_13 = ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) min((((/* implicit */val<long long int>) max(((val<short>)23169), ((val<short>)0)))), (var_9))))));
    if (((/* implicit */val<bool>) ((((((/* implicit */val<bool>) var_2)) || (((/* implicit */val<bool>) (val<short>)-4700)))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (val<short>)96)) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (-9223372036854775807LL - 1LL)))))) : (((((/* implicit */val<int>) var_12)) & (((/* implicit */val<int>) (val<unsigned char>)223))))))) : (max((((/* implicit */val<long long int>) var_2)), (((((/* implicit */val<bool>) var_4)) ? (var_7) : (var_11))))))))
    {
        *var_14 = ((/* implicit */val<short>) ((((((/* implicit */val<bool>) (val<unsigned char>)14)) ? (max((var_9), (var_7))) : ((~(var_8))))) - (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)230)))));
        if (((/* implicit */val<bool>) ((val<short>) var_12)))
        {
            *var_15 = ((/* implicit */val<signed char>) var_3);
            *var_16 = ((/* implicit */val<short>) var_0);
            *var_17 = ((/* implicit */val<long long int>) ((val<short>) ((val<unsigned char>) ((val<signed char>) var_1))));
            *var_18 = ((/* implicit */val<short>) (~(((((/* implicit */val<bool>) 16383LL)) ? ((~(((/* implicit */val<int>) var_5)))) : (((/* implicit */val<int>) (val<short>)0))))));
        }

    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)43;
unsigned int var_1 = 2930893467U;
unsigned char var_2 = (unsigned char)25;
short var_3 = (short)22907;
unsigned int var_4 = 987110454U;
signed char var_5 = (signed char)-122;
long long int var_7 = 5394167803998606368LL;
long long int var_8 = -2824411385141910783LL;
long long int var_9 = 1006462298231666764LL;
long long int var_11 = -6499289523747409651LL;
short var_12 = (short)554;
int zero = 0;
signed char var_13 = (signed char)-108;
short var_14 = (short)30398;
signed char var_15 = (signed char)79;
short var_16 = (short)30294;
long long int var_17 = -5760683317229365948LL;
short var_18 = (short)32171;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (signed char)0;
    value_mismatch |= var_14 != (short)30398;
    value_mismatch |= var_15 != (signed char)79;
    value_mismatch |= var_16 != (short)30294;
    value_mismatch |= var_17 != -5760683317229365948LL;
    value_mismatch |= var_18 != (short)32171;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_7, var_8, var_9, var_11, var_12, zero, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
