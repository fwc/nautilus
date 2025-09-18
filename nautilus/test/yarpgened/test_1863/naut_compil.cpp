/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1863
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1863
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
void test(val<signed char> var_1, val<bool> var_2, val<unsigned int> var_5, val<long long int> var_7, val<int> var_8, val<unsigned short> var_9, val<signed char> var_13, val<int> var_16, val<short> var_18, val<int> zero, val<long long int*> var_19, val<unsigned char*> var_20, val<long long int*> var_21, val<int*> var_22, val<int*> var_23) {
    *var_19 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<unsigned long long int>) max((((/* implicit */val<int>) var_18)), (min((((/* implicit */val<int>) var_13)), (-2140778120)))))) : (((val<unsigned long long int>) var_9))));
    *var_20 -= ((/* implicit */val<unsigned char>) ((val<short>) ((var_7) & (((/* implicit */val<long long int>) min((((/* implicit */val<int>) var_1)), (var_8)))))));
    *var_21 = ((/* implicit */val<long long int>) min((((/* implicit */val<unsigned int>) var_2)), (max((((/* implicit */val<unsigned int>) (val<short>)14751)), (((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)0))) : (176413403U)))))));
    *var_22 = var_16;
    *var_23 -= ((/* implicit */val<int>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-17;
bool var_2 = (bool)0;
unsigned int var_5 = 2395353619U;
long long int var_7 = 8344620138659562178LL;
int var_8 = -1724302526;
unsigned short var_9 = (unsigned short)40599;
signed char var_13 = (signed char)70;
int var_16 = 7794021;
short var_18 = (short)5992;
int zero = 0;
long long int var_19 = 4087033311291632157LL;
unsigned char var_20 = (unsigned char)54;
long long int var_21 = 8226651572504023368LL;
int var_22 = -1394702767;
int var_23 = 1384168522;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 5992LL;
    value_mismatch |= var_20 != (unsigned char)244;
    value_mismatch |= var_21 != 0LL;
    value_mismatch |= var_22 != 7794021;
    value_mismatch |= var_23 != 1384168522;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_5, var_7, var_8, var_9, var_13, var_16, var_18, zero, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
}
