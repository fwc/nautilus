/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9868
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9868
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
void test(val<unsigned char> var_0, val<long long int> var_3, val<int> var_4, val<unsigned char> var_5, val<signed char> var_7, val<unsigned short> var_9, val<long long int> var_11, val<long long int> var_12, val<bool> var_14, val<bool> var_15, val<bool> var_16, val<signed char> var_17, val<int> zero, val<long long int*> var_18, val<unsigned int*> var_19, val<int*> var_20, val<signed char*> var_21) {
    *var_18 = (+(((((((/* implicit */val<int>) var_15)) < (1245764802))) ? (((var_11) >> (((((/* implicit */val<int>) var_0)) - (213))))) : (((/* implicit */val<long long int>) (~(((/* implicit */val<int>) var_5))))))));
    *var_19 |= ((((/* implicit */val<bool>) (+(((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) var_14))))))) ? (((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) var_16))))) : (((val<unsigned int>) ((((/* implicit */val<bool>) var_0)) && (((/* implicit */val<bool>) var_12))))));
    *var_20 = ((/* implicit */val<int>) max((*var_20), (((((/* implicit */val<bool>) (((+(((/* implicit */val<int>) var_9)))) - (((/* implicit */val<int>) var_7))))) ? (((((/* implicit */val<bool>) -5660305662587580312LL)) ? (((/* implicit */val<int>) var_16)) : (var_4))) : (((/* implicit */val<int>) var_17))))));
    *var_21 = ((/* implicit */val<signed char>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)230;
long long int var_3 = 554129051678244433LL;
int var_4 = -1765832643;
unsigned char var_5 = (unsigned char)34;
signed char var_7 = (signed char)-45;
unsigned short var_9 = (unsigned short)1626;
long long int var_11 = 7806596793493909086LL;
long long int var_12 = 1505996125241385540LL;
bool var_14 = (bool)1;
bool var_15 = (bool)0;
bool var_16 = (bool)0;
signed char var_17 = (signed char)-126;
int zero = 0;
long long int var_18 = -2373933147306416023LL;
unsigned int var_19 = 585679672U;
int var_20 = -1961107838;
signed char var_21 = (signed char)-60;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 59559606883956LL;
    value_mismatch |= var_19 != 4294967295U;
    value_mismatch |= var_20 != 0;
    value_mismatch |= var_21 != (signed char)81;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_5, var_7, var_9, var_11, var_12, var_14, var_15, var_16, var_17, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
