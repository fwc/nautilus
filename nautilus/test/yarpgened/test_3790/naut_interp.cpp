/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3790
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3790
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
void test(val<short> var_0, val<bool> var_1, val<unsigned int> var_3, val<unsigned short> var_4, val<unsigned int> var_5, val<unsigned int> var_6, val<unsigned long long int> var_8, val<unsigned short> var_11, val<short> var_13, val<unsigned short> var_14, val<unsigned long long int> var_17, val<int> zero, val<unsigned short*> var_19, val<bool*> var_20) {
    *var_19 = ((/* implicit */val<unsigned short>) ((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) var_14))))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_6)) ? (2253283367U) : (var_6)))) : (((((/* implicit */val<bool>) var_5)) ? (var_8) : (var_17))))) & (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_3)) ? (((((/* implicit */val<int>) var_0)) * (((/* implicit */val<int>) var_4)))) : (((/* implicit */val<int>) ((((/* implicit */val<int>) var_11)) != (((/* implicit */val<int>) var_13))))))))));
    *var_20 = ((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) var_4)) >= (((/* implicit */val<int>) min((var_4), (((/* implicit */val<unsigned short>) var_1))))))))) % (var_8)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6491;
bool var_1 = (bool)1;
unsigned int var_3 = 3994212550U;
unsigned short var_4 = (unsigned short)24257;
unsigned int var_5 = 1690341252U;
unsigned int var_6 = 1458087309U;
unsigned long long int var_8 = 6596121408124139205ULL;
unsigned short var_11 = (unsigned short)56964;
short var_13 = (short)14695;
unsigned short var_14 = (unsigned short)22660;
unsigned long long int var_17 = 15883647877684211492ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)28715;
bool var_20 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)24613;
    value_mismatch |= var_20 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_5, var_6, var_8, var_11, var_13, var_14, var_17, zero, &var_19, &var_20);
  checksum();
}
