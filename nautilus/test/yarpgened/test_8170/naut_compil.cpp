/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8170
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8170
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
void test(val<signed char> var_5, val<signed char> var_9, val<int> zero, val<unsigned int*> var_14, val<unsigned char*> var_15) {
    *var_14 = ((/* implicit */val<unsigned int>) ((((((/* implicit */val<bool>) 15568497157950193882ULL)) ? (18116527577189985580ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)101))))) != (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) 3017191686145286352ULL))))))));
    *var_15 = ((val<unsigned char>) ((((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_9))))) ? (((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) var_5))))) : (((15568497157950193871ULL) ^ (15568497157950193886ULL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-61;
signed char var_9 = (signed char)-35;
int zero = 0;
unsigned int var_14 = 1744688240U;
unsigned char var_15 = (unsigned char)145;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 1U;
    value_mismatch |= var_15 != (unsigned char)195;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_9, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
