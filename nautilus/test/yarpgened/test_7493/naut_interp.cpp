/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7493
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7493
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
void test(val<signed char> var_4, val<int> var_5, val<unsigned int> var_7, val<unsigned short> var_8, val<unsigned short> var_13, val<int> zero, val<signed char*> var_18, val<unsigned long long int*> var_19) {
    *var_18 ^= ((/* implicit */val<signed char>) ((var_7) >> (((((/* implicit */val<int>) ((val<signed char>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4))) - (var_7))))) - (30)))));
    *var_19 &= ((val<unsigned long long int>) ((((/* implicit */val<bool>) var_13)) ? ((-(((/* implicit */val<int>) var_8)))) : (max((var_5), (((/* implicit */val<int>) var_4))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-82;
int var_5 = 1891625188;
unsigned int var_7 = 1500899720U;
unsigned short var_8 = (unsigned short)52510;
unsigned short var_13 = (unsigned short)63466;
int zero = 0;
signed char var_18 = (signed char)-54;
unsigned long long int var_19 = 1137493401057574889ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)35;
    value_mismatch |= var_19 != 1137493401057571552ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_7, var_8, var_13, zero, &var_18, &var_19);
  checksum();
}
