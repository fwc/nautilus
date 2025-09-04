/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7439
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7439
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
void test(val<long long int> var_0, val<unsigned char> var_1, val<unsigned int> var_2, val<long long int> var_3, val<long long int> var_4, val<unsigned short> var_5, val<bool> var_6, val<unsigned int> var_7, val<signed char> var_8, val<short> var_9, val<int> zero, val<signed char*> var_10, val<long long int*> var_11, val<bool*> var_12) {
    *var_10 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_8)) ? (((val<long long int>) min((var_3), (((/* implicit */val<long long int>) (val<bool>)1))))) : (((((/* implicit */val<bool>) var_3)) ? (((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_5))) - (var_4))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<bool>) var_2))))))));
    *var_11 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((var_2) ^ (2774421694U)))) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_1))))) ? (max((((((/* implicit */val<bool>) var_3)) ? (1520545583U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_9))))), (max((var_7), (((/* implicit */val<unsigned int>) var_6)))))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<long long int>) 2774421694U)) : (var_4))) > (var_3)))))));
    *var_12 = ((/* implicit */val<bool>) min((*var_12), (((/* implicit */val<bool>) var_0))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4583199347763592164LL;
unsigned char var_1 = (unsigned char)117;
unsigned int var_2 = 885346302U;
long long int var_3 = 2058874361491420567LL;
long long int var_4 = 4345778995580348346LL;
unsigned short var_5 = (unsigned short)9802;
bool var_6 = (bool)1;
unsigned int var_7 = 2728764569U;
signed char var_8 = (signed char)-96;
short var_9 = (short)-18240;
int zero = 0;
signed char var_10 = (signed char)54;
long long int var_11 = 1537673716404966164LL;
bool var_12 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (signed char)1;
    value_mismatch |= var_11 != 2728764569LL;
    value_mismatch |= var_12 != (bool)1;
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
  assert(!value_mismatch);
}
