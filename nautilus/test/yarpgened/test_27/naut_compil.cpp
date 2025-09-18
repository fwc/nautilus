/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 27
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=27
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
void test(val<unsigned short> var_4, val<unsigned int> var_8, val<int> var_11, val<unsigned char> var_14, val<int> zero, val<unsigned long long int*> var_18, val<signed char*> var_19) {
    *var_18 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<unsigned int>) var_11)) : (var_8)));
    *var_19 = ((/* implicit */val<signed char>) min((((val<unsigned long long int>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) var_14)) : (((/* implicit */val<int>) var_4))))), (((/* implicit */val<unsigned long long int>) var_8))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)61436;
unsigned int var_8 = 1258992497U;
int var_11 = 122664462;
unsigned char var_14 = (unsigned char)44;
int zero = 0;
unsigned long long int var_18 = 18093210171106251478ULL;
signed char var_19 = (signed char)-26;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 122664462ULL;
    value_mismatch |= var_19 != (signed char)44;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_8, var_11, var_14, zero, &var_18, &var_19);
  checksum();
}
