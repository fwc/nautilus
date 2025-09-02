/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5726
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5726
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
void test(val<signed char> var_1, val<unsigned int> var_2, val<bool> var_3, val<unsigned char> var_4, val<int> var_5, val<unsigned long long int> var_6, val<unsigned char> var_7, val<unsigned char> var_8, val<unsigned long long int> var_9, val<unsigned int> var_10, val<int> zero, val<unsigned char*> var_11, val<bool*> var_12, val<bool*> var_13, val<unsigned short*> var_14, val<unsigned long long int*> var_15) {
    *var_11 = ((/* implicit */val<unsigned char>) max((((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) var_8)), (var_9))))))), (max((var_10), (((/* implicit */val<unsigned int>) var_5))))));
    *var_12 = ((/* implicit */val<bool>) max((((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) (val<short>)-575)))))))), (((((/* implicit */val<bool>) (val<unsigned char>)37)) ? (var_5) : (((/* implicit */val<int>) var_1))))));
    *var_13 = ((/* implicit */val<bool>) (~(max((((/* implicit */val<unsigned long long int>) ((var_9) < (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_7)))))), (var_6)))));
    *var_14 = ((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) var_1))));
    *var_15 = ((/* implicit */val<unsigned long long int>) max((((/* implicit */val<int>) var_1)), ((+(((/* implicit */val<int>) var_3))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-51;
unsigned int var_2 = 3454873046U;
bool var_3 = (bool)1;
unsigned char var_4 = (unsigned char)95;
int var_5 = 499556308;
unsigned long long int var_6 = 15883571730218806663ULL;
unsigned char var_7 = (unsigned char)143;
unsigned char var_8 = (unsigned char)67;
unsigned long long int var_9 = 4165474992069432119ULL;
unsigned int var_10 = 3520270051U;
int zero = 0;
unsigned char var_11 = (unsigned char)58;
bool var_12 = (bool)1;
bool var_13 = (bool)0;
unsigned short var_14 = (unsigned short)8330;
unsigned long long int var_15 = 4476401945965389015ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned char)227;
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (unsigned short)0;
    value_mismatch |= var_15 != 1ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, zero, &var_11, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
