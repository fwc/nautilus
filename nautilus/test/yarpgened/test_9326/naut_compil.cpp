/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9326
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9326
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
void test(val<bool> var_0, val<bool> var_2, val<signed char> var_4, val<short> var_5, val<unsigned short> var_8, val<unsigned int> var_11, val<int> zero, val<unsigned short*> var_12, val<unsigned short*> var_13, val<int*> var_14, val<signed char*> var_15, val<int*> var_16, val<long long int*> var_17, val<unsigned char*> var_18, val<long long int*> var_19) {
    *var_12 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned short>)11958))))) << (min((((/* implicit */val<unsigned int>) var_2)), (max((var_11), (((/* implicit */val<unsigned int>) var_2))))))));
    if (((/* implicit */val<bool>) var_8))
    {
        *var_13 = ((/* implicit */val<unsigned short>) var_11);
        *var_14 = ((/* implicit */val<int>) -5537897724683399515LL);
    }

    *var_15 = ((/* implicit */val<signed char>) var_2);
    if (((/* implicit */val<bool>) (+(((((/* implicit */val<int>) var_2)) + (((/* implicit */val<int>) (val<unsigned char>)100)))))))
    {
        *var_16 = ((/* implicit */val<int>) -8375415713674029803LL);
        if (((/* implicit */val<bool>) var_4))
        {
            *var_17 = ((/* implicit */val<long long int>) var_2);
            *var_18 = ((/* implicit */val<unsigned char>) var_5);
        }

        *var_19 = ((((((/* implicit */val<bool>) 1371494906)) ? (2479231571039769050LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_0))))) << (((((var_11) | (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_0))))) - (3200120894U))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
bool var_2 = (bool)1;
signed char var_4 = (signed char)-45;
short var_5 = (short)28622;
unsigned short var_8 = (unsigned short)1793;
unsigned int var_11 = 3200120896U;
int zero = 0;
unsigned short var_12 = (unsigned short)15596;
unsigned short var_13 = (unsigned short)56621;
int var_14 = -665596012;
signed char var_15 = (signed char)62;
int var_16 = 904515802;
long long int var_17 = 836676483643474201LL;
unsigned char var_18 = (unsigned char)208;
long long int var_19 = -6167856616120084990LL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)0;
    value_mismatch |= var_13 != (unsigned short)63552;
    value_mismatch |= var_14 != 1171082917;
    value_mismatch |= var_15 != (signed char)1;
    value_mismatch |= var_16 != -2076437227;
    value_mismatch |= var_17 != 1LL;
    value_mismatch |= var_18 != (unsigned char)206;
    value_mismatch |= var_19 != -8529817789550475416LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_5, var_8, var_11, zero, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
