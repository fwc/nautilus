/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8102
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8102
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
void test(val<unsigned int> var_3, val<unsigned short> var_6, val<unsigned int> var_8, val<signed char> var_10, val<long long int> var_13, val<unsigned short> var_14, val<int> zero, val<long long int*> var_15, val<signed char*> var_16, val<unsigned char*> var_17, val<signed char*> var_18, val<signed char*> var_19) {
    *var_15 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((val<unsigned char>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)-25446))) - (var_3))))) || (((val<bool>) (val<short>)-25454))));
    *var_16 = ((/* implicit */val<signed char>) ((((((((/* implicit */val<bool>) (val<short>)25431)) ? (((((/* implicit */val<bool>) (val<signed char>)56)) ? (((/* implicit */val<int>) (val<signed char>)-56)) : (((/* implicit */val<int>) (val<signed char>)55)))) : (((/* implicit */val<int>) (val<bool>)1)))) + (2147483647))) << (((var_8) - (4085640096U)))));
    *var_17 = ((/* implicit */val<unsigned char>) ((((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) min((var_6), (((/* implicit */val<unsigned short>) (val<signed char>)-55)))))) : (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_14))) % (var_3))))) << (((var_13) + (1784588832461788230LL)))));
    *var_18 -= ((val<signed char>) ((((/* implicit */val<bool>) (val<unsigned short>)61663)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_10))) : (((((/* implicit */val<bool>) (val<short>)25450)) ? (var_8) : (2324136442U)))));
    *var_19 |= ((/* implicit */val<signed char>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4110742839U;
unsigned short var_6 = (unsigned short)5398;
unsigned int var_8 = 4085640096U;
signed char var_10 = (signed char)-114;
long long int var_13 = -1784588832461788224LL;
unsigned short var_14 = (unsigned short)31290;
int zero = 0;
long long int var_15 = -2501100890960949124LL;
signed char var_16 = (signed char)-30;
unsigned char var_17 = (unsigned char)224;
signed char var_18 = (signed char)-60;
signed char var_19 = (signed char)117;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 1LL;
    value_mismatch |= var_16 != (signed char)-57;
    value_mismatch |= var_17 != (unsigned char)128;
    value_mismatch |= var_18 != (signed char)54;
    value_mismatch |= var_19 != (signed char)119;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_6, var_8, var_10, var_13, var_14, zero, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
