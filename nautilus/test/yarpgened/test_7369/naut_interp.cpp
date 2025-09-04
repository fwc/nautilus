/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7369
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7369
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
void test(val<int> var_0, val<unsigned char> var_4, val<unsigned char> var_5, val<signed char> var_11, val<unsigned short> var_13, val<unsigned int> var_17, val<int> zero, val<int*> var_18, val<unsigned long long int*> var_19, val<unsigned short*> var_20, val<int*> var_21) {
    *var_18 = (~(((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_0))))));
    *var_19 = ((/* implicit */val<unsigned long long int>) ((var_17) & (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<unsigned char>) ((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) var_5)))))))));
    *var_20 = ((/* implicit */val<unsigned short>) ((((val<unsigned int>) 33554428U)) << (((min((((/* implicit */val<unsigned int>) var_11)), (((((/* implicit */val<bool>) var_13)) ? (4261412853U) : (((/* implicit */val<unsigned int>) 0)))))) - (74U)))));
    *var_21 = ((/* implicit */val<int>) ((((/* implicit */val<int>) ((val<signed char>) (+(((/* implicit */val<int>) var_4)))))) <= (((/* implicit */val<int>) (((!(((/* implicit */val<bool>) 744042550)))) && (((/* implicit */val<bool>) (((val<bool>)1) ? (33554416U) : (33554427U)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -557998397;
unsigned char var_4 = (unsigned char)24;
unsigned char var_5 = (unsigned char)238;
signed char var_11 = (signed char)81;
unsigned short var_13 = (unsigned short)52905;
unsigned int var_17 = 3659709262U;
int zero = 0;
int var_18 = 598049140;
unsigned long long int var_19 = 11747852184874547745ULL;
unsigned short var_20 = (unsigned short)18120;
int var_21 = 448102826;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != -1;
    value_mismatch |= var_19 != 0ULL;
    value_mismatch |= var_20 != (unsigned short)65024;
    value_mismatch |= var_21 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_5, var_11, var_13, var_17, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
