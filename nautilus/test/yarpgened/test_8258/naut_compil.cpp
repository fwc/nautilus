/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8258
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8258
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
void test(val<unsigned short> var_2, val<unsigned int> var_3, val<unsigned long long int> var_4, val<unsigned long long int> var_5, val<unsigned char> var_8, val<unsigned short> var_9, val<bool> var_13, val<unsigned long long int> var_14, val<int> zero, val<bool*> var_17, val<int*> var_18) {
    *var_17 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((((/* implicit */val<unsigned char>) ((var_13) || (((/* implicit */val<bool>) 5476979301837138175ULL))))), (var_8)))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) min((((/* implicit */val<unsigned short>) (val<signed char>)49)), (var_9)))))))) : (var_5)));
    *var_18 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) (-(((/* implicit */val<int>) (val<unsigned char>)110))))) ? (max((max((var_4), (var_5))), (var_14))) : (max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) (val<signed char>)55)) + (((/* implicit */val<int>) var_2))))), (((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<unsigned long long int>) var_3)) : (var_5)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)10706;
unsigned int var_3 = 2743822243U;
unsigned long long int var_4 = 8361271505586685363ULL;
unsigned long long int var_5 = 14984938921823014481ULL;
unsigned char var_8 = (unsigned char)119;
unsigned short var_9 = (unsigned short)1367;
bool var_13 = (bool)0;
unsigned long long int var_14 = 5265911073420024279ULL;
int zero = 0;
bool var_17 = (bool)0;
int var_18 = -808464311;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (bool)0;
    value_mismatch |= var_18 != 1211076177;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_5, var_8, var_9, var_13, var_14, zero, &var_17, &var_18);
  checksum();
}
