/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9226
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9226
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
void test(val<unsigned char> var_9, val<int> var_10, val<unsigned int> var_12, val<unsigned long long int> var_14, val<int> zero, val<int*> var_17, val<short*> var_18, val<long long int*> var_19) {
    *var_17 |= ((val<int>) min((((/* implicit */val<unsigned long long int>) var_10)), (var_14)));
    *var_18 = ((/* implicit */val<short>) ((val<unsigned int>) ((val<unsigned char>) (!(((/* implicit */val<bool>) var_9))))));
    *var_19 = ((/* implicit */val<long long int>) min((*var_19), (((/* implicit */val<long long int>) (+((-((~(var_12))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)100;
int var_10 = 1658445404;
unsigned int var_12 = 1068470636U;
unsigned long long int var_14 = 4124096449291966745ULL;
int zero = 0;
int var_17 = 1255283094;
short var_18 = (short)-18293;
long long int var_19 = 8505163966420289933LL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 1792794590;
    value_mismatch |= var_18 != (short)0;
    value_mismatch |= var_19 != 1068470637LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, var_10, var_12, var_14, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
