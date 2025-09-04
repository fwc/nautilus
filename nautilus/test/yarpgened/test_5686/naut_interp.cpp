/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5686
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5686
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
void test(val<int> zero, val<signed char*> var_20, val<unsigned char*> var_21, val<unsigned int*> var_22) {
    *var_20 &= ((/* implicit */val<signed char>) (val<unsigned char>)10);
    *var_21 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) (val<unsigned char>)239)) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) max((2603763447U), (1377921449U)))) ? (((val<unsigned int>) (val<unsigned char>)230)) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)93)))))) : (4366965212342101593LL)));
    *var_22 = ((/* implicit */val<unsigned int>) (val<unsigned char>)134);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
signed char var_20 = (signed char)37;
unsigned char var_21 = (unsigned char)182;
unsigned int var_22 = 1522282886U;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (signed char)0;
    value_mismatch |= var_21 != (unsigned char)230;
    value_mismatch |= var_22 != 134U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
