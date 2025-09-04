/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9995
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9995
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
void test(val<int> var_3, val<unsigned short> var_4, val<unsigned char> var_5, val<long long int> var_7, val<signed char> var_10, val<bool> var_11, val<unsigned short> var_13, val<int> zero, val<short*> var_18, val<unsigned long long int*> var_19) {
    *var_18 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) (+(((/* implicit */val<int>) ((val<unsigned char>) var_4)))))) ? (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) (val<bool>)0)) : (((/* implicit */val<int>) (val<bool>)1))))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<bool>)0))))) : (max((var_7), (((/* implicit */val<long long int>) (val<bool>)1)))))) : (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) (val<unsigned char>)249))))) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) var_11)))))));
    *var_19 &= ((/* implicit */val<unsigned long long int>) ((val<unsigned short>) ((val<long long int>) ((var_3) / (((/* implicit */val<int>) var_13))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 577427004;
unsigned short var_4 = (unsigned short)26165;
unsigned char var_5 = (unsigned char)150;
long long int var_7 = -8605528173168783812LL;
signed char var_10 = (signed char)30;
bool var_11 = (bool)1;
unsigned short var_13 = (unsigned short)9084;
int zero = 0;
short var_18 = (short)-20337;
unsigned long long int var_19 = 15244193254148455335ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)1;
    value_mismatch |= var_19 != 47109ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_5, var_7, var_10, var_11, var_13, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
