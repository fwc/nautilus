/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7448
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7448
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
void test(val<unsigned int> var_8, val<signed char> var_9, val<int> zero, val<int*> var_14, val<short*> var_15) {
    *var_14 = ((/* implicit */val<int>) max((*var_14), (((/* implicit */val<int>) (+(var_8))))));
    *var_15 = ((/* implicit */val<short>) (~(max((((/* implicit */val<unsigned long long int>) max(((val<signed char>)-38), (var_9)))), (min((2115979871445047858ULL), (((/* implicit */val<unsigned long long int>) (val<short>)5399))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 2023893160U;
signed char var_9 = (signed char)-94;
int zero = 0;
int var_14 = 834915880;
short var_15 = (short)18997;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 2023893160;
    value_mismatch |= var_15 != (short)37;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_9, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
