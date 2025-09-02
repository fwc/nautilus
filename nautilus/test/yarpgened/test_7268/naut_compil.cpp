/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7268
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7268
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
void test(val<unsigned int> var_2, val<unsigned long long int> var_4, val<unsigned char> var_6, val<unsigned int> var_7, val<signed char> var_8, val<bool> var_9, val<unsigned short> var_11, val<int> zero, val<short*> var_14, val<short*> var_15, val<signed char*> var_16, val<unsigned char*> var_17) {
    *var_14 = ((/* implicit */val<short>) ((max((((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_6))) >= (var_7)))), (((((/* implicit */val<int>) var_9)) >> (((var_7) - (408385687U))))))) >> ((+(((/* implicit */val<int>) var_9))))));
    *var_15 = ((/* implicit */val<short>) var_8);
    *var_16 = ((/* implicit */val<signed char>) (+(((/* implicit */val<int>) (val<short>)-2))));
    *var_17 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_11))) : (var_2)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 90042928U;
unsigned long long int var_4 = 3567515188792640190ULL;
unsigned char var_6 = (unsigned char)14;
unsigned int var_7 = 408385696U;
signed char var_8 = (signed char)30;
bool var_9 = (bool)1;
unsigned short var_11 = (unsigned short)34838;
int zero = 0;
short var_14 = (short)27031;
short var_15 = (short)8818;
signed char var_16 = (signed char)89;
unsigned char var_17 = (unsigned char)251;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (short)0;
    value_mismatch |= var_15 != (short)30;
    value_mismatch |= var_16 != (signed char)-2;
    value_mismatch |= var_17 != (unsigned char)22;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_6, var_7, var_8, var_9, var_11, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
