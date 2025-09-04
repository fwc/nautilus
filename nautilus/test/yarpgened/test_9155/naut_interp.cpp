/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9155
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9155
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
void test(val<short> var_1, val<unsigned long long int> var_2, val<short> var_3, val<unsigned int> var_4, val<signed char> var_5, val<unsigned long long int> var_6, val<bool> var_7, val<unsigned int> var_8, val<unsigned short> var_13, val<short> var_16, val<short> var_17, val<int> zero, val<short*> var_18, val<unsigned short*> var_19, val<signed char*> var_20, val<unsigned char*> var_21, val<int*> var_22, val<signed char*> var_23) {
    *var_18 = ((/* implicit */val<short>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_16)) & (((/* implicit */val<int>) var_17))))) ? ((+(var_6))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3))))))));
    if (((/* implicit */val<bool>) var_1))
    {
        if (((/* implicit */val<bool>) ((val<long long int>) max((((/* implicit */val<unsigned int>) (val<unsigned short>)65535)), (min((var_4), (((/* implicit */val<unsigned int>) (val<short>)18950))))))))
        {
            *var_19 = ((/* implicit */val<unsigned short>) min((((/* implicit */val<unsigned int>) var_1)), (var_8)));
            *var_20 = var_5;
            *var_21 = ((/* implicit */val<unsigned char>) var_6);
        }

        *var_22 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (-(((/* implicit */val<int>) (val<short>)-18951))))) ? (((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) (val<short>)18950))))) : (var_2)))) ? (var_6) : (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) var_7)), (var_13)))), ((-(((/* implicit */val<int>) (val<short>)-18951)))))))));
        *var_23 = ((/* implicit */val<signed char>) max((((/* implicit */val<unsigned short>) (val<bool>)1)), ((val<unsigned short>)9086)));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-8378;
unsigned long long int var_2 = 3861964409558751160ULL;
short var_3 = (short)-20675;
unsigned int var_4 = 1356184075U;
signed char var_5 = (signed char)59;
unsigned long long int var_6 = 4466388677020620597ULL;
bool var_7 = (bool)1;
unsigned int var_8 = 1468564265U;
unsigned short var_13 = (unsigned short)19220;
short var_16 = (short)-15596;
short var_17 = (short)-30168;
int zero = 0;
short var_18 = (short)16474;
unsigned short var_19 = (unsigned short)23020;
signed char var_20 = (signed char)89;
unsigned char var_21 = (unsigned char)86;
int var_22 = -295408378;
signed char var_23 = (signed char)-75;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)0;
    value_mismatch |= var_19 != (unsigned short)33577;
    value_mismatch |= var_20 != (signed char)59;
    value_mismatch |= var_21 != (unsigned char)53;
    value_mismatch |= var_22 != 2057574197;
    value_mismatch |= var_23 != (signed char)126;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_13, var_16, var_17, zero, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
