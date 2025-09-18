/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2918
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2918
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
void test(val<unsigned long long int> var_4, val<int> var_5, val<int> zero, val<short*> var_14, val<unsigned int*> var_15) {
    *var_14 = ((/* implicit */val<short>) var_4);
    *var_15 = ((/* implicit */val<unsigned int>) min((*var_15), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (((val<bool>)0) ? (((/* implicit */val<int>) (val<short>)29678)) : (((/* implicit */val<int>) (val<short>)-4522))))) ? (((((/* implicit */val<bool>) 2825226207922021664LL)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)0))) : (8893052126423982599LL))) : (min((((/* implicit */val<long long int>) var_5)), (9223372036854775807LL)))))) ? ((~(((((/* implicit */val<bool>) 5850465623353953630ULL)) ? (((/* implicit */val<long long int>) 4197003117U)) : (2119521198539286176LL))))) : (((/* implicit */val<long long int>) 1395227413U)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 2651154313883750128ULL;
int var_5 = -1544513459;
int zero = 0;
short var_14 = (short)-28274;
unsigned int var_15 = 712204738U;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (short)3824;
    value_mismatch |= var_15 != 712204738U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, zero, &var_14, &var_15);
  checksum();
}
