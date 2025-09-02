/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 10000
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=10000
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
void test(val<short> var_0, val<long long int> var_1, val<bool> var_2, val<unsigned short> var_3, val<short> var_4, val<unsigned long long int> var_5, val<int> var_6, val<bool> var_8, val<bool> var_11, val<int> zero, val<unsigned long long int*> var_13, val<unsigned char*> var_14, val<long long int*> var_15, val<long long int*> var_16, val<signed char*> var_17, val<unsigned short*> var_18, val<unsigned char*> var_19) {
    if (((/* implicit */val<bool>) var_1))
    {
        *var_13 = ((((/* implicit */val<unsigned long long int>) min((((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) var_4)))), (((/* implicit */val<int>) var_3))))) & ((((~(var_5))) ^ (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) (val<bool>)1))))))));
        *var_14 = ((/* implicit */val<unsigned char>) ((val<signed char>) min((max((var_3), (((/* implicit */val<unsigned short>) var_2)))), (((/* implicit */val<unsigned short>) var_4)))));
        *var_15 = ((/* implicit */val<long long int>) (~((+(((/* implicit */val<int>) max((var_0), (((/* implicit */val<short>) var_11)))))))));
    }

    *var_16 = ((/* implicit */val<long long int>) ((val<int>) ((val<short>) ((val<bool>) var_3))));
    if (var_2)
    {
        *var_17 = ((/* implicit */val<signed char>) var_11);
        *var_18 *= ((/* implicit */val<unsigned short>) ((val<unsigned char>) min(((val<bool>)1), (var_11))));
        *var_19 = ((/* implicit */val<unsigned char>) max((*var_19), (((/* implicit */val<unsigned char>) min((min((((var_5) & (var_5))), (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<short>) var_8)), (var_4)))))), (((/* implicit */val<unsigned long long int>) var_8)))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19047;
long long int var_1 = 6871687365503414016LL;
bool var_2 = (bool)1;
unsigned short var_3 = (unsigned short)58329;
short var_4 = (short)-24919;
unsigned long long int var_5 = 1994404452368391200ULL;
int var_6 = -1184624584;
bool var_8 = (bool)0;
bool var_11 = (bool)1;
int zero = 0;
unsigned long long int var_13 = 10628046097705463586ULL;
unsigned char var_14 = (unsigned char)23;
long long int var_15 = 328603761645565697LL;
long long int var_16 = -843004357443952171LL;
signed char var_17 = (signed char)-16;
unsigned short var_18 = (unsigned short)5417;
unsigned char var_19 = (unsigned char)59;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 1ULL;
    value_mismatch |= var_14 != (unsigned char)169;
    value_mismatch |= var_15 != -2LL;
    value_mismatch |= var_16 != 1LL;
    value_mismatch |= var_17 != (signed char)1;
    value_mismatch |= var_18 != (unsigned short)5417;
    value_mismatch |= var_19 != (unsigned char)59;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_8, var_11, zero, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
