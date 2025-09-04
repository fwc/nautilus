/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6212
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6212
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
void test(val<signed char> var_0, val<bool> var_3, val<unsigned char> var_4, val<long long int> var_5, val<signed char> var_6, val<signed char> var_7, val<unsigned int> var_8, val<unsigned int> var_9, val<signed char> var_10, val<long long int> var_11, val<long long int> var_12, val<signed char> var_13, val<int> zero, val<int*> var_14, val<unsigned int*> var_15, val<unsigned short*> var_16, val<long long int*> var_17, val<short*> var_18, val<unsigned int*> var_19) {
    if (((/* implicit */val<bool>) var_8))
    {
        *var_14 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_0)) ? (((((/* implicit */val<bool>) ((val<unsigned short>) var_0))) ? (var_11) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_5)) && (((/* implicit */val<bool>) var_0)))))))) : (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4))) : (var_8)))) ? (((val<unsigned int>) var_3)) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<unsigned char>) var_4)))))))));
        *var_15 = min((min((33554431U), (((/* implicit */val<unsigned int>) (val<short>)-5742)))), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (~(var_8)))) ? ((~(((/* implicit */val<int>) (val<unsigned short>)51895)))) : (((((/* implicit */val<bool>) var_13)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) var_13))))))));
        *var_16 = ((/* implicit */val<unsigned short>) var_0);
        *var_17 = ((val<long long int>) var_3);
    }

    if (((/* implicit */val<bool>) min(((~(((/* implicit */val<int>) (val<unsigned short>)5586)))), ((-(((/* implicit */val<int>) var_10)))))))
    {
        *var_18 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) (val<unsigned char>)49)) >= (((/* implicit */val<int>) (val<unsigned char>)255)))))) : (var_5)))) ? (((((/* implicit */val<bool>) 1092254250U)) ? ((-(3202713022U))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((1092254274U) == (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)50282))))))))) : (2503193943U)));
        *var_19 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_9)) ? (var_9) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_6)))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) min(((val<unsigned short>)65535), (((/* implicit */val<unsigned short>) var_0)))))) : (((var_11) << (((505363574U) - (505363574U)))))))) ? (min((((/* implicit */val<unsigned long long int>) max((var_10), (((/* implicit */val<signed char>) var_3))))), (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))) - (14409773368729961046ULL))))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((val<short>) 4294967295U))) ? (((((/* implicit */val<bool>) var_5)) ? (var_12) : (((/* implicit */val<long long int>) 2503193943U)))) : (var_12))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)64;
bool var_3 = (bool)0;
unsigned char var_4 = (unsigned char)245;
long long int var_5 = -5339386490627657635LL;
signed char var_6 = (signed char)-22;
signed char var_7 = (signed char)-122;
unsigned int var_8 = 110350228U;
unsigned int var_9 = 3454315903U;
signed char var_10 = (signed char)-53;
long long int var_11 = 628484349716666701LL;
long long int var_12 = 7826301719676545848LL;
signed char var_13 = (signed char)12;
int zero = 0;
int var_14 = -1658100829;
unsigned int var_15 = 1336291290U;
unsigned short var_16 = (unsigned short)50434;
long long int var_17 = -3820549924004983960LL;
short var_18 = (short)-19637;
unsigned int var_19 = 2667925850U;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != -1413408435;
    value_mismatch |= var_15 != 33554431U;
    value_mismatch |= var_16 != (unsigned short)64;
    value_mismatch |= var_17 != 0LL;
    value_mismatch |= var_18 != (short)-19113;
    value_mismatch |= var_19 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, var_13, zero, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
