/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7368
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7368
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
void test(val<signed char> var_1, val<unsigned long long int> var_3, val<long long int> var_8, val<unsigned char> var_9, val<unsigned short> var_11, val<unsigned char> var_12, val<unsigned short> var_13, val<long long int> var_14, val<unsigned int> var_16, val<int> zero, val<short*> var_17, val<short*> var_18, val<bool*> var_19, val<int*> var_20, val<unsigned int*> var_21, val<unsigned char*> var_22) {
    *var_17 = ((/* implicit */val<short>) (!(((/* implicit */val<bool>) 17701220773590317519ULL))));
    *var_18 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) min((((((/* implicit */val<bool>) var_11)) ? (var_16) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_1))))), (((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) var_1)))))))) ? ((~(max((((/* implicit */val<unsigned long long int>) var_9)), (var_3))))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (~(-4478511518880960718LL)))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_13))) : (var_8))))));
    *var_19 = (!((!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)68))) : (5186200697781886101LL)))))));
    if (((/* implicit */val<bool>) var_14))
    {
        *var_20 = ((/* implicit */val<int>) var_12);
        *var_21 = ((/* implicit */val<unsigned int>) ((val<signed char>) (val<unsigned short>)61310));
        *var_22 &= ((/* implicit */val<unsigned char>) (-(((/* implicit */val<int>) var_1))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-14;
unsigned long long int var_3 = 8907539273686337429ULL;
long long int var_8 = 1245544887110447814LL;
unsigned char var_9 = (unsigned char)223;
unsigned short var_11 = (unsigned short)59534;
unsigned char var_12 = (unsigned char)179;
unsigned short var_13 = (unsigned short)65422;
long long int var_14 = 1405075395049825429LL;
unsigned int var_16 = 2486887331U;
int zero = 0;
short var_17 = (short)-12191;
short var_18 = (short)16189;
bool var_19 = (bool)0;
int var_20 = 1557687240;
unsigned int var_21 = 285741249U;
unsigned char var_22 = (unsigned char)254;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (short)0;
    value_mismatch |= var_18 != (short)-18326;
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != 179;
    value_mismatch |= var_21 != 126U;
    value_mismatch |= var_22 != (unsigned char)14;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_8, var_9, var_11, var_12, var_13, var_14, var_16, zero, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
