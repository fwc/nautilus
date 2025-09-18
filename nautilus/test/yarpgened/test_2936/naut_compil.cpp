/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2936
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2936
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
void test(val<short> var_0, val<short> var_3, val<int> var_10, val<short> var_11, val<int> var_12, val<bool> var_14, val<int> zero, val<long long int*> var_20, val<long long int*> var_21, val<unsigned int*> var_22, val<unsigned short*> var_23) {
    *var_20 &= ((/* implicit */val<long long int>) min((((var_10) & (((/* implicit */val<int>) var_3)))), (min(((-2147483647 - 1)), (((/* implicit */val<int>) (val<signed char>)103))))));
    *var_21 = ((/* implicit */val<long long int>) max((((/* implicit */val<int>) var_0)), (var_12)));
    *var_22 += ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) 18446744073709551615ULL)) ? (((/* implicit */val<int>) var_14)) : (max((((/* implicit */val<int>) var_11)), (-1831309422)))));
    *var_23 = ((/* implicit */val<unsigned short>) max((*var_23), (((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) 751853755316401096ULL)) && (((/* implicit */val<bool>) 0)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7422;
short var_3 = (short)-32339;
int var_10 = 1131449068;
short var_11 = (short)24421;
int var_12 = -1356577371;
bool var_14 = (bool)1;
int zero = 0;
long long int var_20 = -5393948816291607650LL;
long long int var_21 = 3449998332462837737LL;
unsigned int var_22 = 1691268455U;
unsigned short var_23 = (unsigned short)57901;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != -5393948817437491200LL;
    value_mismatch |= var_21 != 7422LL;
    value_mismatch |= var_22 != 1691268456U;
    value_mismatch |= var_23 != (unsigned short)57901;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_10, var_11, var_12, var_14, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
}
