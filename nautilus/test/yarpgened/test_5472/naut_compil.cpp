/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5472
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5472
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
void test(val<short> var_18, val<int> zero, val<bool*> var_20, val<unsigned int*> var_21, val<bool*> var_22, val<short*> var_23, val<unsigned char*> var_24) {
    *var_20 = ((/* implicit */val<bool>) var_18);
    *var_21 = ((/* implicit */val<unsigned int>) -6LL);
    *var_22 = ((/* implicit */val<bool>) max((((val<long long int>) max(((val<unsigned short>)31322), ((val<unsigned short>)34223)))), (((/* implicit */val<long long int>) (val<unsigned short>)25999))));
    *var_23 = ((/* implicit */val<short>) ((((/* implicit */val<int>) (val<short>)7872)) < (((/* implicit */val<int>) (val<short>)-2272))));
    *var_24 = ((val<unsigned char>) (-((~(((/* implicit */val<int>) (val<unsigned short>)39374))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_18 = (short)-20860;
int zero = 0;
bool var_20 = (bool)1;
unsigned int var_21 = 3517295359U;
bool var_22 = (bool)1;
short var_23 = (short)-22167;
unsigned char var_24 = (unsigned char)215;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != 4294967290U;
    value_mismatch |= var_22 != (bool)1;
    value_mismatch |= var_23 != (short)0;
    value_mismatch |= var_24 != (unsigned char)207;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_18, zero, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
  assert(!value_mismatch);
}
