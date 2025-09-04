/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4193
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4193
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
void test(val<unsigned short> var_0, val<unsigned long long int> var_1, val<unsigned long long int> var_3, val<unsigned char> var_4, val<unsigned char> var_6, val<unsigned int> var_8, val<signed char> var_10, val<signed char> var_14, val<int> zero, val<unsigned long long int*> var_16, val<int*> var_17, val<unsigned short*> var_18, val<bool*> var_19) {
    *var_16 = ((/* implicit */val<unsigned long long int>) max((*var_16), (((/* implicit */val<unsigned long long int>) ((val<signed char>) min((((var_1) ^ (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6))))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<signed char>)72)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) var_10)))))))))));
    *var_17 = ((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) (((val<bool>)1) ? (var_8) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_14)))))) ? ((+(((/* implicit */val<int>) (val<unsigned short>)23417)))) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) 18446744073709551615ULL)) && (((/* implicit */val<bool>) var_4))))))))));
    *var_18 = ((/* implicit */val<unsigned short>) 0ULL);
    *var_19 = ((/* implicit */val<bool>) max((min((((/* implicit */val<unsigned long long int>) ((-6873354887986584032LL) >= (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)49577)))))), (var_3))), (((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) var_0)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6935;
unsigned long long int var_1 = 14572437652071788484ULL;
unsigned long long int var_3 = 12529763133942485154ULL;
unsigned char var_4 = (unsigned char)14;
unsigned char var_6 = (unsigned char)241;
unsigned int var_8 = 3618493831U;
signed char var_10 = (signed char)83;
signed char var_14 = (signed char)46;
int zero = 0;
unsigned long long int var_16 = 11974519893472714702ULL;
int var_17 = 1739565332;
unsigned short var_18 = (unsigned short)44367;
bool var_19 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 11974519893472714702ULL;
    value_mismatch |= var_17 != 0;
    value_mismatch |= var_18 != (unsigned short)0;
    value_mismatch |= var_19 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_6, var_8, var_10, var_14, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
