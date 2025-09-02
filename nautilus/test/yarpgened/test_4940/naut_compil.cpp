/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4940
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4940
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
void test(val<bool> var_0, val<short> var_2, val<unsigned int> var_3, val<signed char> var_4, val<unsigned long long int> var_5, val<unsigned short> var_6, val<bool> var_9, val<signed char> var_10, val<unsigned int> var_12, val<bool> var_13, val<int> zero, val<long long int*> var_14, val<signed char*> var_15, val<unsigned char*> var_16, val<bool*> var_17, val<short*> var_18) {
    *var_14 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (((((val<bool>)1) || (((/* implicit */val<bool>) var_2)))) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) 26U)) || (((/* implicit */val<bool>) var_2))))) : (((/* implicit */val<int>) (val<short>)6481))))) || (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)41037)) ? (((/* implicit */val<int>) (val<unsigned short>)31991)) : (((/* implicit */val<int>) (val<signed char>)0))))) && (((/* implicit */val<bool>) var_10))))));
    *var_15 = ((/* implicit */val<signed char>) min((*var_15), (((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (~(var_3)))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4))) : (((val<unsigned long long int>) (val<unsigned short>)3))))) ? (((/* implicit */val<unsigned long long int>) (+((+(((/* implicit */val<int>) var_0))))))) : (((var_13) ? (((/* implicit */val<unsigned long long int>) (+(var_3)))) : (((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<unsigned long long int>) 3500945984U)) : (var_5))))))))));
    *var_16 = ((/* implicit */val<unsigned char>) max((*var_16), (((/* implicit */val<unsigned char>) var_2))));
    *var_17 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) ((val<bool>) var_2))) : (((((val<int>) (val<signed char>)3)) >> (((((/* implicit */val<int>) var_2)) + (31731)))))));
    *var_18 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((((/* implicit */val<int>) var_9)) >= (((/* implicit */val<int>) (val<unsigned char>)81)))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_3)))))) : (var_12)))) ? (((((/* implicit */val<long long int>) var_12)) - (((((/* implicit */val<bool>) 2147483647)) ? (9223372036854775807LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)6479))))))) : (((/* implicit */val<long long int>) max((((((/* implicit */val<int>) (val<unsigned short>)24489)) >> (((2147483647) - (2147483623))))), ((-(((/* implicit */val<int>) var_6)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
short var_2 = (short)-31711;
unsigned int var_3 = 3958305450U;
signed char var_4 = (signed char)-94;
unsigned long long int var_5 = 8331934107920700775ULL;
unsigned short var_6 = (unsigned short)13055;
bool var_9 = (bool)0;
signed char var_10 = (signed char)23;
unsigned int var_12 = 3600954943U;
bool var_13 = (bool)0;
int zero = 0;
long long int var_14 = 7366485826456746284LL;
signed char var_15 = (signed char)-96;
unsigned char var_16 = (unsigned char)71;
bool var_17 = (bool)0;
short var_18 = (short)13640;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 1LL;
    value_mismatch |= var_15 != (signed char)-96;
    value_mismatch |= var_16 != (unsigned char)71;
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != (short)13888;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_6, var_9, var_10, var_12, var_13, zero, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
