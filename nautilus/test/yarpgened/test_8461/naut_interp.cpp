/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8461
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8461
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
void test(val<int> var_0, val<unsigned long long int> var_1, val<unsigned long long int> var_4, val<long long int> var_5, val<unsigned long long int> var_7, val<signed char> var_8, val<unsigned long long int> var_9, val<signed char> var_10, val<unsigned long long int> var_11, val<unsigned int> var_13, val<unsigned int> var_14, val<int> var_15, val<int> zero, val<unsigned short*> var_17, val<unsigned short*> var_18, val<unsigned int*> var_19, val<bool*> var_20, val<signed char*> var_21, val<unsigned short*> var_22) {
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) (-(var_0)))) ? (((/* implicit */val<unsigned int>) min((var_15), (((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) (val<bool>)0)) : (((/* implicit */val<int>) (val<unsigned short>)53531))))))) : (var_13))))
    {
        *var_17 = ((/* implicit */val<unsigned short>) ((max((((/* implicit */val<unsigned long long int>) var_5)), (max((var_4), (((/* implicit */val<unsigned long long int>) var_14)))))) << (((/* implicit */val<int>) (val<bool>)1))));
        *var_18 = ((/* implicit */val<unsigned short>) max((*var_18), (((/* implicit */val<unsigned short>) max((var_1), (((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_10))) : (min((var_7), (((/* implicit */val<unsigned long long int>) (val<bool>)1)))))))))));
        *var_19 = ((/* implicit */val<unsigned int>) min((max(((-(var_15))), (((/* implicit */val<int>) ((((/* implicit */val<long long int>) var_13)) > (var_5)))))), (((((/* implicit */val<int>) var_8)) * (((/* implicit */val<int>) var_8))))));
    }
    else
    {
        *var_20 += (val<bool>)1;
        *var_21 = ((/* implicit */val<signed char>) var_4);
    }

    *var_22 = ((/* implicit */val<unsigned short>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 674240265;
unsigned long long int var_1 = 9251953537630138875ULL;
unsigned long long int var_4 = 16628849081497720463ULL;
long long int var_5 = 3369215307981873834LL;
unsigned long long int var_7 = 8276117818221213810ULL;
signed char var_8 = (signed char)-8;
unsigned long long int var_9 = 11896886685022042719ULL;
signed char var_10 = (signed char)122;
unsigned long long int var_11 = 10319398232987218168ULL;
unsigned int var_13 = 343775276U;
unsigned int var_14 = 3402004969U;
int var_15 = 972559280;
int zero = 0;
unsigned short var_17 = (unsigned short)41015;
unsigned short var_18 = (unsigned short)9014;
unsigned int var_19 = 4020076883U;
bool var_20 = (bool)1;
signed char var_21 = (signed char)55;
unsigned short var_22 = (unsigned short)6436;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned short)41015;
    value_mismatch |= var_18 != (unsigned short)9014;
    value_mismatch |= var_19 != 4020076883U;
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != (signed char)-113;
    value_mismatch |= var_22 != (unsigned short)5897;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_5, var_7, var_8, var_9, var_10, var_11, var_13, var_14, var_15, zero, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
