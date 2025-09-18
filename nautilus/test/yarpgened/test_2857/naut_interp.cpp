/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2857
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2857
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
void test(val<signed char> var_0, val<unsigned char> var_1, val<unsigned short> var_2, val<bool> var_3, val<long long int> var_4, val<unsigned short> var_5, val<short> var_6, val<bool> var_7, val<unsigned int> var_8, val<signed char> var_9, val<int> zero, val<unsigned int*> var_10, val<signed char*> var_11, val<unsigned char*> var_12) {
    *var_10 = ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) var_3))))), (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_6))) - (var_8)))))) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) min((var_2), (((/* implicit */val<unsigned short>) var_7))))) ? ((-(((/* implicit */val<int>) var_9)))) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<signed char>)-52)) && (((/* implicit */val<bool>) (val<short>)4438)))))))) : (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_5))) : (var_4)))) ? (((/* implicit */val<unsigned int>) ((var_7) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) var_6))))) : ((-(var_8))))));
    *var_11 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) min((((/* implicit */val<unsigned char>) var_7)), (var_1))))))) ? (min((((/* implicit */val<long long int>) var_1)), (((((/* implicit */val<bool>) (val<unsigned char>)168)) ? (549755813887LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)190))))))) : (((((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_1))))) ? (((var_3) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9))) : (var_4))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_0)))))));
    *var_12 |= ((/* implicit */val<unsigned char>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)65;
unsigned char var_1 = (unsigned char)71;
unsigned short var_2 = (unsigned short)10553;
bool var_3 = (bool)1;
long long int var_4 = -5203502288538785022LL;
unsigned short var_5 = (unsigned short)54079;
short var_6 = (short)-22463;
bool var_7 = (bool)0;
unsigned int var_8 = 707456269U;
signed char var_9 = (signed char)-56;
int zero = 0;
unsigned int var_10 = 856608257U;
signed char var_11 = (signed char)26;
unsigned char var_12 = (unsigned char)151;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 1U;
    value_mismatch |= var_11 != (signed char)71;
    value_mismatch |= var_12 != (unsigned char)159;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, zero, &var_10, &var_11, &var_12);
  checksum();
}
