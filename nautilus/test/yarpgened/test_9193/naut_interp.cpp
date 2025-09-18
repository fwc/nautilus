/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9193
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9193
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
void test(val<long long int> var_0, val<long long int> var_1, val<unsigned int> var_2, val<signed char> var_5, val<short> var_6, val<short> var_7, val<signed char> var_8, val<long long int> var_10, val<signed char> var_11, val<signed char> var_13, val<int> zero, val<short*> var_14, val<long long int*> var_15, val<unsigned int*> var_16) {
    *var_14 = ((/* implicit */val<short>) var_0);
    if (((/* implicit */val<bool>) ((((/* implicit */val<int>) var_5)) & (((((/* implicit */val<bool>) min((var_8), (var_13)))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_6))))) : (((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) var_5)))))))))
    {
        *var_15 = var_1;
        *var_16 ^= ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_0)) || (((/* implicit */val<bool>) var_7)))))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11))) : (((var_10) >> (((var_2) - (3525661306U)))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8142749951737738446LL;
long long int var_1 = -7155658457825666601LL;
unsigned int var_2 = 3525661351U;
signed char var_5 = (signed char)-127;
short var_6 = (short)-17375;
short var_7 = (short)-20633;
signed char var_8 = (signed char)-48;
long long int var_10 = 3249925049070518760LL;
signed char var_11 = (signed char)-11;
signed char var_13 = (signed char)-84;
int zero = 0;
short var_14 = (short)3548;
long long int var_15 = 4225269272707698952LL;
unsigned int var_16 = 1105962129U;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (short)-13518;
    value_mismatch |= var_15 != 4225269272707698952LL;
    value_mismatch |= var_16 != 1105962129U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_5, var_6, var_7, var_8, var_10, var_11, var_13, zero, &var_14, &var_15, &var_16);
  checksum();
}
