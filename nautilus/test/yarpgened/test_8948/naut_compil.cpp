/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8948
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8948
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
void test(val<bool> var_0, val<unsigned short> var_4, val<bool> var_6, val<bool> var_8, val<short> var_11, val<unsigned char> var_12, val<int> zero, val<long long int*> var_16, val<short*> var_17, val<int*> var_18, val<signed char*> var_19) {
    *var_16 = ((/* implicit */val<long long int>) max((((val<unsigned long long int>) var_8)), (((/* implicit */val<unsigned long long int>) max((max((var_4), (((/* implicit */val<unsigned short>) (val<signed char>)46)))), (((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) var_8)) == (((/* implicit */val<int>) var_11))))))))));
    *var_17 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) (val<short>)14116)) ? (((/* implicit */val<int>) (val<short>)-1)) : (((/* implicit */val<int>) (val<short>)-32766))));
    *var_18 = ((/* implicit */val<int>) ((val<bool>) var_11));
    *var_19 = ((/* implicit */val<signed char>) max((min((((((/* implicit */val<int>) var_6)) << (((/* implicit */val<int>) var_8)))), (((/* implicit */val<int>) max((((/* implicit */val<unsigned char>) var_0)), (var_12)))))), (((/* implicit */val<int>) (val<unsigned short>)15))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
unsigned short var_4 = (unsigned short)33142;
bool var_6 = (bool)0;
bool var_8 = (bool)1;
short var_11 = (short)29232;
unsigned char var_12 = (unsigned char)95;
int zero = 0;
long long int var_16 = -6438414417541286151LL;
short var_17 = (short)-17435;
int var_18 = 1795819865;
signed char var_19 = (signed char)53;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 33142LL;
    value_mismatch |= var_17 != (short)-1;
    value_mismatch |= var_18 != 1;
    value_mismatch |= var_19 != (signed char)15;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_6, var_8, var_11, var_12, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
