/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3259
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3259
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
void test(val<bool> var_0, val<int> var_1, val<short> var_3, val<long long int> var_5, val<long long int> var_7, val<unsigned char> var_8, val<int> var_9, val<long long int> var_10, val<int> var_11, val<int> zero, val<signed char*> var_13, val<bool*> var_14, val<unsigned char*> var_15, val<signed char*> var_16, val<unsigned int*> var_17) {
    *var_13 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_9)) ? (var_10) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3)))));
    *var_14 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) (~(((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) (val<bool>)1)) : (var_9)))))) ? (((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1))) != (max((((/* implicit */val<long long int>) 2626798270U)), (var_5)))))) : (var_1)));
    *var_15 = ((/* implicit */val<unsigned char>) max((min((((/* implicit */val<long long int>) ((val<int>) var_3))), (var_5))), (((/* implicit */val<long long int>) max((((/* implicit */val<int>) (!(((/* implicit */val<bool>) -8356542526592095848LL))))), ((+(var_11))))))));
    *var_16 = ((/* implicit */val<signed char>) max((((((/* implicit */val<bool>) min((var_1), (((/* implicit */val<int>) var_3))))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) var_8))))) : (var_5))), (((/* implicit */val<long long int>) ((var_0) ? (max((var_1), (((/* implicit */val<int>) (val<signed char>)121)))) : (var_1))))));
    *var_17 = ((/* implicit */val<unsigned int>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
int var_1 = 310172916;
short var_3 = (short)-31060;
long long int var_5 = 2961950683876104615LL;
long long int var_7 = 3652243709310578338LL;
unsigned char var_8 = (unsigned char)136;
int var_9 = 2146467355;
long long int var_10 = -2744828328676643288LL;
int var_11 = 166490824;
int zero = 0;
signed char var_13 = (signed char)-113;
bool var_14 = (bool)0;
unsigned char var_15 = (unsigned char)199;
signed char var_16 = (signed char)-16;
unsigned int var_17 = 170250823U;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (signed char)40;
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != (unsigned char)200;
    value_mismatch |= var_16 != (signed char)-12;
    value_mismatch |= var_17 != 136U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_5, var_7, var_8, var_9, var_10, var_11, zero, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
