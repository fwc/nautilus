/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5665
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5665
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
void test(val<short> var_0, val<short> var_1, val<short> var_3, val<unsigned long long int> var_7, val<unsigned long long int> var_8, val<signed char> var_14, val<int> zero, val<unsigned char*> var_18, val<unsigned long long int*> var_19) {
    *var_18 += ((/* implicit */val<unsigned char>) (((!(((/* implicit */val<bool>) var_0)))) ? (((((/* implicit */val<bool>) (-(((/* implicit */val<int>) (val<bool>)1))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3))) : (3539971885U))) : (((/* implicit */val<unsigned int>) (~((+(((/* implicit */val<int>) var_14)))))))));
    *var_19 = ((((/* implicit */val<bool>) ((val<unsigned short>) (val<unsigned short>)17114))) ? (max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_7)) && (((/* implicit */val<bool>) var_1))))), (var_8))) : (((((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) var_3))))) + (var_7))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9040;
short var_1 = (short)-19035;
short var_3 = (short)-32549;
unsigned long long int var_7 = 12314369911939773264ULL;
unsigned long long int var_8 = 9235289015980785194ULL;
signed char var_14 = (signed char)-16;
int zero = 0;
unsigned char var_18 = (unsigned char)189;
unsigned long long int var_19 = 6679500839241866839ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned char)204;
    value_mismatch |= var_19 != 9235289015980785194ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_7, var_8, var_14, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
