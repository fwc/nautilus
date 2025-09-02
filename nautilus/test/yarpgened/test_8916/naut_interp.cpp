/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8916
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8916
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
void test(val<short> var_2, val<unsigned short> var_5, val<unsigned int> var_7, val<long long int> var_9, val<long long int> var_10, val<signed char> var_11, val<int> zero, val<unsigned short*> var_13, val<long long int*> var_14, val<unsigned char*> var_15, val<unsigned long long int*> var_16) {
    *var_13 += ((/* implicit */val<unsigned short>) (~(((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((val<unsigned char>) (val<short>)-15003))))))));
    *var_14 = ((((/* implicit */val<bool>) -1078433401)) ? (((((var_10) > (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_5))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2))) : (var_9))) : (((/* implicit */val<long long int>) (~(((/* implicit */val<int>) var_11))))));
    *var_15 = ((/* implicit */val<unsigned char>) max((((/* implicit */val<short>) (val<unsigned char>)41)), ((val<short>)-13194)));
    *var_16 = ((/* implicit */val<unsigned long long int>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)2600;
unsigned short var_5 = (unsigned short)22735;
unsigned int var_7 = 3451342903U;
long long int var_9 = -7934212634194607921LL;
long long int var_10 = 1864729618361198716LL;
signed char var_11 = (signed char)127;
int zero = 0;
unsigned short var_13 = (unsigned short)51361;
long long int var_14 = 846367309504292339LL;
unsigned char var_15 = (unsigned char)230;
unsigned long long int var_16 = 17924676395729616553ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)51360;
    value_mismatch |= var_14 != 2600LL;
    value_mismatch |= var_15 != (unsigned char)41;
    value_mismatch |= var_16 != 3451342903ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_7, var_9, var_10, var_11, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
