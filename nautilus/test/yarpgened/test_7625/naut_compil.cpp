/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7625
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7625
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
void test(val<bool> var_0, val<unsigned char> var_6, val<short> var_9, val<int> zero, val<unsigned short*> var_10, val<unsigned int*> var_11, val<unsigned int*> var_12) {
    *var_10 = ((/* implicit */val<unsigned short>) (val<unsigned char>)3);
    *var_11 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) (val<bool>)1)) * (((/* implicit */val<int>) (val<bool>)0))));
    *var_12 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((9223372036854775807LL) << (((4ULL) - (3ULL))))) * (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_0)))))) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) 4611686009837453312LL)) ? (((/* implicit */val<int>) (val<unsigned short>)38608)) : (((/* implicit */val<int>) var_6))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
unsigned char var_6 = (unsigned char)136;
short var_9 = (short)20215;
int zero = 0;
unsigned short var_10 = (unsigned short)8782;
unsigned int var_11 = 1528218073U;
unsigned int var_12 = 1741421499U;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned short)3;
    value_mismatch |= var_11 != 0U;
    value_mismatch |= var_12 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, var_9, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
