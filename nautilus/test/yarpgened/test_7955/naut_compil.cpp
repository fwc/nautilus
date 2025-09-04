/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7955
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7955
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
void test(val<bool> var_0, val<unsigned int> var_1, val<unsigned short> var_2, val<int> var_3, val<unsigned char> var_4, val<unsigned short> var_5, val<bool> var_6, val<bool> var_7, val<unsigned short> var_8, val<unsigned char> var_10, val<int> zero, val<int*> var_11, val<unsigned long long int*> var_12, val<long long int*> var_13) {
    if (((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) max(((+(((/* implicit */val<int>) (val<unsigned char>)32)))), (((/* implicit */val<int>) var_5))))) | (min((((436833827631702148ULL) + (((/* implicit */val<unsigned long long int>) 2276919594U)))), (0ULL))))))
    {
        *var_11 = ((/* implicit */val<int>) min((((/* implicit */val<unsigned long long int>) ((min((((/* implicit */val<int>) var_2)), (var_3))) * (((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) var_1)) >= (18009910246077849478ULL))))))), (max((((val<unsigned long long int>) 18009910246077849468ULL)), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) (val<short>)29245)) << (((/* implicit */val<int>) var_6)))))))));
        *var_12 = min((((/* implicit */val<unsigned long long int>) (+(((1111617110U) | (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_10)))))))), (((((/* implicit */val<bool>) var_5)) ? (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)(-127 - 1)))) ^ (9211919755386904540ULL))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_7))))));
    }

    *var_13 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_0)) | (((var_6) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) var_0))))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4))) : ((-(((((/* implicit */val<bool>) (val<short>)410)) ? (var_1) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_2)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
unsigned int var_1 = 2637391202U;
unsigned short var_2 = (unsigned short)19119;
int var_3 = -380557127;
unsigned char var_4 = (unsigned char)86;
unsigned short var_5 = (unsigned short)2277;
bool var_6 = (bool)0;
bool var_7 = (bool)0;
unsigned short var_8 = (unsigned short)7925;
unsigned char var_10 = (unsigned char)90;
int zero = 0;
int var_11 = -1874695669;
unsigned long long int var_12 = 5424249608711931080ULL;
long long int var_13 = -1825236980360119819LL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 0;
    value_mismatch |= var_12 != 1111617118ULL;
    value_mismatch |= var_13 != 1657576094LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
