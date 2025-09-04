/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2330
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2330
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
void test(val<unsigned short> var_0, val<int> var_2, val<short> var_3, val<long long int> var_5, val<unsigned int> var_6, val<short> var_8, val<int> var_9, val<unsigned int> var_10, val<int> var_11, val<signed char> var_12, val<bool> var_13, val<signed char> var_14, val<int> zero, val<long long int*> var_16, val<unsigned char*> var_17, val<short*> var_18, val<unsigned long long int*> var_19) {
    *var_16 ^= ((/* implicit */val<long long int>) ((((val<unsigned long long int>) ((val<int>) var_13))) & (((/* implicit */val<unsigned long long int>) var_2))));
    *var_17 = ((/* implicit */val<unsigned char>) var_9);
    *var_18 ^= ((/* implicit */val<short>) ((((((val<unsigned long long int>) (val<unsigned char>)190)) <= (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<unsigned int>) var_8)), (var_10)))))) ? (((/* implicit */val<int>) ((val<short>) 2120548901))) : ((~((~(var_11)))))));
    *var_19 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((((/* implicit */val<int>) var_14)) ^ (((/* implicit */val<int>) var_12)))) + (((((/* implicit */val<int>) var_12)) - (((/* implicit */val<int>) var_14))))))) ? (((((/* implicit */val<bool>) min((var_5), (((/* implicit */val<long long int>) var_0))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) 29ULL)))))) : (min((((/* implicit */val<unsigned int>) var_8)), (var_6))))) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_3)) ? (min((var_9), (((/* implicit */val<int>) var_0)))) : (((/* implicit */val<int>) ((var_11) >= (((/* implicit */val<int>) var_0))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21334;
int var_2 = -1026192745;
short var_3 = (short)-16808;
long long int var_5 = 4017412463992601538LL;
unsigned int var_6 = 4284075063U;
short var_8 = (short)15774;
int var_9 = 180464453;
unsigned int var_10 = 2170075992U;
int var_11 = 171970827;
signed char var_12 = (signed char)47;
bool var_13 = (bool)1;
signed char var_14 = (signed char)12;
int zero = 0;
long long int var_16 = -5802306160239292989LL;
unsigned char var_17 = (unsigned char)157;
short var_18 = (short)-12191;
unsigned long long int var_19 = 17706377959327576866ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != -5802306160239292990LL;
    value_mismatch |= var_17 != (unsigned char)69;
    value_mismatch |= var_18 != (short)-11708;
    value_mismatch |= var_19 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_5, var_6, var_8, var_9, var_10, var_11, var_12, var_13, var_14, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
