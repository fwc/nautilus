/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3463
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3463
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
void test(val<short> var_4, val<int> var_8, val<int> var_9, val<int> zero, val<unsigned short*> var_10, val<unsigned int*> var_11) {
    *var_10 = ((/* implicit */val<unsigned short>) 4294967277U);
    *var_11 = ((/* implicit */val<unsigned int>) ((((((/* implicit */val<bool>) ((var_8) | (((/* implicit */val<int>) var_4))))) ? (2126119862970384819LL) : (((((/* implicit */val<bool>) (val<unsigned char>)12)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)42082))) : (-6431953287223651551LL))))) / (((((/* implicit */val<bool>) (val<unsigned short>)9608)) ? (((/* implicit */val<long long int>) var_9)) : (8198748734528821151LL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)2532;
int var_8 = -665325949;
int var_9 = -602985400;
int zero = 0;
unsigned short var_10 = (unsigned short)18655;
unsigned int var_11 = 2368714252U;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned short)65517;
    value_mismatch |= var_11 != 768978337U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_8, var_9, zero, &var_10, &var_11);
  checksum();
}
