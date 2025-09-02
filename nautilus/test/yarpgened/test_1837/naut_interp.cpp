/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1837
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1837
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
void test(val<short> var_2, val<unsigned short> var_3, val<short> var_5, val<unsigned short> var_6, val<unsigned short> var_8, val<signed char> var_10, val<int> zero, val<unsigned char*> var_11, val<signed char*> var_12, val<short*> var_13) {
    *var_11 = ((/* implicit */val<unsigned char>) (((!(((((/* implicit */val<bool>) var_10)) && (((/* implicit */val<bool>) (val<signed char>)-1)))))) && ((((val<bool>)1) && (((/* implicit */val<bool>) max((((/* implicit */val<unsigned short>) var_2)), (var_8))))))));
    *var_12 = ((/* implicit */val<signed char>) ((val<unsigned short>) ((((((/* implicit */val<bool>) (val<unsigned short>)615)) && (((/* implicit */val<bool>) (val<unsigned short>)597)))) ? (((/* implicit */val<int>) ((((/* implicit */val<int>) var_6)) < (((/* implicit */val<int>) var_3))))) : (((((/* implicit */val<int>) var_5)) - (((/* implicit */val<int>) var_2)))))));
    *var_13 = (val<short>)8;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)18886;
unsigned short var_3 = (unsigned short)52368;
short var_5 = (short)26881;
unsigned short var_6 = (unsigned short)41198;
unsigned short var_8 = (unsigned short)4993;
signed char var_10 = (signed char)-125;
int zero = 0;
unsigned char var_11 = (unsigned char)177;
signed char var_12 = (signed char)119;
short var_13 = (short)-4046;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned char)0;
    value_mismatch |= var_12 != (signed char)1;
    value_mismatch |= var_13 != (short)8;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_5, var_6, var_8, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
