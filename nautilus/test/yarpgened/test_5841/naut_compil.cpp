/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5841
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5841
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
void test(val<unsigned short> var_1, val<unsigned short> var_3, val<bool> var_4, val<int> var_13, val<int> zero, val<bool*> var_15, val<int*> var_16, val<int*> var_17) {
    *var_15 |= ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((var_4) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3))) : (2486281133U)))) ? ((+(((/* implicit */val<int>) (val<bool>)1)))) : ((~(((/* implicit */val<int>) var_4))))))) ? (((((/* implicit */val<bool>) (val<unsigned short>)26404)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)46932))) : (3282658157U))) : (((/* implicit */val<unsigned int>) (+(((((/* implicit */val<bool>) var_13)) ? (((/* implicit */val<int>) (val<unsigned short>)49814)) : (((/* implicit */val<int>) var_1)))))))));
    *var_16 = ((/* implicit */val<int>) min((*var_16), (((((/* implicit */val<bool>) 1442951486)) ? (((/* implicit */val<int>) (val<unsigned short>)18604)) : (((/* implicit */val<int>) (val<unsigned short>)39132))))));
    *var_17 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<unsigned short>)18604)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)46079))) : (391611869U)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)33189;
unsigned short var_3 = (unsigned short)30074;
bool var_4 = (bool)0;
int var_13 = 336664065;
int zero = 0;
bool var_15 = (bool)1;
int var_16 = -531278366;
int var_17 = 1148267101;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != -531278366;
    value_mismatch |= var_17 != 46079;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_13, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
