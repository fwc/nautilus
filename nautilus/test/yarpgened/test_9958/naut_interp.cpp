/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9958
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9958
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
void test(val<short> var_2, val<short> var_4, val<unsigned short> var_5, val<unsigned long long int> var_7, val<unsigned short> var_9, val<unsigned char> var_11, val<unsigned char> var_14, val<unsigned short> var_16, val<signed char> var_17, val<int> zero, val<unsigned int*> var_18, val<unsigned short*> var_19, val<bool*> var_20, val<bool*> var_21) {
    *var_18 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((val<short>) ((((/* implicit */val<bool>) (val<unsigned char>)15)) ? (((/* implicit */val<int>) var_16)) : (((/* implicit */val<int>) var_17)))))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)3919)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4))) : (11317212884493514161ULL)))) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) (val<unsigned short>)47594))))) : (var_7)));
    *var_19 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_11))))) && (((/* implicit */val<bool>) (((val<bool>)1) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)17969))) : ((((val<bool>)1) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)17932))) : (9921450178487068120ULL))))))));
    *var_20 = ((/* implicit */val<bool>) var_9);
    *var_21 = ((/* implicit */val<bool>) min((((/* implicit */val<long long int>) (~(((/* implicit */val<int>) var_11))))), (min((((val<long long int>) var_14)), (((/* implicit */val<long long int>) min((((/* implicit */val<unsigned short>) (val<bool>)0)), (var_5))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)26781;
short var_4 = (short)31787;
unsigned short var_5 = (unsigned short)38691;
unsigned long long int var_7 = 12723704609644823020ULL;
unsigned short var_9 = (unsigned short)24497;
unsigned char var_11 = (unsigned char)9;
unsigned char var_14 = (unsigned char)146;
unsigned short var_16 = (unsigned short)14815;
signed char var_17 = (signed char)-125;
int zero = 0;
unsigned int var_18 = 3523678428U;
unsigned short var_19 = (unsigned short)64688;
bool var_20 = (bool)0;
bool var_21 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 26781U;
    value_mismatch |= var_19 != (unsigned short)1;
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_5, var_7, var_9, var_11, var_14, var_16, var_17, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
