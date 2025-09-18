/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7128
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7128
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
void test(val<short> var_0, val<long long int> var_10, val<bool> var_11, val<unsigned int> var_12, val<unsigned short> var_13, val<unsigned short> var_14, val<int> zero, val<long long int*> var_15, val<signed char*> var_16, val<int*> var_17, val<unsigned char*> var_18, val<unsigned char*> var_19, val<unsigned short*> var_20, val<signed char*> var_21, val<unsigned int*> var_22) {
    *var_15 = ((/* implicit */val<long long int>) var_14);
    if (((/* implicit */val<bool>) var_14))
    {
        *var_16 = ((/* implicit */val<signed char>) var_12);
        *var_17 = ((/* implicit */val<int>) max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11))) & (-1871557158837104364LL)))) ? (((3581636040U) >> (((12272529778379897369ULL) - (12272529778379897363ULL))))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)29445)))))), (6387032089711141051ULL)));
        *var_18 = ((/* implicit */val<unsigned char>) var_13);
        *var_19 = ((/* implicit */val<unsigned char>) var_10);
    }

    *var_20 = ((/* implicit */val<unsigned short>) var_11);
    *var_21 = ((/* implicit */val<signed char>) (-((+(((/* implicit */val<int>) var_0))))));
    *var_22 = ((/* implicit */val<unsigned int>) ((max((((/* implicit */val<long long int>) max((((/* implicit */val<unsigned int>) (val<unsigned short>)36090)), (1431311428U)))), ((~(var_10))))) - (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_14)) || (((/* implicit */val<bool>) var_10))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13129;
long long int var_10 = -6008175062586945920LL;
bool var_11 = (bool)1;
unsigned int var_12 = 264016222U;
unsigned short var_13 = (unsigned short)22794;
unsigned short var_14 = (unsigned short)9063;
int zero = 0;
long long int var_15 = -5006351900991291569LL;
signed char var_16 = (signed char)83;
int var_17 = -273693459;
unsigned char var_18 = (unsigned char)86;
unsigned char var_19 = (unsigned char)247;
unsigned short var_20 = (unsigned short)8997;
signed char var_21 = (signed char)73;
unsigned int var_22 = 1888434908U;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 9063LL;
    value_mismatch |= var_16 != (signed char)94;
    value_mismatch |= var_17 != 2084626619;
    value_mismatch |= var_18 != (unsigned char)10;
    value_mismatch |= var_19 != (unsigned char)128;
    value_mismatch |= var_20 != (unsigned short)1;
    value_mismatch |= var_21 != (signed char)-73;
    value_mismatch |= var_22 != 31125886U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_10, var_11, var_12, var_13, var_14, zero, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
