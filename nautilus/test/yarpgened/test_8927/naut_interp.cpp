/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8927
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8927
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
void test(val<unsigned long long int> var_1, val<short> var_4, val<unsigned int> var_8, val<int> zero, val<int*> var_10, val<int*> var_11, val<unsigned int*> var_12) {
    *var_10 = ((/* implicit */val<int>) var_1);
    *var_11 = ((/* implicit */val<int>) max((*var_11), (((((((/* implicit */val<int>) (val<signed char>)-115)) + (2147483647))) << (((((/* implicit */val<int>) (val<signed char>)61)) - (61)))))));
    *var_12 = ((/* implicit */val<unsigned int>) min(((!(((/* implicit */val<bool>) var_8)))), (((((/* implicit */val<bool>) var_4)) && (((/* implicit */val<bool>) min((((/* implicit */val<long long int>) (val<signed char>)0)), (7656466453320792382LL))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11496878815175090172ULL;
short var_4 = (short)137;
unsigned int var_8 = 4219437716U;
int zero = 0;
int var_10 = -1022968153;
int var_11 = 1993790849;
unsigned int var_12 = 1838015824U;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != -1942380548;
    value_mismatch |= var_11 != 2147483532;
    value_mismatch |= var_12 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_8, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
