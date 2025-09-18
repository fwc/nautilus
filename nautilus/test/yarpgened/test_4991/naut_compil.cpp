/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4991
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4991
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
void test(val<signed char> var_2, val<int> zero, val<short*> var_14, val<unsigned char*> var_15) {
    *var_14 = ((/* implicit */val<short>) min((*var_14), (((/* implicit */val<short>) max(((+((-(((/* implicit */val<int>) (val<bool>)1)))))), (((/* implicit */val<int>) ((((/* implicit */val<int>) var_2)) != (((/* implicit */val<int>) (val<bool>)1))))))))));
    *var_15 = ((/* implicit */val<unsigned char>) max((*var_15), (((/* implicit */val<unsigned char>) max((((/* implicit */val<short>) (val<bool>)1)), ((val<short>)32761))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-70;
int zero = 0;
short var_14 = (short)7762;
unsigned char var_15 = (unsigned char)217;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (short)1;
    value_mismatch |= var_15 != (unsigned char)249;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, zero, &var_14, &var_15);
  checksum();
}
