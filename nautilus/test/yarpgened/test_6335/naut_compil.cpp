/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6335
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6335
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
void test(val<int> var_3, val<unsigned long long int> var_4, val<long long int> var_7, val<bool> var_10, val<unsigned short> var_14, val<unsigned int> var_15, val<int> var_16, val<short> var_17, val<int> zero, val<unsigned int*> var_20, val<int*> var_21, val<bool*> var_22, val<unsigned long long int*> var_23) {
    *var_20 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<unsigned int>) var_3)) <= (((((/* implicit */val<bool>) ((val<unsigned short>) var_14))) ? ((~(3607262513U))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_17)))))));
    *var_21 = ((/* implicit */val<int>) min((var_4), (((/* implicit */val<unsigned long long int>) ((val<int>) min(((val<unsigned short>)3891), (((/* implicit */val<unsigned short>) (val<signed char>)0))))))));
    *var_22 |= ((/* implicit */val<bool>) max((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) (val<unsigned char>)255)), (4254505944U)))) ? (((((/* implicit */val<bool>) 0U)) ? (((/* implicit */val<int>) (val<signed char>)11)) : (((/* implicit */val<int>) (val<bool>)0)))) : (((/* implicit */val<int>) ((val<signed char>) var_4)))))), (var_7)));
    *var_23 = ((/* implicit */val<unsigned long long int>) max((((((/* implicit */val<bool>) 3607262506U)) ? (((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<long long int>) var_16)) : (var_7))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_10))))), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_15)) ? (((/* implicit */val<unsigned int>) 2147483622)) : (var_15)))) ? (((/* implicit */val<int>) ((val<bool>) (val<signed char>)108))) : (((/* implicit */val<int>) ((val<unsigned short>) var_14))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1357417526;
unsigned long long int var_4 = 3277916140403938460ULL;
long long int var_7 = 5182067647773070405LL;
bool var_10 = (bool)1;
unsigned short var_14 = (unsigned short)38947;
unsigned int var_15 = 633990364U;
int var_16 = -825927996;
short var_17 = (short)6245;
int zero = 0;
unsigned int var_20 = 732805594U;
int var_21 = 720123113;
bool var_22 = (bool)0;
unsigned long long int var_23 = 13021338647278086139ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 0U;
    value_mismatch |= var_21 != 0;
    value_mismatch |= var_22 != (bool)1;
    value_mismatch |= var_23 != 1ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_7, var_10, var_14, var_15, var_16, var_17, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
