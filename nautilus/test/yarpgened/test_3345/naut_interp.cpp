/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3345
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3345
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
void test(val<bool> var_2, val<unsigned char> var_3, val<long long int> var_4, val<unsigned short> var_5, val<short> var_6, val<unsigned short> var_11, val<unsigned int> var_12, val<signed char> var_13, val<signed char> var_17, val<unsigned short> var_18, val<int> zero, val<short*> var_19, val<short*> var_20, val<short*> var_21, val<short*> var_22) {
    *var_19 = min((((/* implicit */val<short>) var_3)), (((val<short>) max((var_18), (((/* implicit */val<unsigned short>) (val<short>)-5993))))));
    *var_20 = ((/* implicit */val<short>) min((*var_20), (((/* implicit */val<short>) ((((/* implicit */val<int>) ((val<signed char>) ((((/* implicit */val<bool>) 11468738016409098268ULL)) || (((/* implicit */val<bool>) var_11)))))) / (((/* implicit */val<int>) var_2)))))));
    *var_21 = ((/* implicit */val<short>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)3174))) != (245812480U)));
    *var_22 -= ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((val<unsigned int>) var_17))) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) 4049154816U)) ? (((/* implicit */val<int>) (val<unsigned char>)254)) : (((/* implicit */val<int>) (val<short>)(-32767 - 1)))))) : (var_12)))) ? (((/* implicit */val<int>) min(((val<unsigned short>)7056), (var_5)))) : (((/* implicit */val<int>) ((((((/* implicit */val<bool>) var_6)) ? (18446744073709551611ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_13))))) != (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<unsigned short>) var_4)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_2 = (bool)1;
unsigned char var_3 = (unsigned char)197;
long long int var_4 = -5050214230885272154LL;
unsigned short var_5 = (unsigned short)51349;
short var_6 = (short)1338;
unsigned short var_11 = (unsigned short)33431;
unsigned int var_12 = 3317353480U;
signed char var_13 = (signed char)-113;
signed char var_17 = (signed char)127;
unsigned short var_18 = (unsigned short)51573;
int zero = 0;
short var_19 = (short)-5272;
short var_20 = (short)8397;
short var_21 = (short)-18237;
short var_22 = (short)-5897;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)-5993;
    value_mismatch |= var_20 != (short)1;
    value_mismatch |= var_21 != (short)1;
    value_mismatch |= var_22 != (short)-12953;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_5, var_6, var_11, var_12, var_13, var_17, var_18, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
