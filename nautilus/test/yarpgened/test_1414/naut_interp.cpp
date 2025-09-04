/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1414
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1414
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
void test(val<unsigned short> var_0, val<unsigned short> var_5, val<short> var_9, val<unsigned int> var_12, val<int> zero, val<unsigned char*> var_14, val<signed char*> var_15, val<signed char*> var_16) {
    *var_14 = ((/* implicit */val<unsigned char>) var_0);
    *var_15 = ((/* implicit */val<signed char>) max((((((/* implicit */val<bool>) (val<short>)-23424)) ? (((/* implicit */val<int>) min((var_5), (var_0)))) : (295822336))), (((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((val<unsigned int>) var_9))) <= (-4961811371253152368LL))))));
    *var_16 |= ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((max((var_12), (((/* implicit */val<unsigned int>) (val<unsigned short>)17742)))) + (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) (val<unsigned short>)1)) % (((/* implicit */val<int>) (val<short>)-15938)))))))) ? (((/* implicit */val<int>) (val<unsigned short>)47794)) : (((((/* implicit */val<bool>) (val<short>)-32324)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<unsigned short>)65519))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11507;
unsigned short var_5 = (unsigned short)44295;
short var_9 = (short)15732;
unsigned int var_12 = 3100628475U;
int zero = 0;
unsigned char var_14 = (unsigned char)249;
signed char var_15 = (signed char)20;
signed char var_16 = (signed char)80;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)243;
    value_mismatch |= var_15 != (signed char)-13;
    value_mismatch |= var_16 != (signed char)-14;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_9, var_12, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
