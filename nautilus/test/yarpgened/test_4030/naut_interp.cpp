/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4030
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4030
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
void test(val<bool> var_2, val<int> var_4, val<unsigned long long int> var_5, val<unsigned char> var_6, val<unsigned int> var_9, val<unsigned long long int> var_10, val<unsigned char> var_11, val<int> zero, val<int*> var_12, val<unsigned int*> var_13, val<unsigned short*> var_14) {
    *var_12 &= ((/* implicit */val<int>) var_6);
    *var_13 += ((/* implicit */val<unsigned int>) min((min((((/* implicit */val<unsigned long long int>) var_4)), ((+(var_10))))), (((/* implicit */val<unsigned long long int>) (val<short>)-7683))));
    *var_14 = ((/* implicit */val<unsigned short>) min((min((var_5), (min((var_5), (((/* implicit */val<unsigned long long int>) var_2)))))), (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<unsigned int>) ((val<unsigned char>) var_11))), ((~(var_9))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_2 = (bool)1;
int var_4 = -1506279276;
unsigned long long int var_5 = 12068279342058340611ULL;
unsigned char var_6 = (unsigned char)154;
unsigned int var_9 = 2271430989U;
unsigned long long int var_10 = 9847613807917056440ULL;
unsigned char var_11 = (unsigned char)132;
int zero = 0;
int var_12 = -1524975776;
unsigned int var_13 = 1671130812U;
unsigned short var_14 = (unsigned short)37852;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 0;
    value_mismatch |= var_13 != 3183226996U;
    value_mismatch |= var_14 != (unsigned short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_5, var_6, var_9, var_10, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
}
