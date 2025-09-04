/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2001
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2001
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
void test(val<long long int> var_0, val<long long int> var_1, val<signed char> var_3, val<bool> var_5, val<long long int> var_6, val<unsigned int> var_8, val<int> var_9, val<unsigned long long int> var_10, val<unsigned short> var_11, val<signed char> var_12, val<unsigned long long int> var_13, val<unsigned int> var_15, val<unsigned short> var_16, val<int> zero, val<short*> var_18, val<signed char*> var_19, val<unsigned int*> var_20, val<signed char*> var_21, val<unsigned short*> var_22) {
    *var_18 = ((/* implicit */val<short>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_16)) >> (((9466159738575865164ULL) - (9466159738575865151ULL)))))) || (((((/* implicit */val<bool>) var_11)) && (((/* implicit */val<bool>) (val<unsigned short>)48608)))))))) <= (((((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_16)) || (((/* implicit */val<bool>) var_1)))))) / (((((/* implicit */val<bool>) var_10)) ? (var_6) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)42935)))))))));
    *var_19 = ((/* implicit */val<signed char>) ((var_0) & (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)48593))) & (var_15)))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_16))))) : (((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) var_3)) : (var_9))))))));
    *var_20 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_13)) ? (((/* implicit */val<unsigned long long int>) ((val<unsigned int>) ((((/* implicit */val<bool>) (val<signed char>)34)) ? (((/* implicit */val<int>) (val<unsigned short>)16923)) : (((/* implicit */val<int>) (val<unsigned short>)33665)))))) : (((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_11))))) ? (((((/* implicit */val<bool>) var_12)) ? (var_13) : (var_13))) : (((/* implicit */val<unsigned long long int>) ((var_8) & (var_8))))))));
    *var_21 = ((/* implicit */val<signed char>) max((*var_21), (((/* implicit */val<signed char>) var_16))));
    *var_22 = ((/* implicit */val<unsigned short>) ((val<short>) ((((/* implicit */val<bool>) ((val<signed char>) var_1))) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) 9466159738575865167ULL)) && ((val<bool>)1)))) : (((/* implicit */val<int>) var_5)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5518494670619921745LL;
long long int var_1 = -4258027875794857681LL;
signed char var_3 = (signed char)-20;
bool var_5 = (bool)0;
long long int var_6 = 8738765465091740861LL;
unsigned int var_8 = 4051472894U;
int var_9 = -236271197;
unsigned long long int var_10 = 13102327105011366862ULL;
unsigned short var_11 = (unsigned short)1014;
signed char var_12 = (signed char)-107;
unsigned long long int var_13 = 8342294900005689620ULL;
unsigned int var_15 = 1957411353U;
unsigned short var_16 = (unsigned short)28054;
int zero = 0;
short var_18 = (short)20579;
signed char var_19 = (signed char)35;
unsigned int var_20 = 1152064440U;
signed char var_21 = (signed char)-60;
unsigned short var_22 = (unsigned short)3783;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)0;
    value_mismatch |= var_19 != (signed char)0;
    value_mismatch |= var_20 != 16923U;
    value_mismatch |= var_21 != (signed char)-60;
    value_mismatch |= var_22 != (unsigned short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_5, var_6, var_8, var_9, var_10, var_11, var_12, var_13, var_15, var_16, zero, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
