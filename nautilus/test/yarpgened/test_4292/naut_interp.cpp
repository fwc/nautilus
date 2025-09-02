/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4292
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4292
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
void test(val<signed char> var_6, val<unsigned long long int> var_11, val<unsigned char> var_12, val<int> zero, val<short*> var_20, val<unsigned int*> var_21, val<unsigned short*> var_22, val<long long int*> var_23) {
    *var_20 = ((/* implicit */val<short>) (-(((/* implicit */val<int>) ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_11))))) > (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_12))))))))));
    *var_21 = ((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) (!(((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_6))))))))));
    *var_22 = ((/* implicit */val<unsigned short>) (+(((((3971666845266697606ULL) & (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)15469))))) + (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((3753714589U) == (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1)))))))))));
    *var_23 = ((/* implicit */val<long long int>) (-((-(((((/* implicit */val<unsigned long long int>) -215548879)) + (3249415163095116632ULL)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)27;
unsigned long long int var_11 = 13343406373814937413ULL;
unsigned char var_12 = (unsigned char)181;
int zero = 0;
short var_20 = (short)-32168;
unsigned int var_21 = 2521878838U;
unsigned short var_22 = (unsigned short)39522;
long long int var_23 = 6528114462583433990LL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (short)0;
    value_mismatch |= var_21 != 0U;
    value_mismatch |= var_22 != (unsigned short)7172;
    value_mismatch |= var_23 != 3249415162879567753LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_11, var_12, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
