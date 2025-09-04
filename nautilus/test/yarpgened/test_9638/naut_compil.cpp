/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9638
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9638
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
void test(val<short> var_0, val<unsigned long long int> var_2, val<long long int> var_5, val<unsigned long long int> var_8, val<unsigned int> var_9, val<signed char> var_11, val<signed char> var_13, val<long long int> var_14, val<unsigned short> var_15, val<int> zero, val<long long int*> var_17, val<unsigned long long int*> var_18, val<unsigned short*> var_19, val<unsigned long long int*> var_20, val<unsigned short*> var_21) {
    *var_17 = ((/* implicit */val<long long int>) 13284506997924397799ULL);
    *var_18 = ((/* implicit */val<unsigned long long int>) min((((((/* implicit */val<bool>) var_11)) ? (((((/* implicit */val<bool>) var_13)) ? (((/* implicit */val<int>) var_15)) : (((/* implicit */val<int>) var_13)))) : (((/* implicit */val<int>) var_13)))), (((/* implicit */val<int>) ((val<unsigned char>) min((var_8), (((/* implicit */val<unsigned long long int>) var_15))))))));
    *var_19 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) (-(((/* implicit */val<int>) ((((/* implicit */val<bool>) var_9)) || (((/* implicit */val<bool>) var_9)))))))) || (((/* implicit */val<bool>) max((((((/* implicit */val<bool>) var_2)) ? (var_8) : (((/* implicit */val<unsigned long long int>) 1614860024)))), (((((/* implicit */val<bool>) (val<unsigned short>)28129)) ? (4403778750074959203ULL) : (4403778750074959203ULL))))))));
    *var_20 = max(((-(((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<unsigned long long int>) var_14)) : (var_2))))), (((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_0))) : (((((/* implicit */val<bool>) var_11)) ? (14042965323634592412ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)65535))))))));
    *var_21 = ((/* implicit */val<unsigned short>) min((*var_21), (((/* implicit */val<unsigned short>) max((((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)65535))) : (var_8)))) || (((/* implicit */val<bool>) var_5))))), ((+((+(((/* implicit */val<int>) var_13)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5110;
unsigned long long int var_2 = 3928333197699062339ULL;
long long int var_5 = 3856486946253094851LL;
unsigned long long int var_8 = 2150298646333942310ULL;
unsigned int var_9 = 749058723U;
signed char var_11 = (signed char)-5;
signed char var_13 = (signed char)79;
long long int var_14 = 5924520851819573967LL;
unsigned short var_15 = (unsigned short)6261;
int zero = 0;
long long int var_17 = -7567933884925016567LL;
unsigned long long int var_18 = 8086343625406423725ULL;
unsigned short var_19 = (unsigned short)49368;
unsigned long long int var_20 = 15670734366176813119ULL;
unsigned short var_21 = (unsigned short)28008;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != -5162237075785153817LL;
    value_mismatch |= var_18 != 117ULL;
    value_mismatch |= var_19 != (unsigned short)1;
    value_mismatch |= var_20 != 18446744073709546506ULL;
    value_mismatch |= var_21 != (unsigned short)79;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_5, var_8, var_9, var_11, var_13, var_14, var_15, zero, &var_17, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
