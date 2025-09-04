/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3413
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3413
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
void test(val<long long int> var_0, val<short> var_1, val<long long int> var_4, val<unsigned int> var_12, val<unsigned char> var_13, val<short> var_14, val<int> var_16, val<int> zero, val<unsigned short*> var_18, val<signed char*> var_19, val<short*> var_20, val<long long int*> var_21, val<bool*> var_22, val<unsigned short*> var_23, val<bool*> var_24) {
    *var_18 = ((/* implicit */val<unsigned short>) min((var_0), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<int>) var_14)) : (((((/* implicit */val<bool>) (val<short>)-18)) ? (((/* implicit */val<int>) (val<short>)-22)) : (((/* implicit */val<int>) (val<short>)-64)))))))));
    *var_19 = ((/* implicit */val<signed char>) min((*var_19), (((/* implicit */val<signed char>) ((((/* implicit */val<bool>) min((var_16), (((/* implicit */val<int>) max(((val<short>)240), ((val<short>)-18))))))) ? (var_12) : (var_12))))));
    if (((/* implicit */val<bool>) var_1))
    {
        *var_20 = ((/* implicit */val<short>) (val<unsigned char>)228);
        *var_21 = ((/* implicit */val<long long int>) max((((/* implicit */val<unsigned int>) (val<unsigned short>)38234)), (min((((/* implicit */val<unsigned int>) (val<short>)0)), (715790438U)))));
        *var_22 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_13)) ? (((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) (val<short>)5956)), ((val<unsigned short>)38234)))) : (((((/* implicit */val<bool>) (val<unsigned char>)22)) ? (((/* implicit */val<int>) (val<short>)-12799)) : (((/* implicit */val<int>) (val<short>)-13))))))) ? (((/* implicit */val<long long int>) max((((/* implicit */val<unsigned int>) max((-16), (((/* implicit */val<int>) (val<unsigned char>)142))))), (((((/* implicit */val<bool>) 15)) ? (0U) : (((/* implicit */val<unsigned int>) 12))))))) : (min((var_4), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) 2367739695799993884LL)) ? (((/* implicit */val<int>) (val<unsigned short>)27316)) : (-13))))))));
        *var_23 = ((/* implicit */val<unsigned short>) 14);
    }

    *var_24 = ((/* implicit */val<bool>) min(((val<unsigned short>)21392), (((/* implicit */val<unsigned short>) (val<short>)0))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4580159711403666762LL;
short var_1 = (short)-7348;
long long int var_4 = -6387085585355715926LL;
unsigned int var_12 = 3969897753U;
unsigned char var_13 = (unsigned char)253;
short var_14 = (short)-20105;
int var_16 = 1407259671;
int zero = 0;
unsigned short var_18 = (unsigned short)8772;
signed char var_19 = (signed char)-111;
short var_20 = (short)1651;
long long int var_21 = 7049594740449457149LL;
bool var_22 = (bool)1;
unsigned short var_23 = (unsigned short)18334;
bool var_24 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)37558;
    value_mismatch |= var_19 != (signed char)-111;
    value_mismatch |= var_20 != (short)228;
    value_mismatch |= var_21 != 38234LL;
    value_mismatch |= var_22 != (bool)1;
    value_mismatch |= var_23 != (unsigned short)14;
    value_mismatch |= var_24 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_12, var_13, var_14, var_16, zero, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
  assert(!value_mismatch);
}
