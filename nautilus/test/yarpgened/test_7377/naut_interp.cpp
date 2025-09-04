/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7377
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7377
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
void test(val<bool> var_1, val<unsigned char> var_2, val<short> var_3, val<bool> var_7, val<unsigned long long int> var_8, val<bool> var_9, val<unsigned short> var_10, val<long long int> var_12, val<long long int> var_14, val<int> zero, val<unsigned int*> var_16, val<signed char*> var_17, val<unsigned short*> var_18) {
    *var_16 ^= ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_10))))) ? (((((/* implicit */val<bool>) min((var_10), (((/* implicit */val<unsigned short>) (val<signed char>)-18))))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)-18))) - (var_14)))) : ((-(18446744073709551611ULL))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2)))));
    *var_17 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) var_2))))) ? (((/* implicit */val<int>) max((((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) (val<signed char>)17)) == (((/* implicit */val<int>) (val<bool>)1))))), (((val<unsigned char>) var_12))))) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<int>) var_9)) - (((/* implicit */val<int>) (val<signed char>)19))))))))));
    *var_18 = ((/* implicit */val<unsigned short>) min(((~(((/* implicit */val<int>) (val<bool>)1)))), ((~(((/* implicit */val<int>) min((var_7), (var_1))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)1;
unsigned char var_2 = (unsigned char)152;
short var_3 = (short)-17070;
bool var_7 = (bool)1;
unsigned long long int var_8 = 13681057699911518175ULL;
bool var_9 = (bool)1;
unsigned short var_10 = (unsigned short)40645;
long long int var_12 = -6744405559588717486LL;
long long int var_14 = 1682456991696999493LL;
int zero = 0;
unsigned int var_16 = 1796378974U;
signed char var_17 = (signed char)-102;
unsigned short var_18 = (unsigned short)1396;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 3742743287U;
    value_mismatch |= var_17 != (signed char)82;
    value_mismatch |= var_18 != (unsigned short)65534;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_7, var_8, var_9, var_10, var_12, var_14, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
