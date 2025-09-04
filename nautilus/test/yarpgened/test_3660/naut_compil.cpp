/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3660
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3660
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
void test(val<unsigned int> var_2, val<short> var_8, val<unsigned long long int> var_10, val<unsigned short> var_11, val<unsigned long long int> var_14, val<int> zero, val<short*> var_16, val<unsigned long long int*> var_17, val<long long int*> var_18) {
    *var_16 = ((/* implicit */val<short>) ((val<unsigned char>) (~(((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)60))) : (var_2))))));
    *var_17 = ((/* implicit */val<unsigned long long int>) min((*var_17), (((/* implicit */val<unsigned long long int>) var_8))));
    *var_18 = (+(((((/* implicit */val<bool>) min((var_14), (((/* implicit */val<unsigned long long int>) var_11))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11))) : (max((7413322762228445002LL), (((/* implicit */val<long long int>) 2060331078)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3688385074U;
short var_8 = (short)3623;
unsigned long long int var_10 = 3008583641633628228ULL;
unsigned short var_11 = (unsigned short)38625;
unsigned long long int var_14 = 6358563722612007452ULL;
int zero = 0;
short var_16 = (short)21246;
unsigned long long int var_17 = 10937450980545306220ULL;
long long int var_18 = -9060033043287266190LL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (short)195;
    value_mismatch |= var_17 != 3623ULL;
    value_mismatch |= var_18 != 38625LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_8, var_10, var_11, var_14, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
