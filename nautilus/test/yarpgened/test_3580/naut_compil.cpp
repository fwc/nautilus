/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3580
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3580
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
void test(val<unsigned long long int> var_0, val<unsigned short> var_1, val<short> var_7, val<int> zero, val<bool*> var_13, val<unsigned int*> var_14) {
    *var_13 = ((/* implicit */val<bool>) (-(((/* implicit */val<int>) ((((/* implicit */val<int>) ((((/* implicit */val<bool>) var_7)) && (((/* implicit */val<bool>) var_1))))) < (((/* implicit */val<int>) ((val<unsigned short>) 11183733768157885299ULL))))))));
    *var_14 = ((/* implicit */val<unsigned int>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17423119918735278408ULL;
unsigned short var_1 = (unsigned short)56353;
short var_7 = (short)28365;
int zero = 0;
bool var_13 = (bool)0;
unsigned int var_14 = 2603894015U;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != 591380808U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_7, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
