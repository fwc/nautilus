/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6299
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6299
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
void test(val<unsigned int> var_0, val<unsigned int> var_1, val<unsigned long long int> var_7, val<unsigned short> var_13, val<int> zero, val<unsigned int*> var_14, val<signed char*> var_15) {
    *var_14 = max((((((16451782505752163488ULL) >= (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_13))))) ? (var_1) : (var_0))), (((/* implicit */val<unsigned int>) ((var_0) >= ((-(var_1)))))));
    *var_15 = ((/* implicit */val<signed char>) ((val<unsigned char>) var_7));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1584813516U;
unsigned int var_1 = 3348487767U;
unsigned long long int var_7 = 8165651188234653278ULL;
unsigned short var_13 = (unsigned short)60245;
int zero = 0;
unsigned int var_14 = 1762119008U;
signed char var_15 = (signed char)-17;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 3348487767U;
    value_mismatch |= var_15 != (signed char)94;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_7, var_13, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
