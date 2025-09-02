/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1947
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1947
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
void test(val<short> var_0, val<unsigned char> var_2, val<unsigned long long int> var_3, val<unsigned char> var_4, val<unsigned char> var_5, val<int> var_6, val<unsigned long long int> var_7, val<unsigned int> var_8, val<unsigned short> var_9, val<int> zero, val<short*> var_10, val<signed char*> var_11, val<unsigned int*> var_12, val<unsigned short*> var_13, val<bool*> var_14) {
    *var_10 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((val<unsigned long long int>) var_5))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_9))) : (var_8)))) : (((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)16698))) : (2743141229893695187ULL)))))) || (((/* implicit */val<bool>) ((((/* implicit */val<bool>) max((var_7), (var_7)))) ? (((((/* implicit */val<bool>) var_2)) ? (var_3) : (((/* implicit */val<unsigned long long int>) var_8)))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4))))))));
    *var_11 += ((/* implicit */val<signed char>) (((val<bool>)0) ? (((/* implicit */val<int>) (val<signed char>)32)) : (((/* implicit */val<int>) (val<unsigned char>)233))));
    *var_12 &= ((/* implicit */val<unsigned int>) var_0);
    *var_13 = ((/* implicit */val<unsigned short>) var_7);
    *var_14 = ((/* implicit */val<bool>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28958;
unsigned char var_2 = (unsigned char)39;
unsigned long long int var_3 = 17657547176675331309ULL;
unsigned char var_4 = (unsigned char)232;
unsigned char var_5 = (unsigned char)201;
int var_6 = -744634605;
unsigned long long int var_7 = 7665507681869185688ULL;
unsigned int var_8 = 3972823687U;
unsigned short var_9 = (unsigned short)64631;
int zero = 0;
short var_10 = (short)-5381;
signed char var_11 = (signed char)-114;
unsigned int var_12 = 2938303803U;
unsigned short var_13 = (unsigned short)10585;
bool var_14 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)1;
    value_mismatch |= var_11 != (signed char)119;
    value_mismatch |= var_12 != 28954U;
    value_mismatch |= var_13 != (unsigned short)17048;
    value_mismatch |= var_14 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
