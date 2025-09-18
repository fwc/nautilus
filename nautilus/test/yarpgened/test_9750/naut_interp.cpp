/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9750
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9750
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
void test(val<unsigned long long int> var_4, val<int> zero, val<short*> var_19, val<unsigned int*> var_20) {
    *var_19 = ((/* implicit */val<short>) min((((/* implicit */val<unsigned int>) 1073610752)), (3604995171U)));
    *var_20 = ((/* implicit */val<unsigned int>) var_4);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 9991331430947036009ULL;
int zero = 0;
short var_19 = (short)12098;
unsigned int var_20 = 2250859594U;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)0;
    value_mismatch |= var_20 != 113974121U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, zero, &var_19, &var_20);
  checksum();
}
