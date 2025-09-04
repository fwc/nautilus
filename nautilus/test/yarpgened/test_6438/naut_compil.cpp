/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6438
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6438
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
void test(val<short> var_2, val<short> var_4, val<long long int> var_7, val<short> var_8, val<int> zero, val<unsigned long long int*> var_14, val<unsigned long long int*> var_15) {
    *var_14 = ((/* implicit */val<unsigned long long int>) (((-(max((((/* implicit */val<long long int>) var_2)), (var_7))))) & (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<short>) (val<short>)-3770)))) < (1048064ULL)))))));
    *var_15 = ((/* implicit */val<unsigned long long int>) (~((~(((/* implicit */val<int>) ((((/* implicit */val<int>) var_4)) > (((/* implicit */val<int>) var_8)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)20521;
short var_4 = (short)15459;
long long int var_7 = -7073901357945581005LL;
short var_8 = (short)-14674;
int zero = 0;
unsigned long long int var_14 = 7233002957669305429ULL;
unsigned long long int var_15 = 10004529963467369473ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 0ULL;
    value_mismatch |= var_15 != 1ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_7, var_8, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
