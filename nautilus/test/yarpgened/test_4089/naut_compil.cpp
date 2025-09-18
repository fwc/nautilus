/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4089
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4089
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
void test(val<long long int> var_0, val<bool> var_1, val<unsigned char> var_3, val<unsigned char> var_4, val<int> var_5, val<long long int> var_6, val<int> var_7, val<short> var_8, val<int> zero, val<bool*> var_10, val<short*> var_11, val<long long int*> var_12) {
    *var_10 = ((/* implicit */val<bool>) ((((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_6))))) : (((((/* implicit */val<bool>) (val<unsigned char>)250)) ? (var_5) : (var_5))))) | (((((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1))) * (5597374432185561944ULL)))) ? (((/* implicit */val<int>) (val<unsigned char>)233)) : (max((171852224), (var_7)))))));
    *var_11 ^= ((/* implicit */val<short>) max((((/* implicit */val<long long int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) -4193756340351791904LL)))))) >= (min((0ULL), (((/* implicit */val<unsigned long long int>) var_0))))))), (((((/* implicit */val<long long int>) ((var_5) + (((/* implicit */val<int>) (val<signed char>)-23))))) + (min((var_0), (((/* implicit */val<long long int>) var_8))))))));
    *var_12 -= ((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) var_4))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2404451947316104485LL;
bool var_1 = (bool)1;
unsigned char var_3 = (unsigned char)156;
unsigned char var_4 = (unsigned char)61;
int var_5 = -290778493;
long long int var_6 = 5345765746010157880LL;
int var_7 = 974437539;
short var_8 = (short)26684;
int zero = 0;
bool var_10 = (bool)0;
short var_11 = (short)-5236;
long long int var_12 = 2699277947163214547LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (bool)1;
    value_mismatch |= var_11 != (short)-5235;
    value_mismatch |= var_12 != 2699277947163214547LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_5, var_6, var_7, var_8, zero, &var_10, &var_11, &var_12);
  checksum();
}
