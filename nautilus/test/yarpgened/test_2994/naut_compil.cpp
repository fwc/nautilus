/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2994
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2994
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
void test(val<unsigned long long int> var_0, val<unsigned int> var_1, val<signed char> var_4, val<bool> var_5, val<bool> var_6, val<unsigned long long int> var_8, val<bool> var_11, val<bool> var_13, val<int> zero, val<bool*> var_14, val<unsigned long long int*> var_15, val<unsigned short*> var_16, val<unsigned int*> var_17, val<unsigned char*> var_18, val<signed char*> var_19) {
    *var_14 += ((/* implicit */val<bool>) max(((-(((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) 3767894007U)) == (var_0)))))), (((/* implicit */val<int>) ((val<bool>) (val<signed char>)7)))));
    *var_15 = ((/* implicit */val<unsigned long long int>) var_1);
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((var_8) / (min((((/* implicit */val<unsigned long long int>) var_1)), (8510009209353716034ULL)))))) ? (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<unsigned int>) ((val<unsigned char>) 8510009209353716038ULL))), (((((/* implicit */val<bool>) -2513689787922978199LL)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)223))) : (527073288U)))))) : (max((((6ULL) / (((/* implicit */val<unsigned long long int>) 3767893988U)))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)30))) * (var_1)))))))))
    {
        *var_16 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<signed char>)-14)) ^ (((/* implicit */val<int>) var_6))))) ? ((~(((val<unsigned long long int>) 527073261U)))) : (max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_5)) | (((/* implicit */val<int>) (val<signed char>)-15))))), (18446744073709551612ULL)))));
        *var_17 &= ((((val<bool>) var_1)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_6))) : (min((max((((/* implicit */val<unsigned int>) (val<signed char>)-1)), (3767893968U))), (((/* implicit */val<unsigned int>) var_13)))));
        *var_18 = ((/* implicit */val<unsigned char>) var_4);
        *var_19 = ((/* implicit */val<signed char>) min((var_0), (((/* implicit */val<unsigned long long int>) var_11))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2324916184425043974ULL;
unsigned int var_1 = 4178195588U;
signed char var_4 = (signed char)80;
bool var_5 = (bool)0;
bool var_6 = (bool)0;
unsigned long long int var_8 = 6477684985555524364ULL;
bool var_11 = (bool)1;
bool var_13 = (bool)1;
int zero = 0;
bool var_14 = (bool)1;
unsigned long long int var_15 = 637096836350870910ULL;
unsigned short var_16 = (unsigned short)16956;
unsigned int var_17 = 2988498249U;
unsigned char var_18 = (unsigned char)114;
signed char var_19 = (signed char)-39;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != 4178195588ULL;
    value_mismatch |= var_16 != (unsigned short)32786;
    value_mismatch |= var_17 != 0U;
    value_mismatch |= var_18 != (unsigned char)80;
    value_mismatch |= var_19 != (signed char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_5, var_6, var_8, var_11, var_13, zero, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
