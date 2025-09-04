/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9406
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9406
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
void test(val<signed char> var_0, val<long long int> var_2, val<unsigned long long int> var_5, val<unsigned short> var_7, val<unsigned char> var_9, val<unsigned short> var_16, val<int> zero, val<unsigned char*> var_19, val<unsigned char*> var_20, val<unsigned int*> var_21) {
    *var_19 |= ((/* implicit */val<unsigned char>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_16))) : (var_5)))) && (((/* implicit */val<bool>) var_7)))))) < (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 2851745984U)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_7))) : (4871566920519529644ULL)))) ? (min((((/* implicit */val<unsigned long long int>) var_2)), (17041341214343315109ULL))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_9))) : (4015680688U))))))));
    *var_20 = ((/* implicit */val<unsigned char>) (-(4871566920519529667ULL)));
    *var_21 = ((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) var_7))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-81;
long long int var_2 = 4477823071695131751LL;
unsigned long long int var_5 = 8901672612368597348ULL;
unsigned short var_7 = (unsigned short)24420;
unsigned char var_9 = (unsigned char)158;
unsigned short var_16 = (unsigned short)46959;
int zero = 0;
unsigned char var_19 = (unsigned char)249;
unsigned char var_20 = (unsigned char)216;
unsigned int var_21 = 3561860886U;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)249;
    value_mismatch |= var_20 != (unsigned char)61;
    value_mismatch |= var_21 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_5, var_7, var_9, var_16, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
