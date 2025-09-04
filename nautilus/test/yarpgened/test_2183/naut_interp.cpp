/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2183
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2183
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
void test(val<unsigned long long int> var_0, val<unsigned char> var_1, val<signed char> var_6, val<unsigned short> var_11, val<unsigned long long int> var_13, val<unsigned short> var_15, val<signed char> var_16, val<int> zero, val<unsigned char*> var_18, val<signed char*> var_19, val<unsigned long long int*> var_20) {
    *var_18 = ((/* implicit */val<unsigned char>) min((*var_18), (((/* implicit */val<unsigned char>) (~(((/* implicit */val<int>) var_16)))))));
    *var_19 = ((/* implicit */val<signed char>) (((~(((/* implicit */val<int>) var_1)))) - (min((((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) (val<unsigned short>)37354)) : (((/* implicit */val<int>) var_6)))), (((/* implicit */val<int>) var_1))))));
    *var_20 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) min((var_15), (var_15))))) == (((((/* implicit */val<bool>) (-(((/* implicit */val<int>) (val<unsigned short>)37373))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_11))) : (var_13)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1760242759644431881ULL;
unsigned char var_1 = (unsigned char)64;
signed char var_6 = (signed char)83;
unsigned short var_11 = (unsigned short)33921;
unsigned long long int var_13 = 9881061413317822666ULL;
unsigned short var_15 = (unsigned short)42952;
signed char var_16 = (signed char)-93;
int zero = 0;
unsigned char var_18 = (unsigned char)124;
signed char var_19 = (signed char)87;
unsigned long long int var_20 = 15769276780429887002ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned char)92;
    value_mismatch |= var_19 != (signed char)127;
    value_mismatch |= var_20 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_6, var_11, var_13, var_15, var_16, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
