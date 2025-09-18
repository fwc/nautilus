/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9344
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9344
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
void test(val<signed char> var_0, val<signed char> var_1, val<unsigned char> var_2, val<unsigned char> var_3, val<unsigned short> var_4, val<unsigned int> var_5, val<int> var_6, val<signed char> var_8, val<unsigned short> var_9, val<signed char> var_10, val<unsigned char> var_11, val<unsigned char> var_12, val<signed char> var_14, val<int> zero, val<int*> var_15, val<int*> var_16, val<int*> var_17, val<unsigned char*> var_18) {
    *var_15 = ((/* implicit */val<int>) ((var_5) & (((/* implicit */val<unsigned int>) max((((/* implicit */val<int>) ((((/* implicit */val<int>) var_0)) > (((/* implicit */val<int>) var_9))))), ((~(((/* implicit */val<int>) var_3)))))))));
    *var_16 = ((/* implicit */val<int>) max((*var_16), (((((/* implicit */val<int>) var_12)) * (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_10)) || (((((/* implicit */val<bool>) var_9)) || (((/* implicit */val<bool>) var_2)))))))))));
    *var_17 = ((/* implicit */val<int>) max(((val<unsigned char>)30), (((/* implicit */val<unsigned char>) ((val<signed char>) ((((/* implicit */val<int>) var_8)) * (((/* implicit */val<int>) var_2))))))));
    *var_18 ^= ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_12))) - (((((/* implicit */val<unsigned int>) var_6)) + (var_5)))))) ? (((/* implicit */val<int>) var_14)) : ((-(((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_11))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)62;
signed char var_1 = (signed char)-72;
unsigned char var_2 = (unsigned char)218;
unsigned char var_3 = (unsigned char)41;
unsigned short var_4 = (unsigned short)61898;
unsigned int var_5 = 1945627837U;
int var_6 = -1161957008;
signed char var_8 = (signed char)83;
unsigned short var_9 = (unsigned short)40894;
signed char var_10 = (signed char)-44;
unsigned char var_11 = (unsigned char)223;
unsigned char var_12 = (unsigned char)21;
signed char var_14 = (signed char)-113;
int zero = 0;
int var_15 = -1049488611;
int var_16 = 1177051621;
int var_17 = 355621415;
unsigned char var_18 = (unsigned char)11;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 0;
    value_mismatch |= var_16 != 1177051621;
    value_mismatch |= var_17 != 174;
    value_mismatch |= var_18 != (unsigned char)132;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_8, var_9, var_10, var_11, var_12, var_14, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
}
