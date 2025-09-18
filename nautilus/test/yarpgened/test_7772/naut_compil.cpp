/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7772
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7772
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
void test(val<int> var_0, val<unsigned short> var_1, val<long long int> var_2, val<short> var_3, val<long long int> var_4, val<short> var_5, val<unsigned short> var_8, val<short> var_9, val<bool> var_10, val<int> zero, val<long long int*> var_11, val<unsigned short*> var_12, val<unsigned short*> var_13, val<short*> var_14) {
    *var_11 = ((/* implicit */val<long long int>) ((((((/* implicit */val<int>) ((((/* implicit */val<int>) (val<unsigned short>)10619)) > (((/* implicit */val<int>) (val<unsigned short>)2))))) <= (924817494))) ? (((((/* implicit */val<bool>) var_8)) ? (min((((/* implicit */val<int>) (val<unsigned short>)10820)), (var_0))) : (((/* implicit */val<int>) var_3)))) : (((((/* implicit */val<bool>) -659302034)) ? (((/* implicit */val<int>) var_8)) : (745571999)))));
    *var_12 |= ((/* implicit */val<unsigned short>) var_4);
    *var_13 |= ((/* implicit */val<unsigned short>) (-(((/* implicit */val<int>) var_1))));
    *var_14 |= ((/* implicit */val<short>) ((((/* implicit */val<bool>) min((((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) (val<short>)15628)))), (((((/* implicit */val<bool>) 8712224844763334281LL)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_5))))))) ? (((/* implicit */val<int>) ((var_2) >= (((/* implicit */val<long long int>) ((((-659302034) + (2147483647))) << (((var_4) - (3430454979704157807LL))))))))) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<unsigned short>)0)) || (((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) var_9)), (18446744073709551615ULL)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1858415653;
unsigned short var_1 = (unsigned short)46519;
long long int var_2 = -9154055608943379938LL;
short var_3 = (short)22777;
long long int var_4 = 3430454979704157807LL;
short var_5 = (short)-26584;
unsigned short var_8 = (unsigned short)62744;
short var_9 = (short)6494;
bool var_10 = (bool)1;
int zero = 0;
long long int var_11 = -7786087429314409487LL;
unsigned short var_12 = (unsigned short)53166;
unsigned short var_13 = (unsigned short)65033;
short var_14 = (short)17434;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 10820LL;
    value_mismatch |= var_12 != (unsigned short)65519;
    value_mismatch |= var_13 != (unsigned short)65097;
    value_mismatch |= var_14 != (short)17434;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_8, var_9, var_10, zero, &var_11, &var_12, &var_13, &var_14);
  checksum();
}
