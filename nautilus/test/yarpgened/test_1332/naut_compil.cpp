/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1332
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1332
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
void test(val<unsigned short> var_1, val<signed char> var_6, val<unsigned short> var_12, val<long long int> var_13, val<int> zero, val<unsigned short*> var_14, val<short*> var_15) {
    *var_14 = ((/* implicit */val<unsigned short>) var_6);
    *var_15 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) max((((((/* implicit */val<bool>) (val<signed char>)-93)) ? (((/* implicit */val<int>) var_12)) : (((/* implicit */val<int>) (val<short>)31514)))), ((-(((/* implicit */val<int>) (val<signed char>)127))))))) ? (((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<long long int>) max((((/* implicit */val<unsigned int>) (val<short>)4214)), (1569019837U)))) : (((var_13) / (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)59809))))))) : (((var_13) + (((/* implicit */val<long long int>) (+(((/* implicit */val<int>) var_12)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)17832;
signed char var_6 = (signed char)30;
unsigned short var_12 = (unsigned short)62638;
long long int var_13 = 6187387435576250504LL;
int zero = 0;
unsigned short var_14 = (unsigned short)61483;
short var_15 = (short)-26489;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned short)30;
    value_mismatch |= var_15 != (short)22461;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_6, var_12, var_13, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
