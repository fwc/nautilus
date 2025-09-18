/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7251
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7251
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
void test(val<unsigned long long int> var_2, val<signed char> var_3, val<unsigned int> var_4, val<signed char> var_10, val<unsigned int> var_11, val<unsigned short> var_13, val<int> zero, val<signed char*> var_14, val<unsigned short*> var_15, val<unsigned long long int*> var_16) {
    *var_14 = ((/* implicit */val<signed char>) ((((val<bool>) ((val<unsigned int>) var_2))) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_10)) || (((/* implicit */val<bool>) var_11)))))));
    *var_15 = ((/* implicit */val<unsigned short>) var_4);
    *var_16 -= ((/* implicit */val<unsigned long long int>) var_13);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9833900024878079990ULL;
signed char var_3 = (signed char)-27;
unsigned int var_4 = 4291046901U;
signed char var_10 = (signed char)63;
unsigned int var_11 = 1231003851U;
unsigned short var_13 = (unsigned short)56013;
int zero = 0;
signed char var_14 = (signed char)-38;
unsigned short var_15 = (unsigned short)11760;
unsigned long long int var_16 = 1009241836968549555ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (signed char)-27;
    value_mismatch |= var_15 != (unsigned short)11765;
    value_mismatch |= var_16 != 1009241836968493542ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_10, var_11, var_13, zero, &var_14, &var_15, &var_16);
  checksum();
}
