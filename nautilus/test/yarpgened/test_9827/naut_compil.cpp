/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9827
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9827
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
void test(val<short> var_0, val<unsigned long long int> var_2, val<long long int> var_8, val<unsigned char> var_13, val<unsigned long long int> var_14, val<bool> var_15, val<short> var_16, val<short> var_19, val<int> zero, val<unsigned short*> var_20, val<unsigned long long int*> var_21, val<int*> var_22) {
    *var_20 = ((/* implicit */val<unsigned short>) max((*var_20), (((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) max((var_14), (((/* implicit */val<unsigned long long int>) ((val<bool>) var_2)))))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_8))))) : (((/* implicit */val<int>) var_0)))))));
    *var_21 = ((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) var_13))))) < (var_14))) ? ((-(((/* implicit */val<int>) var_15)))) : (((/* implicit */val<int>) var_16))));
    *var_22 = ((/* implicit */val<int>) var_19);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15493;
unsigned long long int var_2 = 8365967177364760434ULL;
long long int var_8 = -4899794058900328254LL;
unsigned char var_13 = (unsigned char)203;
unsigned long long int var_14 = 12828472768020648488ULL;
bool var_15 = (bool)1;
short var_16 = (short)-30091;
short var_19 = (short)-30157;
int zero = 0;
unsigned short var_20 = (unsigned short)20106;
unsigned long long int var_21 = 15304398054760852415ULL;
int var_22 = -865964111;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned short)20106;
    value_mismatch |= var_21 != 18446744073709521525ULL;
    value_mismatch |= var_22 != -30157;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_8, var_13, var_14, var_15, var_16, var_19, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
