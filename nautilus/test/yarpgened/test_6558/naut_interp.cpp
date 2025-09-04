/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6558
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6558
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
void test(val<short> var_6, val<short> var_8, val<int> zero, val<short*> var_10, val<short*> var_11) {
    *var_10 |= (val<short>)-3690;
    *var_11 = ((/* implicit */val<short>) max((*var_11), (((/* implicit */val<short>) (((+(((/* implicit */val<int>) var_8)))) < (((/* implicit */val<int>) min((var_6), (((val<short>) 12512654614361447265ULL))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)11088;
short var_8 = (short)7640;
int zero = 0;
short var_10 = (short)2742;
short var_11 = (short)-20735;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)-1098;
    value_mismatch |= var_11 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_8, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
